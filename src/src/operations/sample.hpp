#ifndef UU_OPERATIONS_SAMPLE_H_
#define UU_OPERATIONS_SAMPLE_H_

#include "networks/Network.hpp"
#include "networks/probability.hpp"

namespace uu {
namespace net {

/**
 * Returns a deterministic instance (possiblw world) of the input network.
 *
 * @param g input graph
 */
std::unique_ptr<Network>
sample(
    const Network* g
);

}
}

#endif
