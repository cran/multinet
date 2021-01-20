#ifndef UU_OLAP_IMPL_DSORT_H_
#define UU_OLAP_IMPL_DSORT_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vsort_dimensions(
    C* const cube,
    const std::vector<size_t>& perm
);

template <typename C>
std::unique_ptr<C>
msort_dimensions(
    const C* const cube,
    const std::vector<size_t>& perm
);


}
}

#include "d-sort.ipp"

#endif
