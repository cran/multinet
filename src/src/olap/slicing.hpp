#ifndef UU_NETWORKS_IMPL_OLAP_SLICE_H_
#define UU_NETWORKS_IMPL_OLAP_SLICE_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {

/*template <typename C>
sel::EntryIterator<C>
islice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);*/


template <typename C>
std::unique_ptr<C>
vslice(
    C* const cube,
    const std::vector<std::vector<size_t>>& indexes
);

template <typename C>
std::unique_ptr<C>
mslice(
    const C* const cube,
    const std::vector<std::vector<size_t>>& indexes
);

template <typename C>
std::unique_ptr<C>
mslice(
    const C* const cube,
    size_t dim_idx,
    const std::vector<size_t>& indexes
);

}
}

#include "slicing.ipp"

#endif
