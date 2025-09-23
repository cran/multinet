#include "core/arules/intersect_tids.hpp"

namespace uu {
namespace core {

std::vector<std::size_t>
intersect_tids(
               std::vector<std::size_t> tids1,
               std::vector<std::size_t> tids2
               )
{
    std::vector<std::size_t> res;
    std::size_t idx1 = 0;
    std::size_t idx2 = 0;
    while (idx1 < tids1.size() && idx2 < tids2.size())
    {
        if (tids1[idx1] < tids2[idx2]) {idx1++;}
        else if (tids1[idx1] > tids2[idx2]) {idx2++;}
        else if (tids1[idx1] == tids2[idx2])
        {
            res.push_back(tids1[idx1]);
            idx1++;
            idx2++;
        }
    }
    return res;
}

}
}
