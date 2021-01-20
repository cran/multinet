//#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include "core/utils/vector.hpp"
#include "olap/_impl/d-contraction.hpp"
#include "olap/_impl/d-sort.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
contract(
    C* const cube,
    size_t idx
)
{
    core::assert_not_null(cube, "contract", "cube");

    std::vector<size_t> indexes = core::seq(0, cube->order()-1);
    core::move(indexes, idx, indexes.size()-1);
    auto out_cube = vsort_dimensions(cube, indexes);
    out_cube = contract_dimension(out_cube.get());
    return out_cube;
}


}
}

