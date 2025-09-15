#ifndef UU_CORE_ARULES_JOINITEMS_H_
#define UU_CORE_ARULES_JOINITEMS_H_

#include <vector>

namespace uu {
namespace core {

std::vector<size_t>
join_items(
           std::vector<size_t> items1,
           std::vector<size_t> items2
           );

}
}

#endif
