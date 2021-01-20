#include "olap/edge-projection.hpp"

#include <string>
#include "core/utils/pretty_printing.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/olap/selection/IndexIterator.hpp"

namespace uu {
namespace net {

std::unique_ptr<ECube>
project(
    const ECube* const cube,
    bool inverse
)
{
    core::assert_not_null(cube, "project", "cube");

    if (cube->is_directed())
    {
        // temporary @todo
        std::string err = "only undirected projection currently implemented";
        throw core::OperationNotSupportedException(err);
    }

    auto vc1 = cube->vcube1();
    auto vc2 = cube->vcube2();
    EdgeDir dir = cube->is_directed() ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
    auto out_cube = std::make_unique<ECube>(vc2, vc2, dir, cube->dim(), cube->members());

    // projection

    core::IndexIterator idx_it(cube->size());

    for (auto idx: idx_it)
    {
        out_cube->init(idx);

        for (auto v: *vc1)
        {
            //std::cout << (*v) << std::endl;
            auto neigh = (*cube)[idx]->neighbors(v, vc1, EdgeMode::OUT);

            for (auto it1 = neigh->begin(); it1 != neigh->end(); ++it1)
            {
                for (auto it2 = it1; it2 != neigh->end(); ++it2)
                {
                    if (it1 == it2)
                    {
                        continue;
                    }

                    (*out_cube)[idx]->add((*it1), vc2, (*it2), vc2);
                }
            }
        }
    }

    return out_cube;

}

}
}

