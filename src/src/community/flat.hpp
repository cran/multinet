#ifndef UU_COMMUNITY_FLAT_H_
#define UU_COMMUNITY_FLAT_H_


#include "community/CommunityStructure.hpp"
#include "community/Community.hpp"
#include "networks/Network.hpp"
#include "objects/Vertex.hpp"
#include <memory>


namespace uu {
namespace net {

template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    flat_nw(
                                        const M* g
                                    );

template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    flat_ec(
                                        const M* g
                                    );

}
}

#include "flat.ipp"

#endif
