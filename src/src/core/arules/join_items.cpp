#include "core/arules/join_items.hpp"

namespace uu {
namespace core {

std::vector<std::size_t>
join_items(
           std::vector<std::size_t> items1,
           std::vector<std::size_t> items2
           )
{
    
    std::vector<std::size_t> res;
    std::size_t idx1 = 0;
    std::size_t idx2 = 0;
    while (idx1 < items1.size() && idx2 < items2.size())
    {
        if (items1[idx1] < items2[idx2])
        {
            res.push_back(items1[idx1]);
            idx1++;
        }
        else if (items1[idx1] > items2[idx2])
        {
            res.push_back(items2[idx2]);
            idx2++;
        }
        else if (items1[idx1] == items2[idx2])
        {
            res.push_back(items1[idx1]);
            idx1++;
            idx2++;
        }
    }
    while (idx1 < items1.size())
    {
        res.push_back(items1[idx1]);
        idx1++;
    }
    while (idx2 < items2.size())
    {
        res.push_back(items2[idx2]);
        idx2++;
    }
    return res;
}

}
}
