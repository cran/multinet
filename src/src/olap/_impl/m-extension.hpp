#ifndef UU_OLAP_IMPL_MEXTENSION_H_
#define UU_OLAP_IMPL_MEXTENSION_H_

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {

template <typename C, typename DiscretizationFunction>
std::unique_ptr<C>
extend_members(
    const C* const cube,
    const std::string& member_name,
    DiscretizationFunction f
);

}
}

#include "m-extension.ipp"

#endif
