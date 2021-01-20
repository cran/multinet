#ifndef UU_NETWORKS_IMPL_OLAP_MSORT_H_
#define UU_NETWORKS_IMPL_OLAP_MSORT_H_

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
vsort_members(
    C* const cube,
    const std::vector<size_t>& indexes
);

template <typename C>
std::unique_ptr<C>
msort_members(
    const C* const cube,
    const std::vector<size_t>& indexes
);


}
}

#include "m-sort.ipp"

#endif
