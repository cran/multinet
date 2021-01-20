
#include <memory>
#include <string>
#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace core {


/*    template <typename C>
    sel::EntryIterator<C>
    islice(
           C* cube,
           const std::vector<std::vector<size_t>>& indexes
           )
    {
        return sel::EntryIterator<C>(cube, indexes);
    }
  */

template <typename C>
std::unique_ptr<C>
vslice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
)
{

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

    auto out_cube = std::make_unique<C>(dim_names, members);

    // indexes in the new cube corresponding to the input indexes

    sel::IndexIterator in_idx(indexes);
    sel::IndexIterator out_idx(out_cube->size());

    auto in_idx_iter = in_idx.begin();
    auto out_idx_iter = out_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        auto cell = cube->at(*in_idx_iter)->shared_from_this();
        out_cube->insert(cell, *out_idx_iter);
        ++in_idx_iter;
        ++out_idx_iter;
    }

    return out_cube;
}

template <typename C>
std::unique_ptr<C>
mslice(
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
)
{

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

    auto out_cube = std::make_unique<C>(dim_names, members);

    // indexes in the new cube corresponding to the input indexes

    sel::IndexIterator in_idx(indexes);
    sel::IndexIterator out_idx(out_cube->size());

    auto in_idx_iter = in_idx.begin();
    auto out_idx_iter = out_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        auto cell = cube->at(*in_idx_iter)->shared_from_this();
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

}
}

