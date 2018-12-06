/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "mnet/datastructures/graphs/OrderedMultiplexNetwork.h"

namespace uu {
namespace net {


OrderedMultiplexNetwork::
OrderedMultiplexNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<VertexStore> v,
    std::unique_ptr<VertexOverlappingOrderedLayerStore<SimpleGraph>> l,
    std::unique_ptr<EmptyEdgeStore> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

std::string
OrderedMultiplexNetwork::
summary(
) const
{
    size_t num_edges = 0;

    for (auto layer: *layers_)
    {
        num_edges += layer->edges()->size();
    }

    size_t num_actors = vertices()->size();

    size_t num_layers = layers()->size();

    size_t num_nodes = 0;

    for (auto layer: *layers_)
    {
        num_nodes += layer->vertices()->size();
    }

    std::string summary =
        "OrderedMultiplexNetwork (" +
        std::to_string(num_actors) + (num_actors==1?" actor, ":" actors, ") +
        std::to_string(num_layers) + (num_layers==1?" layer, ":" layers, ") +
        std::to_string(num_nodes) + (num_nodes==1?" node, ":" nodes, ") +
        std::to_string(num_edges) + (num_edges==1?" edge)":" edges)");
    return summary;
}



std::unique_ptr<OrderedMultiplexNetwork>
create_ordered_multiplex_network(
    const std::string& name
)
{

    auto vs = std::make_unique<VertexStore>();
    auto ls = std::make_unique<VertexOverlappingOrderedLayerStore<SimpleGraph>>();
    auto es = std::make_unique<EmptyEdgeStore>();

    MultilayerNetworkType t;
    t.is_ordered = true;

    // Add observers @todo

    return std::make_unique<OrderedMultiplexNetwork>(name, t, std::move(vs), std::move(ls), std::move(es));

}

}
}

