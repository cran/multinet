#ifndef UU_COMMUNITY_MODULARITY_H_
#define UU_COMMUNITY_MODULARITY_H_

namespace uu {
namespace net {

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
