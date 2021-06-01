#include <vector>
#include <algorithm>
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/utils/Counter.hpp"

namespace uu {
namespace net {


template<typename G>
double
strength(
    const G* g,
    const Vertex* v,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "degree", "g");
    core::assert_not_null(g, "degree", "v");

    if (!is_weighted(g))
    {
        throw core::WrongParameterException("strength can only be computed on weighted graphs");
    }

    double s = 0;

    for (auto edge: *g->edges()->incident(v, mode))
    {
        auto w = get_weight(g, edge);

        s += w;

        if (!(g->is_directed() && mode != EdgeMode::INOUT) && edge->v1 == edge->v2)
        {
            // loops are counted twice
            s += w;
        }
    }

    return s;
}


}
}
