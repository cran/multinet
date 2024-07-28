#ifndef PARSER_MLPASS1_ACTIONS_HPP
#define PARSER_MLPASS1_ACTIONS_HPP

#include <boost/config/warning_disable.hpp>
#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>
#include <boost/spirit/home/x3/support/utility/annotate_on_success.hpp>
#include "io/_impl/parser/mlpass1/utility_functions.hpp"

#include "io/_impl/MultilayerMetadata.hpp"
#include "core/exceptions/WrongFormatException.hpp"
#include "core/exceptions/DuplicateElementException.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>

namespace uu {
namespace net {
namespace parser {
namespace mlpass1 {

// Actions

namespace x3 = boost::spirit::x3;
struct data_tag;

struct version_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& version, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        (void)ctx;

        if (version != 3.0)
        {
            throw core::WrongFormatException("Version 3.0 required, " + std::to_string(version) + " found");
        }

    }
};

struct type_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& net_type, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        (void)ctx;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (net_type == "multiplex")
        {
            meta.is_multiplex = true;
        }

        else if (net_type == "multilayer")
        {
            meta.is_multiplex = false;
        }

        else
        {
            throw core::WrongFormatException("unsupported network type: " + net_type);
        }
    }
};

struct layer_def_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& layer_spec, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (meta.is_multiplex)
        {
            if (layer_spec.size() < 2)
            {
                throw core::WrongFormatException("\"" +
                                                 layer_spec.at(0) + "...\" layer name and directionality required");
            }

            std::string layer_name = layer_spec.at(0);
            auto l = net->layers()->get(layer_name);

            if (l)
            {
                throw core::WrongFormatException("layer " + layer_name + " already declared");
            }

            GraphType layer_type;

            for (size_t idx = 1; idx<layer_spec.size(); idx++)
            {
                std::string layer_feature = layer_spec.at(idx);
                read_layer_type(layer_feature, layer_type);
            }

            auto dir = layer_type.is_directed ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
            auto loops = layer_type.allows_loops ? LoopMode::ALLOWED : LoopMode::DISALLOWED;
            l = net->layers()->add(layer_name, dir, loops);
        }

        else
        {
            // PROBLEM WITH SPIRIT, MISSING hold DIRECTIVE
            // FIRST LAYER DUPLICATED WHEN ONLY ONE PRESENT
            // SO WE START FROM INDEX 1
            if (layer_spec.size() < 4)
            {
                throw core::WrongFormatException("\"" +
                                                 layer_spec.at(1) + "...\" two layer names and directionality required");
            }

            std::string layer_name1 = layer_spec.at(1);
            std::string layer_name2 = layer_spec.at(2);

            if (layer_name1 == layer_name2)
            {
                auto l = net->layers()->get(layer_name1);

                if (l)
                {
                    throw core::WrongFormatException("layer " + layer_name1 + " already declared");
                }

                GraphType layer_type;

                for (size_t idx = 3; idx<layer_spec.size(); idx++)
                {
                    std::string layer_feature = layer_spec.at(idx);
                    read_layer_type(layer_feature, layer_type);
                }

                auto dir = layer_type.is_directed ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
                auto loops = layer_type.allows_loops ? LoopMode::ALLOWED : LoopMode::DISALLOWED;
                net->layers()->add(layer_name1, dir, loops);
            }

            else
            {

                auto layer1 = net->layers()->get(layer_name1);

                if (!layer1)
                {
                    throw core::WrongFormatException("undefined layer " + layer_name1);
                }

                auto layer2 = net->layers()->get(layer_name2);

                if (!layer2)
                {
                    throw core::WrongFormatException("undefined layer " + layer_name2);
                }

                std::string dir_name = layer_spec.at(3);
                EdgeDir dir;

                if (dir_name=="directed")
                {
                    dir = EdgeDir::DIRECTED;
                }

                else
                {
                    dir = EdgeDir::UNDIRECTED;
                }

                net->interlayer_edges()->init(layer1, layer2, dir);
            }
        }
    }
};

