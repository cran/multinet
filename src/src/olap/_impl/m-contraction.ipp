
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
contract_members(
    const C* const cube
)
{
    core::assert_not_null(cube, "contract_members", "cube");

    // output cube

    auto dim_names = cube->dim();
    auto new_members = cube->members();
    new_members[new_members.size()-1].pop_back();

    auto out_cube = cube->model(dim_names, new_members);

    // for each cell in the input cube compute the corresponding cell in the output cube and
    // copy its content.

    core::IndexIterator idx(out_cube->size());
    auto idx_iter = idx.begin();

    while (idx_iter != idx.end())
    {
        auto index = *idx_iter;

        out_cube->init(index);

        auto cell = cube->at(index);

        for (auto el: *cell)
        {
            out_cube->operator[](index)->add(el);
        }

        ++idx_iter;
    }

    return out_cube;
}

template <typename C>
std::unique_ptr<C>
contract_members_view(
    C* const cube
)
{
    core::assert_not_null(cube, "contract_members_view", "cube");

    // output cube

    auto dim_names = cube->dim();
    auto new_members = cube->members();
    new_members[new_members.size()-1].pop_back();

    auto out_cube = cube->model(dim_names, new_members);

    // for each cell in the input cube compute the corresponding cell in the output cube and
    // copy its content.

    core::IndexIterator idx(out_cube->size());
    auto idx_iter = idx.begin();

    while (idx_iter != idx.end())
    {
        auto index = *idx_iter;
        auto cell = cube->at(index);
        out_cube->init(index, cell->shared_from_this());
        ++idx_iter;
    }

    return out_cube;
}



}
}

