#ifndef UU_OLAP_OPERATORS_SLICE_H_
#define UU_OLAP_OPERATORS_SLICE_H_

#include <memory>
#include "core/olap/datastructures/CCube.hpp"

namespace uu {
namespace core {

/*template <typename C>
sel::EntryIterator<C>
islice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);*/


template <typename C>
std::unique_ptr<C>
vslice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);

template <typename C>
std::unique_ptr<C>
mslice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);

}
}

#include "slice.ipp"

#endif
