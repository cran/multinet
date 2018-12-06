/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_IO_READSIMPLEGRAPH_H_
#define UU_NET_IO_READSIMPLEGRAPH_H_

#include <string>
#include <memory>
#include "net/datastructures/graphs/SimpleGraph.h"
#include "net/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<SimpleGraph>
read_simple_graph(
    const std::string& infile,
    const std::string& name,
    char separator
);

template <>
void
read_vertex(
    SimpleGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
);


template <>
void
read_edge(
    SimpleGraph* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
);


}
}

#endif
