#ifndef UU_OLAP_IMPL_DCONTRACTION_H_
#define UU_OLAP_IMPL_DCONTRACTION_H_

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
contract_dimension(
    const C* const cube
);

}
}

#include "d-contraction.ipp"

#endif
