/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "mnet/datastructures/graphs/HomogeneousMultilayerNetwork.h"
#include "net/datastructures/observers/PropagateObserver.h"
#include "net/datastructures/observers/PropagateAddEraseObserver.h"

namespace uu {
namespace net {


HomogeneousMultilayerNetwork::
HomogeneousMultilayerNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<VertexStore> v,
    std::unique_ptr<VertexOverlappingLayerStore<SimpleGraph>> l,
    std::unique_ptr<DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

std::string
HomogeneousMultilayerNetwork::
summary(
) const
{
    size_t num_intra_edges = 0;

    for (auto layer: *layers_)
    {
        num_intra_edges += layer->edges()->size();
    }


    size_t num_inter_edges = interlayer_edges()->size();

    /*
    for (auto layer1: *layers_)
    {
        for (auto layer2: *layers_)
        {
            if (layer1<layer2)
            {
                num_inter_edges += interlayer_edges()->get(layer1, layer2)->size();
            }
        }
    }
    */

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
        std::to_string(num_nodes) + (num_nodes==1?" node, ":" nodes, ") +
        std::to_string(num_edges) + (num_edges==1?" edge ":" edges ") +
        "(" + std::to_string(num_intra_edges) + "," +  std::to_string(num_inter_edges) + ")]";
    return summary;
}



std::unique_ptr<HomogeneousMultilayerNetwork>
create_homogeneous_multilayer_network(
    const std::string& name
)
{

    auto vs = std::make_unique<VertexStore>();
    auto ls = std::make_unique<VertexOverlappingLayerStore<SimpleGraph>>();
    auto es = std::make_unique<DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>>();

    // Add observers @todo

    /*
    // register an observer to propagate the removal of vertices to the layers
    auto obs1 = std::make_unique<PropagateObserver<VertexOverlappingLayerStore<SimpleGraphLayer>, const Vertex>>(layers());
    vertices()->attach(obs1.get());
    register_observer(std::move(obs1));

    // register an observer to propagate the removal of vertices to the edge store
    auto obs2 = std::make_unique<PropagateObserver<DynamicSimpleInterlayerEdgeStore, const Vertex>>(interlayer_edges());
    vertices()->attach(obs2.get());
    register_observer(std::move(obs2));

    // register an observer to update the edge store when layers are added or removed
    auto obs3 = std::make_unique<PropagateAddEraseObserver<DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>, const SimpleGraph>>(es.get());
    ls->attach(obs3.get());

     */

    MultilayerNetworkType t;

    auto net = std::make_unique<HomogeneousMultilayerNetwork>(
                   name,
                   t,
                   std::move(vs),
                   std::move(ls),
                   std::move(es)
               );


    //net->register_observer(std::move(obs3));

    // register an observer to check that new edges have end-vertices in the network


    return net;

}

}
}

