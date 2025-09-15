#ifndef UU_COMMUNITY_ABACUS_H_
#define UU_COMMUNITY_ABACUS_H_

#include <memory>
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {


/**
 * Finds communities using the abacus algorithm, itself using a label propagation
 * single-layer clustering algorithm as in the original paper.
 * @param mnet input multilayer network
 * @param min_actors minimum number of actors in a community
 * @param min_layers minimum number of layers in a community
 * @return a set of actor communities
 */
template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    abacus(
                                        const M* mnet,
                                        int min_actors,
                                        int min_layers
                                    );

}
}

#include "abacus.ipp"

#endif
