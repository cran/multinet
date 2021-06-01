#ifndef UU_COMMUNITY_IMPL_ABACUSUTILS_H_
#define UU_COMMUNITY_IMPL_ABACUSUTILS_H_

#include <chrono>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <random>
#include "community/CommunityStructure.hpp"
#include <vector>
#include "objects/EdgeMode.hpp"
#include "objects/Vertex.hpp"

extern "C" {
#include <eclat.h>
}

namespace uu {
namespace net {

/*  */
template <typename M>
void
read_layers(
    const M* mnet,
    PillarCommunity<M>* com,
    FILE* file
);

/*  */
template <typename M>
int
read_actors(
    const M* mnet,
    PillarCommunity<M>* com,
    FILE* tidfile
);

/*  */
template <typename M>
std::set<std::unique_ptr<PillarCommunity<M>>>
read_eclat_communities(
    const M* mnet,
    FILE* file,
    FILE* tidfile
);

/*  */
template <typename M>
std::set<std::unique_ptr<PillarCommunity<M>>>
eclat_merge(
    const M* mnet,
    const std::unordered_map<const typename M::layer_type*, CommunityStructure<Network>*>& single_layer_communities,
    int min_actors,
    int min_layers
);


}
}

#include "abacus_utils.ipp"

#endif
