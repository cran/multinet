//#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include "core/utils/vector.hpp"
#include "olap/_impl/d-sort.hpp"
#include "olap/_impl/m-extension.hpp"

namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
flatten(
    C* const cube,
    size_t idx,
    const std::string& new_member,
    const std::set<size_t>& to_be_flattened
)
{
    core::assert_not_null(cube, "flatten", "cube");

    class Predicate
    {
        std::set<size_t> indexes_;

      public:

        Predicate(std::set<size_t> indexes) : indexes_(indexes) {}

        bool
        operator () (const uu::net::Vertex* v, size_t member_idx)
        {
            (void)v;
            return (indexes_.find(member_idx) != indexes_.end());
        }
    };


    // @todo check indexes


    std::vector<size_t> indexes = core::seq(0, cube->order()-1);
    core::move(indexes, idx, indexes.size()-1);
    auto out_cube = vsort_dimensions(cube, indexes);


    out_cube = extend_members(out_cube.get(), new_member, Predicate(to_be_flattened));


    indexes = core::seq(0, cube->order()-1);
    core::move(indexes, indexes.size()-1, idx);
    out_cube = vsort_dimensions(out_cube.get(), indexes);

    return out_cube;
}


}
}

