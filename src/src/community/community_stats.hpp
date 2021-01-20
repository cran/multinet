#ifndef UU_COMMUNITY_ABACUS_H_
#define UU_COMMUNITY_ABACUS_H_

#include <memory>
#include <string>
#include <map>
#include <set>
#include "community/CommunityStructure.hpp"
#include "objects/MLVertex.hpp"

namespace uu {
namespace net {


template <typename M>
size_t
size_largest_community(
    const CommunityStructure<M>* com
);

template <typename M>
std::pair<size_t,size_t>
size_largest_communities(
    const CommunityStructure<M>* com
);

template <typename M>
double
size_ratio_largest_communities(
    const CommunityStructure<M>* com
);

template <typename M>
double
ratio_vertices_in_communities(
    const CommunityStructure<M>* com,
    const M* net
);

template <typename M>
double
ratio_actors_in_communities(
    const CommunityStructure<M>* com,
    const M* net
);


template <typename M>
double
ratio_actors_in_pillars(
    const CommunityStructure<M>* com,
    const M* net
);

template <typename M>
double
ratio_actors_overlapping(
    const CommunityStructure<M>* com,
    const M* net
);

template <typename M>
double
ratio_vertices_overlapping(
    const CommunityStructure<M>* com,
    const M* net
);

template <typename M>
double
ratio_singleton_communities(
    const CommunityStructure<M>* com
);

}
}

#include "community_stats.ipp"

#endif
