#include "core/arules/eclat.hpp"
#include "core/arules/bottom_up_search.hpp"
#include <map>
#include <string>

namespace uu {
namespace core {

void
eclat(
      const std::vector<std::vector<std::size_t>>& data,
      std::vector<freq_itemset>& freq,
      std::vector<freq_itemset>& closed,
      std::size_t min_sup,
      std::size_t min_size
)
{
    
    std::map<std::vector<std::size_t>, std::vector<freq_itemset>> freq_supersets;
    
    // F1
    std::vector<freq_itemset> F1;
    for (std::size_t el = 0; el < data.size(); el++)
    {
        std::size_t s = data[el].size();
        if (s >= min_sup)
        {
            auto new_fr = freq_itemset({el}, data[el]);
            if (min_size <= 1) freq.push_back(new_fr);
            F1.push_back(new_fr);
        }
    }
    // F2+
    bottom_up_search(F1, freq, closed, freq_supersets, min_sup, min_size);
}

}
}
