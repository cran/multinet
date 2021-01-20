
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/pretty_printing.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include "olap/_impl/d-extension.hpp"
#include "olap/_impl/m-contraction.hpp"
#include "olap/_impl/m-extension.hpp"
#include "olap/_impl/m-sort.hpp"

namespace uu {
namespace net {

template <typename C, typename DiscretizationFunction>
std::unique_ptr<C>
extend(
    const C* const cube,
    const std::string& dim_name,
    const std::vector<std::string>& dim_members,
    DiscretizationFunction f
)
{

    core::assert_not_null(cube, "extend", "cube");

    class Predicate
    {
        DiscretizationFunction f_;
        size_t i_;

      public:

        Predicate(DiscretizationFunction f, size_t i) : f_(f), i_(i) {}

        bool
        operator () (const uu::net::Vertex* v, size_t member_idx)
        {
            (void)member_idx;
            auto check = f_(v);
            return (check.find(i_) != check.end());
        }
    };

    auto tmp_cube = extend_dimension(cube, dim_name, "__m__");

    for (size_t i=0; i<dim_members.size(); i++)
    {
        tmp_cube = extend_members(tmp_cube.get(), dim_members[i], Predicate(f,i));
    }

    std::vector<size_t> indexes;

    for (size_t j=1; j<dim_members.size()+1; j++)
    {
        indexes.push_back(j);
    }

    indexes.push_back(0);
    tmp_cube = vsort_members(tmp_cube.get(), indexes);
    tmp_cube = contract_members(tmp_cube.get());
    return tmp_cube;
}

/*
template <typename C, typename DiscretizationFunction>
std::unique_ptr<C>
extend(
const C* const cube,
const std::string& dim_name,
const std::vector<std::string>& dim_members,
DiscretizationFunction f
)
{
core::assert_not_null(cube, "embed", "cube");


// @todo check not null, dimensions, ...

// new dimensions (@todo common code, put into utility function)

auto dim_names = cube->dim();

std::vector<std::vector<std::string>> members(dim_names.size());

for (size_t i = 0; i < dim_names.size(); i++)
{
    auto member_names = cube->members(dim_names.at(i));

    for (auto name: member_names)
    {
        members[i].push_back(name);
    }
}

dim_names.push_back(dim_name);
members.push_back(dim_members);

// output cube
auto out_cube = cube->model(dim_names, members);

// for each cell in the input cube compute the corresponding cell in the output cube
// and copy it.

core::IndexIterator in_idx(cube->size());
auto in_idx_iter = in_idx.begin();

while (in_idx_iter != in_idx.end())
{
    // we process cell at in_index in the input cube
    auto in_index = *in_idx_iter;

    // init corresponding cells in out cube
    for (size_t i=0; i<dim_members.size(); i++)
    {
        in_index.push_back(i);
        out_cube->init(in_index);
        in_index.pop_back();
    }

    // distribute the elements in in_cube[in_index] to the out_cube based on f()
    auto cell = cube->at(in_index);

    for (auto el: *cell)
    {
        for (auto idx: f(el))
        {
            in_index.push_back(idx);
            out_cube->operator[](in_index)->add(el);
            in_index.pop_back();
        }
    }

    ++in_idx_iter;
}

return out_cube;
}
*/


}
}

