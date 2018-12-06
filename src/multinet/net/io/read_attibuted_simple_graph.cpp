/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/io/read_attributed_simple_graph.h"


namespace uu {
namespace net {

std::unique_ptr<AttributedSimpleGraph>
read_attributed_simple_graph(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    GraphMetadata meta = read_metadata(infile, ',');
    EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo)
    // create graph
    // and add attributes
    auto g = create_attributed_simple_graph(name, dir, meta.features.allows_loops);

    for (auto attr: meta.vertex_attributes)
    {
        g->vertices()->attr()->add(attr.name, attr.type);
    }

    for (auto attr: meta.edge_attributes)
    {
        g->edges()->attr()->add(attr.name, attr.type);
    }

    // Read data (vertices, edges, attribute values)
    read_data(g.get(),  meta, infile, separator);

    return g;

}


template <>
void
read_vertex(
    AttributedSimpleGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
)
{


    if (fields.size()>1+vertex_attributes.size())
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": wrong number of attributes");
    }

    auto v = read_vertex(g, fields, 0, line_number);


    read_attr_values(g->vertices()->attr(), v, vertex_attributes, fields, 1, line_number);


}


template <>
void
read_edge(
    AttributedSimpleGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
)
{

    if (fields.size()!=2+edge_attributes.size())
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": From and To actor names and weight must " +
                                         "be specified for each edge");
    }

    std::string weight = fields[2];

    auto edge = read_edge(g, fields, 0, line_number);


    read_attr_values(g->edges()->attr(), edge, edge_attributes, fields, 2, line_number);


}

}
}
