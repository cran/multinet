#ifndef UU_COMMUNITY_LOUVAIN_H_
#define UU_COMMUNITY_LOUVAIN_H_

#include "community/CommunityStructure.hpp"
#include "networks/Network.hpp"
#include <memory>

namespace uu {
namespace net {

/**
 * Louvain algorithm for undirected unweighted networks.
 *
 * (Note: to extend this to weighted networks, if needed in the future, it is sufficient to
 * update the convert() function used inside the method.)
 */
template <typename G>
std::unique_ptr<CommunityStructure<Network>>
        louvain(
            const G* g
        );

}
}

#include "louvain.ipp"

#endif
