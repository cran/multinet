#ifndef UU_OLAP_CONTRACTION_H_
#define UU_OLAP_CONTRACTION_H_

#include <memory>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
contract(
    C* const cube,
    size_t idx
);

}
}

#include "contraction.ipp"

#endif
