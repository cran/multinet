#ifndef UU_COMMUNITY_MLCPM_H_
#define UU_COMMUNITY_MLCPM_H_

#include <memory>
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {

template <typename M>
std::unique_ptr<CommunityStructure<M>>
mlcpm(
    const M* mnet,
    size_t k,
    size_t m
);


}
}

#include "mlcpm.ipp"

#endif
