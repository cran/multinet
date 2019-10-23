/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "io/read_multilayer_network.hpp"
#include "io/read_network.hpp"


namespace uu {
namespace net {

std::unique_ptr<AttributedHomogeneousMultilayerNetwork>
read_attributed_homogeneous_multilayer_network(
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

    auto net = create_attributed_homogeneous_multilayer_network(name);

    for (auto l: meta.layers)
    {
        std::string layer_name = l.first;
        auto layer_type = l.second;
        //std::cout << "creating layer " << l.first << " " << layer_type.is_directed << std::endl;
        auto dir = layer_type.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;
        auto layer = std::make_unique<Network>(layer_name, dir, layer_type.allows_loops);
        net->layers()->add(std::move(layer));
    }

    for (auto attr: meta.vertex_attributes)
    {
        net->vertices()->attr()->add(attr.name, attr.type);
    }

    /*
    for (auto attr: meta.edge_attributes)
    {
        mpx->edges()->attr()->add(attr.name, attr.type);
    }
    */

    for (auto layer_attr: meta.intralayer_vertex_attributes)
    {
        std::string layer_name = layer_attr.first;

        for (auto attr: layer_attr.second)
        {
            net->layers()->get(layer_name)->vertices()->attr()->add(attr.name, attr.type);
        }
    }

    for (auto layer_attr: meta.intralayer_edge_attributes)
    {
        std::string layer_name = layer_attr.first;

        for (auto attr: layer_attr.second)
        {
            net->layers()->get(layer_name)->edges()->attr()->add(attr.name, attr.type);
        }
    }

    for (auto attr: meta.interlayer_edge_attributes)
    {
        net->interlayer_edges()->attr()->add(attr.name, attr.type);
    }

    // Read data (vertices, edges, attribute values)
    read_multilayer_data(net.get(),  meta, infile, separator);

    // Align
    if (align)
    {
        for (auto layer: *net->layers())
        {
            for (auto a: *net->vertices())
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
    AttributedHomogeneousMultilayerNetwork* ml,
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
        auto ptr = std::make_unique<uu::net::Network>(layer_name, uu::net::EdgeDir::UNDIRECTED);
        layer = ml->layers()->add(std::move(ptr));
    }

    return layer;
}

template <>
void
read_vertex(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_vertex", "ml");
    auto v = read_vertex(ml, fields, 0, line_number);

    read_attr_values(ml->vertices()->attr(), v, meta.vertex_attributes, fields, 1, line_number);

}

template <>
void
read_intralayer_vertex(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_intralayer_vertex", "ml");
    auto v = read_vertex(ml, fields, 0, line_number);
    auto l = read_layer<AttributedHomogeneousMultilayerNetwork, Network>(ml, fields, 1, line_number);
    l->vertices()->add(v);

    auto v_attr = meta.intralayer_vertex_attributes.find(l->name);

    if (v_attr != meta.intralayer_vertex_attributes.end())
    {
        read_attr_values(l->vertices()->attr(), v, v_attr->second, fields, 2, line_number);
    }
}

template <>
void
read_intralayer_edge(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_intralayer_edge", "ml");
    auto v1 = read_vertex(ml, fields, 0, line_number);
    auto v2 = read_vertex(ml, fields, 1, line_number);

    auto l = read_layer<AttributedHomogeneousMultilayerNetwork, Network>(ml, fields, 2, line_number);

    l->vertices()->add(v1);
    l->vertices()->add(v2);

    //if (!meta.layers.at(l->name).allows_loops) @todo fix: allow parameters to specify loop handling
    if (v1 == v2)
    {
        return;
    }

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
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    (void)meta; // param not used
    assert_not_null(ml, "read_interlayer_edge", "ml");
    auto v1 = read_vertex(ml, fields, 0, line_number);
    auto l1 = read_layer<AttributedHomogeneousMultilayerNetwork, Network>(ml, fields, 1, line_number);
    auto v2 = read_vertex(ml, fields, 2, line_number);
    auto l2 = read_layer<AttributedHomogeneousMultilayerNetwork, Network>(ml, fields, 3, line_number);

    l1->vertices()->add(v1);
    l2->vertices()->add(v2);

    if (l1==l2)
    {
        l1->edges()->add(v1,v2);
    }

    else
    {
        ml->interlayer_edges()->add(v1,l1,v2,l2);
    }

}

}
}
