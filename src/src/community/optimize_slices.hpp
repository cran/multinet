#ifndef UU_COMMUNITY_OPTIMIZESLICES_H_
#define UU_COMMUNITY_OPTIMIZESLICES_H_

#include "networks/Network.hpp"
#include <vector>

namespace uu {
namespace net {

/**
 * Returns a normalized modularity for each choice of number of slices.
 * Note: this requires more research, it is a function still under evaluation.
 */
std::vector<double>
optimize_slices(
    const Network* original_net,
    size_t max_slices);

}
}

#endif
