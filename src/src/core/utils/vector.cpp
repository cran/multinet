#include "core/utils/vector.hpp"

namespace uu {
namespace core {



std::vector<std::size_t>
seq(
    std::size_t from,
    std::size_t to
)
{
    if (from < to)
    {
        std::size_t size = to-from+1;
        std::vector<std::size_t> vec(size);

        for (std::size_t j=from; j<to+1; j++)
        {
            vec[j-from] = j;
        }

        return vec;
    }

    else
    {
        std::size_t size = -to+from+1;
        std::vector<std::size_t> vec(size);

        for (std::size_t j=from; j>to-1; j--)
        {
            vec[-(j-from)] = j;
        }

        return vec;
    }
}

}
}

