
#ifndef UU_TNET_TRANSFORMATION_TOORDEREDMULTIPLEX_H_
#define UU_TNET_TRANSFORMATION_TOORDEREDMULTIPLEX_H_

#include <memory>
#include "tnet/datastructures/graphs/TemporalNetwork.h"
#include "mnet/datastructures/graphs/OrderedMultiplexNetwork.h"

namespace uu {
namespace net {


/**
* @brief Transforms a temporal network into an ordered multiplex network.
* @param tnet pointer to a temporal network
* @param num_partitions number of time slices
* @return a pointer to an ordered multiplex network
**/
std::unique_ptr<OrderedMultiplexNetwork>
to_ordered_multiplex(
    const TemporalNetwork* tnet,
    size_t num_partitions
);

}
}

#endif /* UU_MNET_TRANSFORMATION_H_ */
