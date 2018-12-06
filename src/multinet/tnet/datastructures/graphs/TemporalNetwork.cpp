/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "tnet/datastructures/graphs/TemporalNetwork.h"
#include "net/datastructures/observers/AdjVertexCheckObserver.h"
#include "net/datastructures/observers/PropagateObserver.h"
#include "net/datastructures/observers/NoLoopCheckObserver.h"

namespace uu {
namespace net {

TemporalNetwork::
TemporalNetwork(
    const std::string& name,
    GraphType t,
    std::unique_ptr<VertexStore> v,
    std::unique_ptr<TemporalMultiEdgeStore> e
) : super(name, t, std::move(v), std::move(e)) {}

std::string
TemporalNetwork::
summary(
) const
{
    std::string summary =
        "Temporal Network (" +
        vertices_->summary() + ", " +
        edges_->summary() + ")";
    return summary;
}

std::unique_ptr<TemporalNetwork>
create_temporal_network(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops
)
{
    auto vs = std::make_unique<VertexStore>();

    using A = uu::net::Attributes<uu::net::Edge, uu::net::Times<uu::net::Edge>>;
    auto w_attr = std::make_unique<A>();

    auto es = std::make_unique<TemporalMultiEdgeStore>(dir, std::move(w_attr));

    GraphType t;
    t.allows_loops = allows_loops;
    t.allows_multi_edges = true;
    t.is_directed = dir==EdgeDir::DIRECTED ? true : false;
    t.is_temporal = true;

    auto graph = std::make_unique<TemporalNetwork>(name, t, std::move(vs), std::move(es));

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

