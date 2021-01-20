
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

template <typename C, typename DiscretizationFunction>
std::unique_ptr<C>
extend_members(
    const C* const cube,
    const std::string& member_name,
    DiscretizationFunction f
)
{
    core::assert_not_null(cube, "extend_members", "cube");

    auto dim_names = cube->dim();
    auto new_members = cube->members();
    new_members[new_members.size()-1].push_back(member_name);
    size_t num_members_at_n = new_members[new_members.size()-1].size();
    auto out_cube = cube->model(dim_names, new_members);


    out_cube->init();

    core::IndexIterator idx(cube->size());
    auto idx_iter = idx.begin();

    while (idx_iter != idx.end())
    {
        auto index = *idx_iter;

        size_t member_idx = index.back();
        auto ext_index = index;
        ext_index.pop_back();
        ext_index.push_back(num_members_at_n-1);

        auto cell = cube->at(index);

        for (auto el: *cell)
        {

            out_cube->operator[](index)->add(el);

            // copy elements to the new member based on f()

            bool copy = f(el, member_idx);

            if (copy)
            {
                out_cube->operator[](ext_index)->add(el);
            }

        }

        ++idx_iter;
    }

    return out_cube;
}



}
}

