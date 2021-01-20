
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
extend_dimension(
    const C* const cube,
    const std::string& new_dimension_name,
    const std::string& new_member_name
)
{
    core::assert_not_null(cube, "extend_dimension", "cube");

    // output cube

    auto dim_names = cube->dim();
    auto members = cube->members();
    std::vector<std::string> new_members = {new_member_name};

    dim_names.push_back(new_dimension_name);
    members.push_back(new_members);

    auto out_cube = cube->model(dim_names, members);

    // for each cell in the input cube compute the corresponding cell in the output cube and
    // copy its content.

    core::IndexIterator in_idx(cube->size());
    auto in_idx_iter = in_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        // we process the cell at in_index in the input cube
        auto in_index = *in_idx_iter;

        // init & fill the corresponding cell in the out cube
        in_index.push_back(0);
        out_cube->init(in_index);

        auto cell = cube->at(in_index);

        for (auto el: *cell)
        {
            out_cube->operator[](in_index)->add(el);
        }

        ++in_idx_iter;
    }

    return out_cube;
}



}
}

