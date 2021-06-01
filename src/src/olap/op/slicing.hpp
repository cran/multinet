#ifndef UU_OLAP_SLICE_H_
#define UU_OLAP_SLICE_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vslice(
    const std::string& cube_name,
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);

// utility functions

template <typename C>
std::vector<std::vector<std::string>>
                                   filter_members(
                                       const C* cube,
                                       const std::vector<std::vector<size_t>>& indexes
                                   );

}
}

#include "slicing.ipp"

#endif
