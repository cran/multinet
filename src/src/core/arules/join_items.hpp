#ifndef UU_CORE_ARULES_JOINITEMS_H_
#define UU_CORE_ARULES_JOINITEMS_H_

#include <vector>
#include <cstddef>

namespace uu {
namespace core {

std::vector<std::size_t>
join_items(
           std::vector<std::size_t> items1,
           std::vector<std::size_t> items2
           );

}
}

#endif
