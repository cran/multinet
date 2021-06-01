#ifndef UU_COMMUNITY_LABELPROPAGATIONSINGLE_H_
#define UU_COMMUNITY_LABELPROPAGATIONSINGLE_H_

#include <memory>
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {

/**
 * Label propagation algorithm for undirected unweighted networks.
 */
template <typename G>
std::unique_ptr<CommunityStructure<G>>
                                    label_propagation(
                                        const G* net
                                    );

}
}

#include "label_propagation.ipp"

#endif
