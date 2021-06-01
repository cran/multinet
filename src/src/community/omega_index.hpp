#ifndef UU_NET_COMMUNITY_OMEGAINDEX_H_
#define UU_NET_COMMUNITY_OMEGAINDEX_H_

#include <map>

#include "core/exceptions/assert_not_null.hpp"
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {


/**
 * For both partitioning and overlapping community structures.
 * @param com1 a community structure
 * @param com2 a community structure
 * @param num_elements number of elements in the network (vertices or MLVertices)
 * @return the omega_index between the two community structures
 * (1 if they are equal, down to 0)
 */
template <typename M>
double
omega_index(
    const CommunityStructure<M>* com1,
    const CommunityStructure<M>* com2,
    size_t num_elements
);

}
}

#include "omega_index.ipp"

#endif
