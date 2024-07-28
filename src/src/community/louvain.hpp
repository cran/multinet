#ifndef UU_COMMUNITY_LOUVAIN_H_
#define UU_COMMUNITY_LOUVAIN_H_

#include "community/CommunityStructure.hpp"
#include "networks/Network.hpp"
#include <memory>

namespace uu {
namespace net {

/**
 * Louvain algorithm for undirected networks.
 * If the network is weighted, weights are automatically considered.
 */
template <typename G>
std::unique_ptr<CommunityStructure<Network>>
        louvain(
            const G* g,
            double gamma = 1.0
        );

}
}

#include "louvain.ipp"

#endif
