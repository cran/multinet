#ifndef UU_OLAP_IMPL_MCONTRACTION_H_
#define UU_OLAP_IMPL_MCONTRACTION_H_

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
contract_members(
    const C* const cube
);

template <typename C>
std::unique_ptr<C>
contract_members_view(
    C* const cube
);
}
}

#include "m-contraction.ipp"

#endif
