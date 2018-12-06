/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_HOMOGENEOUSMULTILAYERNETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_HOMOGENEOUSMULTILAYERNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/stores/GenericSimpleEdgeStore.h"
#include "net/datastructures/graphs/SimpleGraph.h"
#include "mnet/datastructures/stores/DynamicInterlayerSimpleEdgeStore.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/VertexOverlappingLayerStore.h"

namespace uu {
namespace net {

class
    HomogeneousMultilayerNetwork
    : public MultilayerNetwork<
      VertexStore,
      VertexOverlappingLayerStore<SimpleGraph>,
      DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>
      >
{
    typedef MultilayerNetwork<
    VertexStore,
    VertexOverlappingLayerStore<SimpleGraph>,
    DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>
    > super;

  public:

    //using super::super;

    using super::interlayer_edges;

    HomogeneousMultilayerNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<VertexStore> v,
        std::unique_ptr<VertexOverlappingLayerStore<SimpleGraph>> l,
        std::unique_ptr<DynamicInterlayerSimpleEdgeStore<Vertex,SimpleGraph>> e
    );

    std::string
    summary(
    ) const;

};

/**
 * Creates a multilayer network.
 */
std::unique_ptr<HomogeneousMultilayerNetwork>
create_homogeneous_multilayer_network(
    const std::string& name
);

}
}

#endif
