/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_READORDEREDMULTIPLEX_H_
#define UU_MNET_IO_READORDEREDMULTIPLEX_H_

#include <string>
#include <memory>
#include "mnet/datastructures/graphs/OrderedMultiplexNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<OrderedMultiplexNetwork>
read_ordered_multiplex_network(
    const std::string& infile,
    const std::string& name,
    char separator
);


template <>
SimpleGraph*
read_layer(
    OrderedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <>
void
read_vertex(
    OrderedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_vertex(
    OrderedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_edge(
    OrderedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

}
}

#endif
