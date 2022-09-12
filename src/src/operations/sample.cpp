#include "operations/sample.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/random.hpp"

namespace uu {
namespace net {

std::unique_ptr<Network>
sample(
       const Network* g
       ) {
    
    core::assert_not_null(g, "sample", "g");
    
    auto dir = g->is_directed() ? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED;
    auto loops = g->allows_loops() ? LoopMode::ALLOWED : LoopMode::DISALLOWED;
    
    auto res = std::make_unique<Network>(g->name, dir, loops);

    for (auto vertex: *g->vertices())
    {
        res->vertices()->add(vertex);
    }

    for (auto e: *g->edges())
    {
        auto p = get_prob(g, e);
        
        if (core::test(p))
        {
            res->edges()->add(e->v1, e->v2);
        }
    }

    return res;
}

}
}

