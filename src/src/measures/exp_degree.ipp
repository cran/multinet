#include <vector>
#include <algorithm>
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/WrongParameterException.hpp"

namespace uu {
namespace net {

template<typename G>
double
exp_degree(
    const G* g,
    const Vertex* v,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "exp_degree", "g");
    core::assert_not_null(g, "exp_degree", "v");

    if (!is_probabilistic(g))
    {
        throw core::WrongParameterException("expected degree can only be computed on probabilistic networks");
    }

    double exp_d = 0;

    for (auto edge: *g->edges()->incident(v, mode))
    {
        auto p = get_prob(g, edge);

        exp_d += p;
        
        if (!(g->is_directed() && mode != EdgeMode::INOUT) && edge->v1 == edge->v2)
        {
            // loops are counted twice
            exp_d += p;
        }
        
    }

    return exp_d;
}


}
}

