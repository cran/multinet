#ifndef UU_OLAP_IMPL_DEXTENSION_H_
#define UU_OLAP_IMPL_DEXTENSION_H_

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {


template <typename C>
std::unique_ptr<C>
extend_dimension(
    const C* const cube,
    const std::string& dim_name,
    const std::string& member_name
);

}
}

#include "d-extension.ipp"

#endif
