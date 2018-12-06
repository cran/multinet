/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include <regex>
#include "tnet/io/read_temporal_network.h"
#include "core/exceptions/DuplicateElementException.h"
#include "core/exceptions/WrongParameterException.h"
#include "core/exceptions/WrongFormatException.h"


namespace uu {
namespace net {

std::unique_ptr<TemporalNetwork>
read_temporal_network(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    GraphMetadata meta = read_metadata(infile, ',');
    EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;

    // Check metadata consistency (@todo) & create graph
    auto g = create_temporal_network(name, dir, meta.features.allows_loops);

    // Read data (vertices, edges, attribute values)
    read_data(g.get(),  meta, infile, separator);

    return g;

}


template <>
void
read_vertex(
    TemporalNetwork* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
)
{
    assert_not_null(g, "read_vertex", "g");

    if (vertex_attributes.size()>0)
    {
        throw core::WrongParameterException("No user-defined attributes expected");
    }

    if (fields.size()>1)
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": Only vertex name expected");
    }

    std::string vertex_name = fields[0];

    auto vertex = g->vertices()->add(vertex_name);

    if (!vertex)
    {
        vertex = g->vertices()->get(vertex_name);
    }
}


template <>
void
read_edge(
    TemporalNetwork* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
)
{
    assert_not_null(g, "read_edge", "g");

    if (fields.size()!=3)
    {
        throw core::WrongFormatException("Line " +
                                         std::to_string(line_number) +
                                         ": From and To actor names and weight must " +
                                         "be specified for each edge");
    }

    std::string from_vertex = fields[0];
    std::string to_vertex = fields[1];
    std::string time = fields[2];

    auto vertex1 = g->vertices()->add(from_vertex);

    if (!vertex1)
    {
        vertex1 = g->vertices()->get(from_vertex);
    }

    auto vertex2 = g->vertices()->add(to_vertex);

    if (!vertex2)
    {
        vertex2 = g->vertices()->get(to_vertex);
    }

    auto edge = g->edges()->add(vertex1,vertex2);


    // if time is an integer, it is interpreted as seconds since epoch.
    if (std::regex_match(time, std::regex("(\\+|-)?[[:digit:]]+")))
    {
        g->edges()->attr()->set_time(edge, core::epoch_to_time(time));
    }

    // otherwise a data-time string is expected
    else
    {
        g->edges()->attr()->set_time(edge, core::to_time(time));
    }

}

}
}
