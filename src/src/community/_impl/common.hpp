#ifndef UU_MNET_COMMUNITY_COMMON_H_
#define UU_MNET_COMMUNITY_COMMON_H_

#include "community/CommunityStructure.hpp"
#include "networks/Network.hpp"
#include "objects/Vertex.hpp"

namespace uu {
namespace net {

std::unique_ptr<CommunityStructure<Network>>
to_community_structure(
    std::unordered_map<const Vertex*, size_t> membership
);

}
}


#endif
