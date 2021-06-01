#ifndef UU_NET_COMMUNITY_NORMALIZEDMUTUALINFORMATION_H_
#define UU_NET_COMMUNITY_NORMALIZEDMUTUALINFORMATION_H_

#undef COMM

namespace uu {
namespace net {


/**
 * Only for partitioning community structures.
 * @param com1 a community structure
 * @param com1 a community structure
 * @param n number of vertices
 * @return the normalized mutual information between the two community structures
 * (1 if they are equal, down to 0)
 */
template <typename COMM>
double
nmi(
    const COMM& com1,
    const COMM& com2,
    int n
);

}
}

#include "nmi.ipp"

#endif
