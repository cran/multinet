/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "mnet/datastructures/graphs/AttributedHomogeneousMultilayerNetwork.h"
#include "net/datastructures/observers/PropagateObserver.h"
#include "mnet/datastructures/observers/LayerObserver.h"
#include "net/datastructures/observers/PropagateAddEraseObserver.h"

namespace uu {
namespace net {


AttributedHomogeneousMultilayerNetwork::
AttributedHomogeneousMultilayerNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>> v,
    std::unique_ptr<VertexOverlappingLayerStore<AttributedSimpleGraph>> l,
    std::unique_ptr<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>>> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

std::string
AttributedHomogeneousMultilayerNetwork::
summary(
) const
{

    size_t num_intra_edges = 0;

    for (auto layer: *layers_)
    {
        num_intra_edges += layer->edges()->size();
    }

    size_t num_inter_edges = interlayer_edges()->size();

    size_t num_actors = vertices()->size();

    size_t num_layers = layers()->size();

    size_t num_nodes = 0;

    for (auto layer: *layers_)
    {
        num_nodes += layer->vertices()->size();
    }

    size_t num_edges = num_intra_edges + num_inter_edges;

    std::string summary =
        "Multilayer Network [" +
        std::to_string(num_actors) + (num_actors==1?" actor, ":" actors, ") +
        std::to_string(num_layers) + (num_layers==1?" layer, ":" layers, ") +
        std::to_string(num_nodes) + (num_nodes==1?" vertex, ":" vertices, ") +
        std::to_string(num_edges) + (num_edges==1?" edge ":" edges ") +
        "(" + std::to_string(num_intra_edges) + "," +  std::to_string(num_inter_edges) + ")]";
    return summary;
}



std::unique_ptr<AttributedHomogeneousMultilayerNetwork>
create_attributed_homogeneous_multilayer_network(
    const std::string& name
)
{
    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    auto ls = std::make_unique<VertexOverlappingLayerStore<AttributedSimpleGraph>>();

    using EA = Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>;
    auto e_attr = std::make_unique<EA>();
    auto es = std::make_unique<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,EA>>(std::move(e_attr));

    // Add observers @todo


    // register an observer to propagate the removal of vertices to the layers
    auto obs1 = std::make_unique<PropagateObserver<VertexOverlappingLayerStore<AttributedSimpleGraph>, const Vertex>>(ls.get());
    vs->attach(obs1.get());

    // register an observer to react to the addition/removal of layers
    auto obs2 = std::make_unique<LayerObserver<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,EA>, AttributedSimpleGraph>>(es.get());
    ls->attach(obs2.get());


    MultilayerNetworkType t;

    auto net = std::make_unique<AttributedHomogeneousMultilayerNetwork>(
                   name,
                   t,
                   std::move(vs),
                   std::move(ls),
                   std::move(es)
               );


    net->register_observer(std::move(obs1));
    net->register_observer(std::move(obs2));

    // register an observer to check that new edges have end-vertices in the network


    return net;

}


std::shared_ptr<AttributedHomogeneousMultilayerNetwork>
create_shared_attributed_homogeneous_multilayer_network(
    const std::string& name
)
{
    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    auto ls = std::make_unique<VertexOverlappingLayerStore<AttributedSimpleGraph>>();

    using EA = Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>;
    auto e_attr = std::make_unique<EA>();
    auto es = std::make_unique<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,EA>>(std::move(e_attr));

    // Add observers @todo


    // register an observer to propagate the removal of vertices to the layers
    auto obs1 = std::make_unique<PropagateObserver<VertexOverlappingLayerStore<AttributedSimpleGraph>, const Vertex>>(ls.get());
    vs->attach(obs1.get());

    // register an observer to react to the addition/removal of layers
    auto obs2 = std::make_unique<LayerObserver<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,EA>, AttributedSimpleGraph>>(es.get());
    ls->attach(obs2.get());


    MultilayerNetworkType t;

    auto net = std::make_shared<AttributedHomogeneousMultilayerNetwork>(
                   name,
                   t,
                   std::move(vs),
                   std::move(ls),
                   std::move(es)
               );



    net->register_observer(std::move(obs1));
    net->register_observer(std::move(obs2));

    // register an observer to check that new edges have end-vertices in the network


    return net;

}

}
}

