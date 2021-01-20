#ifndef UU_NETWORKS_IMPL_OLAP_PROJECTION_H_
#define UU_NETWORKS_IMPL_OLAP_PROJECTION_H_

#include <memory>
#include "olap/ECube.hpp"

namespace uu {
namespace net {

std::unique_ptr<ECube>
project(
    const ECube* const cube,
    bool inverse = false
);

}
}

#endif
