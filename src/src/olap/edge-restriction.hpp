#ifndef UU_NETWORKS_IMPL_OLAP_RESTRICTION_H_
#define UU_NETWORKS_IMPL_OLAP_RESTRICTION_H_

#include <memory>
#include "olap/ECube.hpp"

namespace uu {
namespace net {

std::unique_ptr<ECube>
mrestrict(
    const ECube* const cube,
    const VertexStore* vc1,
    const VertexStore* vc2
);

}
}

#endif
