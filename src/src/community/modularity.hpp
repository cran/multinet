#ifndef UU_COMMUNITY_MODULARITY_H_
#define UU_COMMUNITY_MODULARITY_H_

namespace uu {
namespace net {

template <typename G, typename CS>
double
modularity(
    const G* g,
    const CS* communities
    );


/**
 * Temporary function, computing modularity on a probabilistic
 * networks considering the probabilities as weights. Notice that
 * this approach does not compute the expected modularity.
 */
template <typename CS>
double
prob_modularity(
    const Network* g,
    const CS* communities
    );


template <typename M, typename COMM>
double
modularity(
    const M* mnet,
    const COMM* communities,
    double omega
);

template <typename M, typename COMM>
double
ordered_modularity(
    const M* mnet,
    const COMM* communities,
    double omega
);

}
}

#include "modularity.ipp"

#endif
