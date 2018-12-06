#ifndef UU_NET_COMMUNITY_CUTILS_H_
#define UU_NET_COMMUNITY_CUTILS_H_

#include <chrono>
#include <unordered_map>
#include <vector>
#include "net/community/CommunityStructure.h"
#include "net/community/Community.h"
#include "net/datastructures/objects/EdgeMode.h"
#include "net/datastructures/objects/Vertex.h"

namespace uu {
namespace net {

std::unique_ptr<CommunityStructure<Community<const Vertex*>>>
to_community_structure(
    std::unordered_map<const Vertex*, size_t> membership
);
}
}

#endif
