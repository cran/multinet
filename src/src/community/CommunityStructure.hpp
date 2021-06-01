#ifndef UU_NET_COMMUNITY_COMMUNITYSTRUCTURE_H_
#define UU_NET_COMMUNITY_COMMUNITYSTRUCTURE_H_

#include "core/stores/_impl/UniquePtrSortedRandomSet.hpp"
#include "community/Community.hpp"

namespace uu {
namespace net {

/**
 * A set of communities.
 */
template <typename NET>
class CommunityStructure final :
    public core::UniquePtrSortedRandomSet<Community<NET>>
{
};

}
}

#endif

