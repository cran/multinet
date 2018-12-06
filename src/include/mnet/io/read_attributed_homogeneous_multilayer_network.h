/**
 *
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_IO_READATTRIBUTEDHOMOGENEOUSMULTILAYER_H_
#define UU_MNET_IO_READATTRIBUTEDHOMOGENEOUSMULTILAYER_H_

#include <string>
#include <memory>
#include "mnet/datastructures/graphs/AttributedHomogeneousMultilayerNetwork.h"
#include "mnet/io/read_common.h"

namespace uu {
namespace net {

std::unique_ptr<AttributedHomogeneousMultilayerNetwork>
read_attributed_homogeneous_multilayer_network(
    const std::string& infile,
    const std::string& name,
    char separator,
    bool align = false
);


template <>
AttributedSimpleGraph*
read_layer(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    size_t from_idx,
    size_t line_number
);

template <>
void
read_vertex(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_vertex(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

template <>
void
read_intralayer_edge(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);


template <>
void
read_interlayer_edge(
    AttributedHomogeneousMultilayerNetwork* ml,
    const std::vector<std::string>& fields,
    const MultilayerMetadata& meta,
    size_t line_number
);

}
}

#endif
