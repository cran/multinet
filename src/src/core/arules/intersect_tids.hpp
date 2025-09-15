#ifndef UU_CORE_ARULES_INTERSECTTIDS_H_
#define UU_CORE_ARULES_INTERSECTTIDS_H_

#include <vector>

namespace uu {
namespace core {

std::vector<size_t>
intersect_tids(
               std::vector<size_t> tids1,
               std::vector<size_t> tids2
               );

}
}

#endif
