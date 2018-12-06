/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_READMULTIPLEX_H_
#define UU_MNET_IO_READMULTIPLEX_H_

#include <string>
#include <memory>
#include "mnet/datastructures/graphs/MultiplexNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<MultiplexNetwork>
read_multiplex(
    const std::string& infile,
    const std::string& name,
    char separator
);


template <>
SimpleGraph*
read_layer(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <>
void
read_vertex(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_vertex(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_edge(
    MultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

}
}

#endif
