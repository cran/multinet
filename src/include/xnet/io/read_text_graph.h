/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_TNET_IO_READTEXTGRAPH_H_
#define UU_TNET_IO_READTEXTGRAPH_H_

#include <string>
#include <memory>
#include "xnet/datastructures/graphs/TextGraph.h"
#include "net/io/read_common.h"

namespace uu {
namespace net {

/**
 * Creates a WeightedGraph from a file.
 * @param infile name of the file (can also include the file path)
 * @param name name of the new graph
 * @param separator character used in the input file to separate fields
 */
std::unique_ptr<TextGraph>
read_text_graph(
    const std::string& infile,
    const std::string& name,
    char separator
);

/**
 * Adds a vertex read from a file to a graph.
 * @param g graph to be updated
 * @param fields a vector of fields specifying the name of the vertex and (if any) attribute values.
 * A weighted graph does not support vertex attributes.
 * @param vertex_attributes the list of user-defined attributes expected in the field parameter.
 * In a weighted graph, there are no vertex attributes, so vertex_attributes is expected to be empty.
 * @param line_number line in the file where this vertex definition is present, for error handling.
 */
template <>
void
read_vertex(
    TextGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
);


/**
 * Adds an edge read from a file to a graph.
 * @param g graph to be updated
 * @param fields a vector of fields specifying the names of the two end vertices and (if any) attributes.
 * A weighted graph supports only one value (that is, the edge weight).
 * @param edge_attributes the list of user-defined attributes expected in the field parameter.
 * In a weighted graph, the first attribute value is read as a weight, and there are no other
 * attributes, so edge_attributes is expected to be empty.
 * @param line_number line in the file where this edge definition is present, for error handling.
 */
template <>
void
read_edge(
    TextGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
);

}
}

#endif
