#include "core/arules/freq_itemset.hpp"

#include <sstream>

namespace uu {
namespace core {


std::string
freq_itemset::
to_string(
          const std::unordered_map<size_t,std::string>& trans_map,
          const std::unordered_map<size_t,std::string>& items_map
          ) const
{
    std::stringstream ss;
    ss << "FreqItemSet:";
    for (auto el: items)
    {
        ss << " " << items_map.at(el);
    }
    ss << " (";
    for (auto tid: tids)
    {
        ss << " " << trans_map.at(tid);
    }
    ss << " ) - supp: " << s;
    return ss.str();
}

std::string
freq_itemset::
to_string(
          ) const
{
    std::stringstream ss;
    ss << "FreqItemSet:";
    for (auto el: items)
    {
        ss << " " << el;
    }
    ss << " (";
    for (auto tid: tids)
    {
        ss << " " << tid;
    }
    ss << " ) - supp: " << s;
    return ss.str();
}


}
}
