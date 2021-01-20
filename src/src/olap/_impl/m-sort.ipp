
#include <string>
#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/olap/selection/IndexIterator.hpp"
//#include "core/olap/selection/EntryIterator.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vsort_members(
    C* const cube,
    const std::vector<size_t>& perm
)
{
    core::assert_not_null(cube, "vsort_members", "cube");

    auto dim_names = cube->dim();
    size_t num_dimensions = dim_names.size();
    auto new_members = cube->members();
    auto members_at_n = new_members[new_members.size()-1];
    size_t num_members_at_n = members_at_n.size();
    new_members[num_dimensions-1].clear();

    for (size_t i = 0; i < num_members_at_n; i++)
    {
        new_members[num_dimensions-1].push_back(members_at_n[perm[i]]);
    }


    if (perm.size() != num_members_at_n)
    {
        throw core::WrongParameterException("the number of input indexes does not match the number of members");
    }

    std::set<size_t> check;
    check.insert(perm.begin(), perm.end());

    if (perm.size() != check.size())
    {
        throw core::WrongParameterException("duplicate indexes");
    }

    if (*std::max_element(perm.begin(), perm.end()) != num_members_at_n-1)
    {
        throw core::OutOfBoundsException("the maximum index is larger than the number of members");
    }

    auto out_cube = cube->model(dim_names, new_members);

    core::IndexIterator out_idx(out_cube->size());
    auto out_idx_iter = out_idx.begin();

    while (out_idx_iter != out_idx.end())
    {
        // we process cell at in_index in the input cube
        std::vector<size_t> out_index = *out_idx_iter;

        std::vector<size_t> in_index = out_index;
        in_index.pop_back();
        in_index.push_back(perm[out_index.back()]);

        out_cube->init(out_index, cube->operator[](in_index)->shared_from_this());

        ++out_idx_iter;
    }

    return out_cube;
}


template <typename C>
std::unique_ptr<C>
msort_members(
    const C* const cube,
    const std::vector<size_t>& perm
)
{
    core::assert_not_null(cube, "msort_members", "cube");

    auto dim_names = cube->dim();
    size_t num_dimensions = dim_names.size();
    auto new_members = cube->members();
    auto members_at_n = new_members[new_members.size()-1];
    size_t num_members_at_n = members_at_n.size();
    new_members[num_dimensions-1].clear();

    for (size_t i = 0; i < num_members_at_n; i++)
    {
        new_members[num_dimensions-1].push_back(members_at_n[perm[i]]);
    }


    if (perm.size() != num_members_at_n)
    {
        throw core::WrongParameterException("the number of input indexes does not match the number of members");
    }

    std::set<size_t> check;
    check.insert(perm.begin(), perm.end());

    if (perm.size() != check.size())
    {
        throw core::WrongParameterException("duplicate indexes");
    }

    if (*std::max_element(perm.begin(), perm.end()) != num_members_at_n-1)
    {
        throw core::OutOfBoundsException("the maximum index is larger than the number of members");
    }

    auto out_cube = cube->model(dim_names, new_members);
    out_cube->init();

    core::IndexIterator out_idx(out_cube->size());
    auto out_idx_iter = out_idx.begin();

    while (out_idx_iter != out_idx.end())
    {
        // we process cell at in_index in the input cube
        std::vector<size_t> out_index = *out_idx_iter;

        std::vector<size_t> in_index = out_index;
        in_index.pop_back();
        in_index.push_back(perm[out_index.back()]);

        auto cell = cube->operator[](in_index);

        for (auto el: *cell)
        {
            (*out_cube)[out_index]->add(el);

        }

        ++out_idx_iter;
    }

    return out_cube;
}

}
}

