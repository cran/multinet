/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_IO_READTEMPORALNETWORK_H_
#define UU_NET_IO_READTEMPORALNETWORK_H_

#include <string>
#include <memory>
#include "networks/TemporalNetwork.hpp"
#include "net/io/read_common.hpp"

namespace uu {
namespace net {

std::unique_ptr<TemporalNetwork>
read_temporal_network(
    const std::string& infile,
    const std::string& name,
    char separator
);

template <>
void
read_vertex(
    TemporalNetwork* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& vertex_attributes,
    size_t line_number
);


template <>
void
read_edge(
    TemporalNetwork* g,
    const std::vector<std::string>& fields,
    const std::vector<core::Attribute>& edge_attributes,
    size_t line_number
);


}
}

#endif
