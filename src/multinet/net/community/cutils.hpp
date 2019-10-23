#ifndef UU_NET_COMMUNITY_CUTILS_H_
#define UU_NET_COMMUNITY_CUTILS_H_

#include <chrono>
#include <unordered_map>
#include <vector>
#include "community/CommunityStructure.hpp"
#include "community/Community.hpp"
#include "objects/EdgeMode.hpp"
#include "objects/Vertex.hpp"

namespace uu {
namespace net {

std::unique_ptr<CommunityStructure<Community<const Vertex*>>>
to_community_structure(
    std::unordered_map<const Vertex*, size_t> membership
);
}
}

#endif
