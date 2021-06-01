#ifndef UU_NET_COMMUNITY_COMMUNITY_H_
#define UU_NET_COMMUNITY_COMMUNITY_H_

#include <memory>
#include "core/stores/_impl/SortedRandomSet.hpp"

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
