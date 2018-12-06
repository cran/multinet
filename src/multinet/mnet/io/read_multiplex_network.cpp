/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "mnet/io/read_multiplex.h"
#include "net/io/read_simple_graph.h"


namespace uu {
namespace net {

std::unique_ptr<MultiplexNetwork>
read_multiplex(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    MultilayerMetadata meta = read_multilayer_metadata(infile, ',');

    //EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph

    auto mpx = create_multiplex_network(name);

    // @todo create layers

    // Read data (vertices, edges, attribute values)
    read_multilayer_data(mpx.get(),  meta, infile, separator);

    return mpx;

}


template <>
SimpleGraph*
read_layer(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
)
{
    std::string layer_name = fields.at(from_idx);

    auto layer = ml->layers()->get(layer_name);

    if (!layer)
    {
        auto ptr = uu::net::create_simple_graph(layer_name, uu::net::EdgeDir::UNDIRECTED);
        layer = ml->layers()->add(std::move(ptr));
    }

    return layer;
}

template <>
void
read_vertex(
    MultiplexNetwork* ml,
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
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{

    assert_not_null(ml, "read_intralayer_vertex", "ml");
    auto v = read_vertex(ml, fields, 0, line_number);
    auto l = read_layer<MultiplexNetwork, SimpleGraph>(ml, fields, 1, line_number);
    l->vertices()->add(v);
}

template <>
void
read_intralayer_edge(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
)
{
    assert_not_null(ml, "read_intralayer_edge", "ml");
    auto v1 = read_vertex(ml, fields, 0, line_number);
    auto v2 = read_vertex(ml, fields, 1, line_number);
    auto l = read_layer<MultiplexNetwork, SimpleGraph>(ml, fields, 2, line_number);

    l->vertices()->add(v1);
    l->vertices()->add(v2);
    l->edges()->add(v1,v2);

}


}
}
