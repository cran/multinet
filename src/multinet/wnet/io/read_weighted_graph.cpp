/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "wnet/io/read_weighted_graph.h"


namespace uu {
namespace net {

std::unique_ptr<WeightedGraph>
read_weighted_graph(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    GraphMetadata meta = read_metadata(infile, ',');
    EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph
    auto g = create_weighted_graph(name, dir, meta.features.allows_loops);

    // Read data (vertices, edges, attribute values)
    read_data(g.get(),  meta, infile, separator);

    return g;

}


template <>
void
read_vertex(
    WeightedGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
)
{
    if (fields.size()>1)
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": Only vertex name expected");
    }

    read_vertex(g, fields, 0, line_number);
}


template <>
void
read_edge(
    WeightedGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
)
{

    if (fields.size()!=3)
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": From and To actor names and weight must " +
                                         "be specified for each edge");
    }

    std::string weight = fields[2];

    auto edge = read_edge(g, fields, 0, line_number);

    g->edges()->attr()->set_weight(edge, core::to_double(weight));

}

}
}
