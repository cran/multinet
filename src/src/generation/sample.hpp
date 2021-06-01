#ifndef UU_GENERATION_SAMPLE_H_
#define UU_GENERATION_SAMPLE_H_

#include <vector>
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {

/**
 * @brief Grows the input multilayer network.
 * @param net MLNetwork to grow
 * @param communities ...
 * @param pr_internal_connectivity[] for each layer, the probability for two
 * vertices in the same community to be adjacent. If two vertices belong to multiple
 * communities, then they get multiple chances to become adjacent.
 * @param pr_external_connectivity[] for each layer, the probability for two
 * vertices in different communities to be adjacent. If a vertex belongs to multiple
 * communities, then it gets multiple chances to become adjacent to the same other vertices.
 */
template <typename M>
void
sample(
    M* net,
    const CommunityStructure<M>* communities,
    const std::vector<double>& pr_internal_connectivity,
    const std::vector<double>& pr_external_connectivity
);


}
}

#include "sample.ipp"

#endif
