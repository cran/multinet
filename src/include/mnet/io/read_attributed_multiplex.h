/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_READATTRIBUTEDMULTIPLEX_H_
#define UU_MNET_IO_READATTRIBUTEDMULTIPLEX_H_

#include <string>
#include <memory>
#include "mnet/datastructures/graphs/AttributedMultiplexNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<AttributedMultiplexNetwork>
read_attributed_multiplex(
    const std::string& infile,
    const std::string& name,
    char separator
);


template <>
AttributedSimpleGraph*
read_layer(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <>
void
read_vertex(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_vertex(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_edge(
    AttributedMultiplexNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

}
}

#endif
