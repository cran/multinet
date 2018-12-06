/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/io/read_attributed_empty_graph.h"


namespace uu {
namespace net {

std::unique_ptr<AttributedEmptyGraph>
read_attributed_empty_graph(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    GraphMetadata meta = read_metadata(infile, ',');

    // Check metadata consistency (@todo)
    // create graph
    // and add attributes
    auto g = create_attributed_empty_graph(name);

    for (auto attr: meta.vertex_attributes)
    {
        g->vertices()->attr()->add(attr.name, attr.type);
    }

    // Read data (vertices, edges, attribute values)
    read_data(g.get(),  meta, infile, separator);

    return g;

}


template <>
void
read_vertex(
    AttributedEmptyGraph* g,
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
    AttributedEmptyGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
)
{

    throw core::WrongFormatException("Line " +
                                     std::to_string(line_number) +
                                     ": There cannot be edges in an empty graph");
}

}
}
