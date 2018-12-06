/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "mnet/datastructures/graphs/AttributedMultiplexNetwork.h"

namespace uu {
namespace net {


AttributedMultiplexNetwork::
AttributedMultiplexNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>> v,
    std::unique_ptr<VertexOverlappingLayerStore<AttributedSimpleGraph>> l,
    std::unique_ptr<EmptyEdgeStore> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

std::string
AttributedMultiplexNetwork::
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
        "MultiplexNetwork (" +
        std::to_string(num_actors) + (num_actors==1?" actor, ":" actors, ") +
        std::to_string(num_layers) + (num_layers==1?" layer, ":" layers, ") +
        std::to_string(num_nodes) + (num_nodes==1?" node, ":" nodes, ") +
        std::to_string(num_edges) + (num_edges==1?" edge)":" edges)");
    return summary;
}



std::unique_ptr<AttributedMultiplexNetwork>
create_attributed_multiplex_network(
    const std::string& name
)
{

    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    auto ls = std::make_unique<VertexOverlappingLayerStore<AttributedSimpleGraph>>();
    auto es = std::make_unique<EmptyEdgeStore>();


    MultilayerNetworkType t;

    // Add observers @todo

    return std::make_unique<AttributedMultiplexNetwork>(name, t, std::move(vs), std::move(ls), std::move(es));

}


std::shared_ptr<AttributedMultiplexNetwork>
create_shared_attributed_multiplex_network(
    const std::string& name
)
{

    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    auto ls = std::make_unique<VertexOverlappingLayerStore<AttributedSimpleGraph>>();
    auto es = std::make_unique<EmptyEdgeStore>();


    MultilayerNetworkType t;

    // Add observers @todo

    return std::make_shared<AttributedMultiplexNetwork>(name, t, std::move(vs), std::move(ls), std::move(es));

}
}
}

