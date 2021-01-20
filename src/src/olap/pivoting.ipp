//#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vpivot(
    C* const cube,
    const std::vector<size_t>& perm
)
{
    core::assert_not_null(cube, "vpivoting", "cube");

    // @todo check perm

    // creating output cube

    std::vector<size_t> size = cube->size();
    std::vector<std::string> in_dimensions = cube->dim();
    size_t num_dimensions = size.size();
    std::vector<std::string> out_dimensions(num_dimensions);

    for (size_t i = 0; i < num_dimensions; i++)
    {
        out_dimensions[i] = in_dimensions[perm[i]];
    }

    std::vector<std::vector<std::string>> in_members = cube->members();
    std::vector<std::vector<std::string>> out_members(num_dimensions);

    for (size_t i = 0; i < num_dimensions; i++)
    {
        out_members[i] = in_members[perm[i]];
    }

    auto out_cube = cube->model(out_dimensions, out_members);

    // for each cell in the input cube compute the corresponding cell in the output cube
    // and copy a reference to the cell.

    core::IndexIterator in_idx(cube->size());
    auto in_idx_iter = in_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        // we process cell at in_index in the input cube
        auto in_index = *in_idx_iter;

        std::vector<size_t> out_index;

        for (size_t i=0; i<num_dimensions; i++)
        {
            out_index.push_back(in_index[perm[i]]);
        }

        out_cube->init(out_index, cube->operator[](in_index)->shared_from_this());

        ++in_idx_iter;
    }

    return out_cube;
}

template <typename C>
std::unique_ptr<C>
mpivot(
    const C* const cube,
    const std::vector<size_t>& perm
)
{
    core::assert_not_null(cube, "mpivoting", "cube");

    // @todo check perm

    // creating output cube

    std::vector<std::string> in_dimensions = cube->dim();
    size_t num_dimensions = in_dimensions.size();
    std::vector<std::string> out_dimensions(num_dimensions);

    for (size_t i = 0; i < num_dimensions; i++)
    {
        out_dimensions[i] = in_dimensions[perm[i]];
    }

    std::vector<std::vector<std::string>> in_members = cube->members();
    std::vector<std::vector<std::string>> out_members(num_dimensions);

    for (size_t i = 0; i < num_dimensions; i++)
    {
        out_members[i] = in_members[perm[i]];
    }

    auto out_cube = std::make_unique<C>(out_dimensions, out_members);

    // for each cell in the input cube compute the corresponding cell in the output cube
    // and copy the elements from one cell to the other.

    core::IndexIterator in_idx(cube->size());
    auto in_idx_iter = in_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        // we process cell at in_index in the input cube
        auto in_index = *in_idx_iter;

        std::vector<size_t> out_index;

        for (size_t i=0; i<num_dimensions; i++)
        {
            out_index.push_back(in_index[perm[i]]);
        }

        auto store = out_cube->init(out_index);

        for (auto el: *cube->operator[](in_index))
        {
            store->add(el);
        }

        ++in_idx_iter;
    }

    return out_cube;
}


}
}

