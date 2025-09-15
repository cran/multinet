#ifndef UU_CORE_ARULES_ECLAT_H_
#define UU_CORE_ARULES_ECLAT_H_

#include <unordered_map>
#include <vector>
#include "core/arules/freq_itemset.hpp"

namespace uu {
namespace core {

void
eclat(
      const std::vector<std::vector<size_t>>& data,
      std::vector<freq_itemset>& freq,
      std::vector<freq_itemset>& closed,
      size_t min_sup,
      size_t min_size
);

}
}

#endif
