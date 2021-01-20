/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_COMMUNITY_COMMUNITY_H_
#define UU_NET_COMMUNITY_COMMUNITY_H_

#include <memory>
#include "core/datastructures/containers/SortedRandomSet.hpp"

namespace uu {
namespace net {

template <typename NET>
class
    Community :
    public core::SortedRandomSet<typename NET::community_element_type>
{};

}
}

#endif
