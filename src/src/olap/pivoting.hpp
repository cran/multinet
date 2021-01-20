#ifndef UU_NETWORKS_IMPL_OLAP_PIVOTING_H_
#define UU_NETWORKS_IMPL_OLAP_PIVOTING_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
vpivot(
    C* const cube,
    const std::vector<size_t>& perm
);

template <typename C>
std::unique_ptr<C>
mpivot(
    const C* const cube,
    const std::vector<size_t>& perm
);


}
}

#include "pivoting.ipp"

#endif
