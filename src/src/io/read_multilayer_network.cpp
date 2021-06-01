#include "core/exceptions/DuplicateElementException.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "io/read_multilayer_network.hpp"
#include "io/read_network.hpp"


namespace uu {
namespace net {

std::unique_ptr<MultilayerNetwork>
read_multilayer_network(
    const std::string& infile,
    const std::string& name,
    char separator,
    bool align
)
{

    // Read metadata
    MultilayerMetadata meta = read_multilayer_metadata(infile, ',');
    //EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph & add attributes

    auto net = std::make_unique<MultilayerNetwork>(name);

    for (auto l: meta.layers)
    {
        std::string layer_name = l.first;
        auto layer_type = l.second;

        //std::cout << "creating layer " << l.first << " " << layer_type.is_directed << std::endl;
        auto dir = layer_type.is_directed ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
        auto loops = layer_type.allows_loops ? LoopMode::ALLOWED : LoopMode::DISALLOWED;
        net->layers()->add(layer_name, dir, loops);
    }

    for (auto inter: meta.interlayer_dir)
    {
        std::string layer_name1 = inter.first.first;
        std::string layer_name2 = inter.first.second;
        auto layer1 = net->layers()->get(layer_name1);

        if (!layer1)
        {
            throw core::WrongFormatException("unknown layer name (" + layer_name1 + ")");
        }

        auto layer2 = net->layers()->get(layer_name2);

        if (!layer2)
        {
            throw core::WrongFormatException("unknown layer name (" + layer_name2 + ")");
        }

        auto dir = inter.second ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
        net->interlayer_edges()->init(layer1, layer2, dir);

    }


    for (auto&& attr: meta.vertex_attributes)
    {

        net->actors()->attr()->add(attr.name, attr.type);

    }

    for (auto layer_attr: meta.intralayer_vertex_attributes)
    {
        std::string layer_name = layer_attr.first;

        for (auto&& attr: layer_attr.second)
        {
            net->layers()->get(layer_name)->vertices()->attr()->add(attr.name, attr.type);
        }
    }

    for (auto layer_attr: meta.intralayer_edge_attributes)
    {
        std::string layer_name = layer_attr.first;

        for (auto&& attr: layer_attr.second)
        {
            bool res = net->layers()->get(layer_name)->edges()->attr()->add(attr.name, attr.type);

            if (!res)
            {
                throw core::DuplicateElementException("edge attribute " + attr.name);
            }
        }
    }

    // Read data (vertices, edges, attribute values)
    read_multilayer_data(net.get(),  meta, infile, separator);

    read_actor_attributes(net.get(),  meta, infile, separator);
    
    // Align
    if (align)
    {
        for (auto layer: *net->layers())
        {
            for (auto a: *net->actors())
            {
                layer->vertices()->add(a);
            }
        }
    }

    return net;

}


template <>
Network*
read_layer(
    MultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    (void)line_number; // param not used
    std::string layer_name = fields.at(from_idx);

    auto layer = ml->layers()->get(layer_name);

    if (!layer)
    {
        layer = ml->layers()->add(layer_name, uu::net::EdgeDir::UNDIRECTED);
    }

    return layer;
}

template <>
void
read_vertex(
    MultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    core::assert_not_null(ml, "read_vertex", "ml");
    
    std::string actor_name = fields.at(0);

    auto actor = ml->actors()->get(actor_name);
    
    if (!actor)
    {
        throw core::ElementNotFoundException("actor " + actor_name + " must exist in at least one layer");
    }
    read_attr_values(ml->actors()->attr(), actor, meta.vertex_attributes, fields, 1, line_number);

}

template <>
void
read_intralayer_vertex(
    MultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    core::assert_not_null(ml, "read_intralayer_vertex", "ml");
    auto l = read_layer<MultilayerNetwork, Network>(ml, fields, 1, line_number);
    auto v = read_actor(ml, l, fields, 0, line_number);
    
    
    auto v_attr = meta.intralayer_vertex_attributes.find(l->name);

    if (v_attr != meta.intralayer_vertex_attributes.end())
    {
        read_attr_values(l->vertices()->attr(), v, v_attr->second, fields, 2, line_number);
    }
}

template <>
void
read_intralayer_edge(
    MultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    core::assert_not_null(ml, "read_intralayer_edge", "ml");

    auto l = read_layer<MultilayerNetwork, Network>(ml, fields, 2, line_number);

    auto v1 = read_actor(ml, l, fields, 0, line_number);
    auto v2 = read_actor(ml, l, fields, 1, line_number);

    /*if (!meta.layers.at(l.name).allows_loops)
    if (v1 == v2)
    {
        return;
    }
    */

    auto e = l->edges()->add(v1,v2);

    auto e_attr = meta.intralayer_edge_attributes.find(l->name);

    if (e_attr != meta.intralayer_edge_attributes.end())
    {
        read_attr_values(l->edges()->attr(), e, e_attr->second, fields, 3, line_number);
    }
}


template <>
void
read_interlayer_edge(
    MultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    (void)meta; // param not used
    core::assert_not_null(ml, "read_interlayer_edge", "ml");
    auto l1 = read_layer<MultilayerNetwork, Network>(ml, fields, 1, line_number);
    auto v1 = read_actor(ml, l1, fields, 0, line_number);
    auto l2 = read_layer<MultilayerNetwork, Network>(ml, fields, 3, line_number);
    auto v2 = read_actor(ml, l2, fields, 2, line_number);

    if (l1==l2)
    {
        auto e = l1->edges()->add(v1,v2);

        auto e_attr = meta.intralayer_edge_attributes.find(l1->name);

        if (e_attr != meta.intralayer_edge_attributes.end())
        {
            read_attr_values(l1->edges()->attr(), e, e_attr->second, fields, 4, line_number);
        }
    }

    else
    {
        //auto e =
        ml->interlayer_edges()->add(v1,l1,v2,l2);

        // @todo attr
        //read_attr_values(ml->interlayer_edges()->attr(), e, meta.interlayer_edge_attributes, fields, 4, line_number);

    }

}

}
}