struct actor_attr_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& actor_attr_spec, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (actor_attr_spec.size()!=2)
            throw core::WrongFormatException("\"" +
                                             actor_attr_spec.at(0) + "...\" attribute name and attribute type expected");

        std::string attr_name = actor_attr_spec.at(0);
        auto attr_type = read_attr_type(actor_attr_spec.at(1));
        net->actors()->attr()->add(attr_name, attr_type);
        meta.actor_attributes.push_back(core::Attribute(attr_name, attr_type));

    }
};

struct vertex_attr_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& vertex_attr_spec, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (vertex_attr_spec.size()!=3)
            throw core::WrongFormatException("\"" +
                                             vertex_attr_spec.at(0) + "...\" layer name, attribute name and attribute type expected");

        // add layer if not previously defined
        std::string layer_name = vertex_attr_spec.at(0);

        auto layer = net->layers()->get(layer_name);

        if (!layer)
        {
            layer = net->layers()->add(layer_name);
        }

        // read attribute
        std::string attr_name = vertex_attr_spec.at(1);
        auto attr_type = read_attr_type(vertex_attr_spec.at(2));
        layer->vertices()->attr()->add(attr_name, attr_type);
        meta.vertex_attributes[layer_name].push_back(core::Attribute(attr_name,attr_type));
    }
};

struct edge_attr_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& edge_attr_spec, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (edge_attr_spec.size()==2)
        {
            std::string attr_name = edge_attr_spec.at(0);
            auto attr_type = read_attr_type(edge_attr_spec.at(1));
            meta.global_edge_attributes.push_back(core::Attribute(attr_name,attr_type));
            // Added to all layers at the end (final_act)
        }

        // SPIRIT ISSUE - SEE ABOVE - START FROM idx 1
        else if (edge_attr_spec.size()==4)
        {
            // add layer if not previously defined
            std::string layer_name = edge_attr_spec.at(1);

            auto layer = net->layers()->get(layer_name);

            if (!layer)
            {
                layer = net->layers()->add(layer_name);
            }

            // read attribute
            std::string attr_name = edge_attr_spec.at(2);
            auto attr_type = read_attr_type(edge_attr_spec.at(3));
            layer->edges()->attr()->add(attr_name, attr_type);

            meta.intralayer_edge_attributes[layer_name].push_back(core::Attribute(attr_name,attr_type));
        }

        // SPIRIT ISSUE - SEE ABOVE - START FROM idx 3
        else if (edge_attr_spec.size()==7)
        {
            if (meta.is_multiplex)
            {
                throw core::WrongFormatException("interlayer edges not allowed in multiplex networks");
            }

            // add layers if not previously defined
            std::string layer_name1 = edge_attr_spec.at(3);

            auto layer1 = net->layers()->get(layer_name1);

            if (!layer1)
            {
                layer1 = net->layers()->add(layer_name1);
            }

            std::string layer_name2 = edge_attr_spec.at(4);

            auto layer2 = net->layers()->get(layer_name2);

            if (!layer2)
            {
                layer2 = net->layers()->add(layer_name2);
            }

            auto iedges = net->interlayer_edges()->get(layer1,layer2);

            if (!iedges)
            {
                net->interlayer_edges()->init(layer1, layer2, EdgeDir::UNDIRECTED);
            }

            // read attribute
            std::string attr_name = edge_attr_spec.at(5);
            auto attr_type = read_attr_type(edge_attr_spec.at(6));

            bool res = iedges->attr()->add(attr_name, attr_type);

            if (!res)
            {
                throw core::DuplicateElementException("edge attribute " + attr_name);
            }

            meta.interlayer_edge_attributes[layer_name1][layer_name2].push_back(core::Attribute(attr_name,attr_type));

            meta.interlayer_edge_attributes[layer_name2][layer_name1].push_back(core::Attribute(attr_name,attr_type));
        }
    }
};

struct vertex_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& vertex, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;

        // Get layer (or create it)
        std::string layer_name = vertex.at(1);
        auto layer = net->layers()->get(layer_name);

        if (!layer)
        {
            layer = net->layers()->add(layer_name);
        }

        std::string actor_name = vertex.at(0);

        auto actor = net->actors()->get(actor_name);

        if (!actor)
        {
            actor = layer->vertices()->add(actor_name);
        }

        else
        {
            layer->vertices()->add(actor);
        }

        // attributes read in pass 2
    }
};

