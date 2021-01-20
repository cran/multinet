#ifndef UU_NETWORKS_IMPL_OLAP_OPERATORS_EMBEDDING_H_
#define UU_NETWORKS_IMPL_OLAP_OPERATORS_EMBEDDING_H_

#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {

template <typename C, typename DiscretizationFunction>
std::unique_ptr<C>
extend(
    const C* const cube,
    const std::string& dim_name,
    const std::vector<std::string>& dim_members,
    DiscretizationFunction f
);

}
}

#include "extension.ipp"

#endif
