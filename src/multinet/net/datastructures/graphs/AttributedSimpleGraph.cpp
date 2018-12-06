/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "net/datastructures/graphs/AttributedSimpleGraph.h"
#include "net/datastructures/observers/NoLoopCheckObserver.h"

namespace uu {
namespace net {

std::unique_ptr<AttributedSimpleGraph>
create_attributed_simple_graph(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops)
{

    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    using EA = Attributes<Edge, UserDefinedAttrs<Edge>>;
    auto e_attr = std::make_unique<EA>();
    auto es = std::make_unique<AttributedSimpleEdgeStore<EA>>(dir, std::move(e_attr));

    GraphType t;
    t.allows_loops = allows_loops;
    t.is_directed = dir==EdgeDir::DIRECTED ? true : false;
    t.is_weighted = true;

    auto graph = std::make_unique<AttributedSimpleGraph>(name, t, std::move(vs), std::move(es));

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

