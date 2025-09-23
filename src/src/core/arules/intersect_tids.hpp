#ifndef UU_CORE_ARULES_INTERSECTTIDS_H_
#define UU_CORE_ARULES_INTERSECTTIDS_H_

#include <vector>
#include <cstddef>

namespace uu {
namespace core {

std::vector<std::size_t>
intersect_tids(
               std::vector<std::size_t> tids1,
               std::vector<std::size_t> tids2
               );

}
}

#endif
