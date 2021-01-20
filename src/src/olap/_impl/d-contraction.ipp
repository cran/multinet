#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
//#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
contract_dimension(
    const C* const cube
)
{
    core::assert_not_null(cube, "contract_dimension", "cube");

    // output cube

    auto dim_names = cube->dim();

    if (dim_names.size() == 0)
    {
        throw core::OutOfBoundsException("cannot contract a cube of order 0");
    }

    auto members = cube->members();
    auto dim = dim_names.back();
    dim_names.pop_back();
    members.pop_back();

    auto out_cube = cube->model(dim_names, members);

    // for each cell in the out cube compute the corresponding cells in the input cube and
    // copy their content.

    core::IndexIterator out_idx(out_cube->size());
    auto out_idx_iter = out_idx.begin();
    size_t num_members = cube->members(dim).size();

    while (out_idx_iter != out_idx.end())
    {
        auto out_index = *out_idx_iter;
        out_cube->init(out_index);
        auto in_index = out_index;

        for (size_t i=0; i<num_members; i++)
        {
            in_index.push_back(i);

            auto cell = cube->at(in_index);

            for (auto el: *cell)
            {
                out_cube->operator[](out_index)->add(el);
            }

            in_index.pop_back();
        }

        ++out_idx_iter;
    }

    return out_cube;
}



}
}

