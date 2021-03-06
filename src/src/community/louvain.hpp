#ifndef UU_COMMUNITY_LOUVAIN_H_
#define UU_COMMUNITY_LOUVAIN_H_


#include "community/CommunityStructure.hpp"
#include "community/Community.hpp"
#include "networks/Network.hpp"
#include "objects/Vertex.hpp"
#include <memory>


namespace uu {
namespace net {

template <typename G>
std::unique_ptr<CommunityStructure<Network>>
        louvain(
            const G* g
        );

}
}

#include "louvain.ipp"

#endif
