
#include <string>
#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include "core/utils/vector.hpp"
//#include "core/olap/selection/EntryIterator.hpp"
#include "olap/_impl/d-sort.hpp"
#include "olap/_impl/m-sort.hpp"
#include "olap/_impl/m-contraction.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
mslice(
    C* const cube,
    size_t dim_idx,
    const std::vector<size_t>& indexes
)
{
    std::vector<size_t> d_indexes = core::seq(0, cube->order()-1);
    core::move(d_indexes, dim_idx, d_indexes.size()-1);
    auto out_cube = msort_dimensions(cube, d_indexes);

    // move members to be deleted to the end
    size_t num_members = cube->size()[dim_idx];
    std::vector<size_t> m_indexes = core::seq(0, num_members-1);
    std::vector<size_t> to_remove(num_members);

    for (size_t q=0; q<indexes.size(); q++)
    {
        to_remove[q] = indexes[q];
    }

    std::set_difference (m_indexes.begin(), m_indexes.end(), indexes.begin(), indexes.end(), to_remove.begin()+indexes.size());

    out_cube = msort_members(out_cube.get(), to_remove);

    // remove members
    for (size_t j=0; j<num_members-indexes.size(); j++)
    {
        out_cube = contract_members_view(out_cube.get());
    }

    // move dimension back
    d_indexes = core::seq(0, cube->order()-1);
    core::move(d_indexes, d_indexes.size()-1, dim_idx);
    out_cube = msort_dimensions(out_cube.get(), d_indexes);

    return out_cube;
}

template <typename C>
std::unique_ptr<C>
mslice(
    C* const cube,
    const std::vector<std::vector<size_t>>& indexes
)
{
    auto out_cube = mslice(cube, 0, indexes[0]);

    for (size_t i=1; i<indexes.size(); i++)
    {
        out_cube = mslice(out_cube.get(), i, indexes[i]);
    }

    return out_cube;
    /*
        // copy the input cube
    std::vector<size_t> identity = core::seq(0, cube->order()-1);
    auto out_cube = msort_dimensions(cube, identity);

        // for each dimension
    std::vector<size_t> d_indexes = core::seq(0, cube->order()-1);
    core::move(d_indexes, 0, d_indexes.size()-1);
    for (size_t i=0; i<cube->order(); i++)
    {
            // move dimension to the end
        out_cube = msort_dimensions(out_cube.get(), d_indexes);

            // move members to be deleted to the end
        size_t num_members = cube->size()[i];
        std::vector<size_t> m_indexes = core::seq(0, num_members-1);
        std::vector<size_t> to_remove(num_members);
        for (size_t q=0; q<indexes[i].size(); q++)
        {
            to_remove[q] = indexes[i][q];
        }
        std::set_difference (m_indexes.begin(), m_indexes.end(), indexes[i].begin(), indexes[i].end(), to_remove.begin()+indexes[i].size());

        out_cube = msort_members(out_cube.get(), to_remove);

            // remove members
        for (size_t j=0; j<num_members-indexes[i].size(); j++)
        {
            out_cube = contract_members_view(out_cube.get());
        }

    }
    return out_cube;
     */
}

/*
template <typename C>
std::unique_ptr<C>
vslice(
C* const cube,
const std::vector<std::vector<size_t>>& indexes
)
{
core::assert_not_null(cube, "vslice", "cube");

// @todo check not null, dimensions, ...

size_t num_dimensions = indexes.size();

// new dimensions (@todo common code, put into utility function)

auto dim_names = cube->dim();

std::vector<std::vector<std::string>> members(dim_names.size());

for (size_t i = 0; i < num_dimensions; i++)
{
    auto member_names = cube->members(dim_names.at(i));

    for (auto idx: indexes[i])
    {
        members[i].push_back(member_names.at(idx));
    }
}

// output cube

auto out_cube = cube->model(dim_names, members);

// indexes in the new cube corresponding to the input indexes

core::IndexIterator in_idx(indexes);
core::IndexIterator out_idx(out_cube->size());

auto in_idx_iter = in_idx.begin();
auto out_idx_iter = out_idx.begin();

while (in_idx_iter != in_idx.end())
{
    auto cell = cube->at(*in_idx_iter);

    out_cube->init(*out_idx_iter, cell->shared_from_this());

    ++in_idx_iter;
    ++out_idx_iter;
}

return out_cube;
}

template <typename C>
std::unique_ptr<C>
mslice(
const C* const cube,
const std::vector<std::vector<size_t>>& indexes
)
{
core::assert_not_null(cube, "mslice", "cube");

// @todo check not null, dimensions, ...

size_t num_dimensions = indexes.size();

// new dimensions (@todo common code, put into utility function)

auto dim_names = cube->dim();

std::vector<std::vector<std::string>> members(dim_names.size());

for (size_t i = 0; i < num_dimensions; i++)
{
    auto member_names = cube->members(dim_names.at(i));

    for (auto idx: indexes[i])
    {
        members[i].push_back(member_names.at(idx));
    }
}

// output cube

auto out_cube = cube->model(dim_names, members);

// indexes in the new cube corresponding to the input indexes

core::IndexIterator in_idx(indexes);
core::IndexIterator out_idx(out_cube->size());

auto in_idx_iter = in_idx.begin();
auto out_idx_iter = out_idx.begin();

while (in_idx_iter != in_idx.end())
{
    auto cell = cube->at(*in_idx_iter);

    auto out_cell = out_cube->init(*out_idx_iter);

    for (auto el: *cell)
    {
        out_cell->add(el);
    }

    ++in_idx_iter;
    ++out_idx_iter;
}

return out_cube;
}
 */

}
}

