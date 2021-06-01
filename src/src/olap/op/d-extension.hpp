#ifndef UU_OLAP_DEXTENSION_H_
#define UU_OLAP_DEXTENSION_H_

#include <memory>
#include <string>

namespace uu {
namespace net {


template <typename C, class D>
void
extend_dimension(
    C* const cube,
    const std::string& dim_name,
    const std::vector<std::string>& members,
    const D& discretize
);

}
}

#include "d-extension.ipp"

#endif
