/**
 * History:
 * - 2019.07.21 File created
 */

#ifndef UU_CORE_OLAP_OPERATORS_ROLLUP_H_
#define UU_CORE_OLAP_OPERATORS_ROLLUP_H_

#include <memory>
#include <string>
#include <vector>

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
mrollup(
    const C* const cube,
    size_t i,
    const std::vector<std::string>& new_members,
    const std::vector<int>& partition
);

}
}

#include "rollup.ipp"

#endif