struct edge_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& edge, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        if (meta.is_multiplex)
        {
            std::string actor_name1 = edge.at(0);
            std::string actor_name2 = edge.at(1);
            std::string layer_name = edge.at(2);
            auto layer = net->layers()->get(layer_name);

            if (!layer)
            {
                layer = net->layers()->add(layer_name);
            }

            auto actor1 = net->actors()->get(actor_name1);

            if (!actor1)
            {
                actor1 = layer->vertices()->add(actor_name1);
            }

            else
            {
                layer->vertices()->add(actor1);
            }

            auto actor2 = net->actors()->get(actor_name2);

            if (!actor2)
            {
                actor2 = layer->vertices()->add(actor_name2);
            }

            else
            {
                layer->vertices()->add(actor2);
            }

            auto e = layer->edges()->add(actor1, actor2);

            if (!e)
            {
                e = layer->edges()->get(actor1, actor2);
            }

            // attributes read in pass 2

        }

        else // multilayer
        {
            if (edge.size() < 4)
                throw core::WrongFormatException("\"" +
                                                 edge.at(0) + "...\" actor name, layer name, actor name, layer name expected");

            // Add default layers if not defined yet
            std::string actor_name1 = edge.at(0);
            std::string layer_name1 = edge.at(1);
            std::string actor_name2 = edge.at(2);
            std::string layer_name2 = edge.at(3);

            auto layer1 = net->layers()->get(layer_name1);

            if (!layer1)
            {
                layer1 = net->layers()->add(layer_name1);
            }

            auto layer2 = net->layers()->get(layer_name2);

            if (!layer2)
            {
                layer2 = net->layers()->add(layer_name2);
            }

            auto actor1 = net->actors()->get(actor_name1);

            if (!actor1)
            {
                actor1 = layer1->vertices()->add(actor_name1);
            }

            else
            {
                layer1->vertices()->add(actor1);
            }

            auto actor2 = net->actors()->get(actor_name2);

            if (!actor2)
            {
                actor2 = layer2->vertices()->add(actor_name2);
            }

            else
            {
                layer2->vertices()->add(actor2);
            }

            if (layer1 == layer2)
            {
                auto e = layer1->edges()->add(actor1, actor2);

                if (!e)
                {
                    e = layer1->edges()->get(actor1, actor2);
                }

                // attributes read in pass 2
            }

            else
            {
                auto iedges = net->interlayer_edges()->get(layer1,layer2);

                if (!iedges)
                {
                    net->interlayer_edges()->init(layer1, layer2, EdgeDir::UNDIRECTED);
                }

                auto e = net->interlayer_edges()->add(actor1, layer1, actor2, layer2);

                if (!e)
                {
                    e = net->interlayer_edges()->get(actor1, layer1, actor2, layer2);
                }

                // attributes read in pass 2
            }
        }
    }
};

struct final_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& attr, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        (void)attr;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        // Global edge attributes added to all layers at the end.
        for (auto edge_att: meta.global_edge_attributes)
        {
            for (auto layer: *net->layers())
            {
                layer->edges()->attr()->add(edge_att.name, edge_att.type);
                meta.intralayer_edge_attributes[layer->name].push_back(edge_att);
            }

            for (auto layer1: *net->layers())
            {
                for (auto layer2: *net->layers())
                {
                    if (layer1 <= layer2)
                    {
                        continue;
                    }

                    auto iedges = net->interlayer_edges()->get(layer1,layer2);

                    if (iedges)
                    {
                        iedges->attr()->add(edge_att.name, edge_att.type);
                    }

                    meta.interlayer_edge_attributes[layer1->name][layer2->name].push_back(edge_att);
                    meta.interlayer_edge_attributes[layer2->name][layer1->name].push_back(edge_att);
                }
            }

        }
    }
};

// Error handling

namespace x3 = boost::spirit::x3;

struct error_handler
{
    template <typename Iterator, typename Exception, typename Context>
    x3::error_handler_result
    on_error(
        Iterator& first,
        Iterator const& last,
        Exception const& x,
        Context const& context
    )
    {
        (void)first;
        (void)last;
        auto& error_handler = x3::get<x3::error_handler_tag>(context).get();
        std::string message = "Format error! Expecting " + x.which() + " here:";
        error_handler(x.where(), message);
        return x3::error_handler_result::fail;
    }
};

}
}
}
}

#endif
