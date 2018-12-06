/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "wnet/datastructures/graphs/WeightedGraph.h"
#include "net/datastructures/observers/NoLoopCheckObserver.h"

namespace uu {
namespace net {

std::unique_ptr<WeightedGraph>
create_weighted_graph(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops
)
{
    auto vs = std::make_unique<VertexStore>();

    using A = uu::net::Attributes<uu::net::Edge, uu::net::Weights<uu::net::Edge>>;
    auto w_attr = std::make_unique<A>();

    auto es = std::make_unique<AttributedSimpleEdgeStore<A>>(dir, std::move(w_attr));

    GraphType t;
    t.allows_loops = allows_loops;
    t.is_directed = dir==EdgeDir::DIRECTED ? true : false;
    t.is_weighted = true;

    auto graph = std::make_unique<WeightedGraph>(name, t, std::move(vs), std::move(es));

    if (!allows_loops)
    {
        auto obs = std::make_unique<NoLoopCheckObserver>();
        graph->edges()->attach(obs.get());
        graph->register_observer(std::move(obs));
    }

    return graph;
}

}
}

