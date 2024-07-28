#ifndef PARSER_MLPASS2_ACTIONS_HPP
#define PARSER_MLPASS2_ACTIONS_HPP

#include <boost/config/warning_disable.hpp>
#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>
#include <boost/spirit/home/x3/support/utility/annotate_on_success.hpp>
#include "io/_impl/parser/mlpass2/utility_functions.hpp"

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
namespace mlpass2 {

// Actions

namespace x3 = boost::spirit::x3;
struct data_tag;

struct actor_act
{
    template <typename T, typename It, typename Ctx>
    inline void
    on_success(It const& first, It const& last, T& actor_spec, Ctx const& ctx)
    {
        (void)first;
        (void)last;
        auto net = x3::get<data_tag>(ctx).get().first;
        auto& meta = x3::get<data_tag>(ctx).get().second;

        std::string actor_name = actor_spec.at(0);
        auto actor = net->actors()->get(actor_name);

        if (!actor)
        {
            throw core::WrongFormatException("actor " + actor_name + " must be present in at least one layer");
        }

        read_attr_values(net->actors()->attr(), actor, meta.actor_attributes, actor_spec, 1);
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
        auto& meta = x3::get<data_tag>(ctx).get().second;

        // Get vertex (must be there after pass 1)
        std::string layer_name = vertex.at(1);
        auto layer = net->layers()->get(layer_name);

        std::string actor_name = vertex.at(0);
        auto actor = net->actors()->get(actor_name);

        read_attr_values(layer->vertices()->attr(), actor, meta.vertex_attributes[layer_name], vertex, 2);
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
            // Get edge (must be there after pass 1)
            std::string actor_name1 = edge.at(0);
            std::string actor_name2 = edge.at(1);
            std::string layer_name = edge.at(2);
            auto layer = net->layers()->get(layer_name);
            auto actor1 = net->actors()->get(actor_name1);
            auto actor2 = net->actors()->get(actor_name2);
            auto e = layer->edges()->add(actor1, actor2);

            read_attr_values(layer->edges()->attr(), e, meta.intralayer_edge_attributes[layer_name], edge, 3);

        }

        else // multilayer
        {
            if (edge.size() < 4)
                throw core::WrongFormatException("\"" +
                                                 edge.at(0) + "...\" actor name, layer name, actor name, layer name expected");

            // Get edge (must be there after pass 1)
            std::string actor_name1 = edge.at(0);
            std::string layer_name1 = edge.at(1);
            std::string actor_name2 = edge.at(2);
            std::string layer_name2 = edge.at(3);

            auto layer1 = net->layers()->get(layer_name1);
            auto layer2 = net->layers()->get(layer_name2);
            auto actor1 = net->actors()->get(actor_name1);
            auto actor2 = net->actors()->get(actor_name2);

            if (layer1 == layer2)
            {
                auto e = layer1->edges()->get(actor1, actor2);

                read_attr_values(layer1->edges()->attr(), e, meta.intralayer_edge_attributes[layer_name1], edge, 4);
            }

            else
            {
                auto iedges = net->interlayer_edges()->get(layer1,layer2);
                auto e = net->interlayer_edges()->get(actor1, layer1, actor2, layer2);

                read_attr_values(iedges->attr(), e, meta.interlayer_edge_attributes[layer_name1][layer_name2], edge, 4);
            }
        }
    }
};

}
}
}
}

#endif
