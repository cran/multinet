#ifndef UU_CORE_ARULES_BOTTOMUPSEARCH_H_
#define UU_CORE_ARULES_BOTTOMUPSEARCH_H_

#include <vector>
#include <map>
#include "core/arules/freq_itemset.hpp"

namespace uu {
namespace core {

void
bottom_up_search(
     const std::vector<freq_itemset>& atoms,
     std::vector<freq_itemset>& freq,
     std::vector<freq_itemset>& closed,
     std::map<std::vector<std::size_t>, std::vector<freq_itemset>>& freq_supersets,
     std::size_t min_sup,
     std::size_t min_size
     );

}
}

#endif
