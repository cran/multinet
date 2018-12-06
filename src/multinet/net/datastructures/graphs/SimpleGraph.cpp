/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "net/datastructures/graphs/SimpleGraph.h"
#include "net/datastructures/observers/NoLoopCheckObserver.h"

namespace uu {
namespace net {

std::unique_ptr<SimpleGraph>
create_simple_graph(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops)
{

    auto vs = std::make_unique<VertexStore>();

    auto es = std::make_unique<SimpleEdgeStore>(dir);

    GraphType t;
    t.allows_loops = allows_loops;
    t.is_directed = dir==EdgeDir::DIRECTED ? true : false;
    t.is_weighted = true;

    auto graph = std::make_unique<SimpleGraph>(name, t, std::move(vs), std::move(es));

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

