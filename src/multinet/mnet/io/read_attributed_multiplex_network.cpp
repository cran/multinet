/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "mnet/io/read_attributed_multiplex.h"
#include "net/io/read_attributed_simple_graph.h"


namespace uu {
namespace net {

std::unique_ptr<AttributedMultiplexNetwork>
read_attributed_multiplex(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    MultilayerMetadata meta = read_multilayer_metadata(infile, ',');
    //EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph & add attributes

    auto mpx = create_attributed_multiplex_network(name);

    for (auto attr: meta.vertex_attributes)
    {
        mpx->vertices()->attr()->add(attr.name, attr.type);
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
            mpx->layers()->get(layer_name)->vertices()->attr()->add(attr.name, attr.type);
        }
    }

    for (auto layer_attr: meta.intralayer_edge_attributes)
    {
        std::string layer_name = layer_attr.first;

        for (auto attr: layer_attr.second)
        {
            mpx->layers()->get(layer_name)->edges()->attr()->add(attr.name, attr.type);
        }
    }

    // Read data (vertices, edges, attribute values)
    read_multilayer_data(mpx.get(),  meta, infile, separator);

    return mpx;

}


template <>
AttributedSimpleGraph*
read_layer(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    std::string layer_name = fields.at(from_idx);

    auto layer = ml->layers()->get(layer_name);

    if (!layer)
    {
        auto ptr = uu::net::create_attributed_simple_graph(layer_name, uu::net::EdgeDir::UNDIRECTED);
        layer = ml->layers()->add(std::move(ptr));
    }

    return layer;
}

template <>
void
read_vertex(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_vertex", "ml");
    read_vertex(ml, fields, 0, line_number);
}

template <>
void
read_intralayer_vertex(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{

    assert_not_null(ml, "read_intralayer_vertex", "ml");
    auto v = read_vertex(ml, fields, 0, line_number);
    auto l = read_layer<AttributedMultiplexNetwork, AttributedSimpleGraph>(ml, fields, 1, line_number);
    l->vertices()->add(v);
}

template <>
void
read_intralayer_edge(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_intralayer_edge", "ml");
    auto v1 = read_vertex(ml, fields, 0, line_number);
    auto v2 = read_vertex(ml, fields, 1, line_number);
    auto l = read_layer<AttributedMultiplexNetwork, AttributedSimpleGraph>(ml, fields, 2, line_number);

    l->vertices()->add(v1);
    l->vertices()->add(v2);
    l->edges()->add(v1,v2);

}


}
}
