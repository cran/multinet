#ifndef UU_OLAP_FLATTENING_H_
#define UU_OLAP_FLATTENING_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
flatten(
    C* const cube,
    size_t i,
    const std::string& new_member,
    const std::set<size_t>& indexes
);

}
}

#include "flattening.ipp"

#endif
