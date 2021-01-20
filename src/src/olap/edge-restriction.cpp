#include "olap/edge-restriction.hpp"

#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

std::unique_ptr<ECube>
mrestrict(
    const ECube* const cube,
    const VertexStore* vc1,
    const VertexStore* vc2
)
{
    core::assert_not_null(cube, "mrestrict", "cube");
    core::assert_not_null(vc1, "mrestrict", "vc1");
    core::assert_not_null(vc2, "mrestrict", "vc2");

    EdgeDir dir = cube->is_directed() ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
    auto out_cube = std::make_unique<ECube>(vc1, vc2, dir, cube->dim(), cube->members());

    // ...

    auto vertices1 = cube->vcube1();
    auto vertices2 = cube->vcube2();

    core::IndexIterator idx_it(cube->size());

    for (auto idx: idx_it)
    {
        out_cube->init(idx);

        for (auto e: *(*cube)[idx])
        {
            if (vertices1 == e->l1)
            {
                if (!vc1->contains(e->v1))
                {
                    continue;
                }

                if (!vc2->contains(e->v2))
                {
                    continue;
                }

                (*out_cube)[idx]->add(e->v1, vc1, e->v2, vc2);
            }

            else
            {
                if (!vc2->contains(e->v1))
                {
                    continue;
                }

                if (!vc1->contains(e->v2))
                {
                    continue;
                }

                (*out_cube)[idx]->add(e->v1, vc2, e->v2, vc1);
            }
        }
    }

    return out_cube;
}

}
}

