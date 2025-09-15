#include "core/arules/generate_subsets.hpp"

namespace uu {
namespace core {

std::vector<std::vector<size_t>>
generate_subsets(
                 const std::vector<size_t>& items
                 )
{
    std::vector<std::vector<size_t>> res;
    for (size_t exclude = 0; exclude < items.size(); exclude++)
    {
        std::vector<size_t> subset;
        for (size_t idx = 0; idx < items.size(); idx++)
        {
            if (idx != exclude)
            {
                subset.push_back(items[idx]);
            }
        }
        res.push_back(subset);
    }
    return res;
}

}
}
