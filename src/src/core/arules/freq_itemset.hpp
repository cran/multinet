#ifndef UU_CORE_ARULES_FREQITEMSETS_H_
#define UU_CORE_ARULES_FREQITEMSETS_H_

#include <string>
#include <vector>
#include <unordered_map>
#include <cstddef>

namespace uu {
namespace core {

class freq_itemset
{
public:
    std::vector<std::size_t> items;
    std::vector<std::size_t> tids;
    std::size_t s;
    
    freq_itemset() {};
    freq_itemset(const std::vector<std::size_t>& items, const std::vector<std::size_t>& tids) : items(items), tids(tids), s(tids.size()) {}
    
    std::string
    to_string(
    ) const;
    
    std::string
    to_string(
        const std::unordered_map<std::size_t,std::string>& trans,
        const std::unordered_map<std::size_t,std::string>& items
    ) const;
    
};


}
}

#endif
