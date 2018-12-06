/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_XNET_IO_READTEMPORALTEXTNETWORK_H_
#define UU_XNET_IO_READTEMPORALTEXTNETWORK_H_

#include <string>
#include <memory>
#include "xnet/datastructures/graphs/TemporalTextNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<TemporalTextNetwork>
read_temporal_text_network(
    const std::string& infile,
    const std::string& name,
    char separator
);


/*
template <>
SimpleGraph*
read_layer(
TemporalTextNetwork* ml,
const std::vector<std::string>& fields,
size_t from_idx,
size_t line_number
);

template <>
void
read_vertex(
TemporalTextNetwork* ml,
const std::vector<std::string>& fields,
const MultilayerMetadata& meta,
size_t line_number
);
 */

template <>
void
read_intralayer_vertex(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_edge(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_interlayer_edge(
    TemporalTextNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

}
}

#endif
