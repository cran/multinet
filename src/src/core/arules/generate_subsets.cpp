#include "core/arules/generate_subsets.hpp"

namespace uu {
namespace core {

std::vector<std::vector<std::size_t>>
generate_subsets(
                 const std::vector<std::size_t>& items
                 )
{
    std::vector<std::vector<std::size_t>> res;
    for (std::size_t exclude = 0; exclude < items.size(); exclude++)
    {
        std::vector<std::size_t> subset;
        for (std::size_t idx = 0; idx < items.size(); idx++)
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
