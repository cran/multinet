#include "olap/indexing.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
namespace uu {
namespace net {


size_t
idx_to_pos(
    const std::vector<size_t>& index,
    const std::vector<size_t>& dimensions
)
{
    if (index.size() != dimensions.size())
    {
        std::string err = "cell index must have the same number of elements as the order";
        throw core::OutOfBoundsException(err);
    }

    size_t idx = 0;
    size_t offset = 1;

    for (size_t i = 0; i < dimensions.size(); i++)
    {
        if (index[i] >= dimensions[i])
        {
            std::string err = "value in cell index (" +
                              std::to_string(index[i]) + ") higher than number of members (" +
                              std::to_string(dimensions[i]) + ")";
            throw core::OutOfBoundsException(err);
        }

        idx += index[i] * offset;
        offset *= dimensions[i];
    } 

    return idx;
}


}
}

