#include "core/utils/vector.hpp"

namespace uu {
namespace core {



std::vector<size_t>
seq(
    size_t from,
    size_t to
)
{
    if (from < to)
    {
        size_t size = to-from+1;
        std::vector<size_t> vec(size);

        for (size_t j=from; j<to+1; j++)
        {
            vec[j-from] = j;
        }

        return vec;
    }

    else
    {
        size_t size = -to+from+1;
        std::vector<size_t> vec(size);

        for (size_t j=from; j>to-1; j--)
        {
            vec[-(j-from)] = j;
        }

        return vec;
    }
}

}
}

