/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDHOMOGENEOUSMULTILAYERNETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDHOMOGENEOUSMULTILAYERNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/stores/AttributedVertexStore.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/stores/GenericSimpleEdgeStore.h"
#include "net/datastructures/graphs/AttributedSimpleGraph.h"
#include "mnet/datastructures/stores/AttributedDynamicInterlayerSimpleEdgeStore.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/VertexOverlappingLayerStore.h"

namespace uu {
namespace net {

class
    AttributedHomogeneousMultilayerNetwork
    : public MultilayerNetwork<
      AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
      VertexOverlappingLayerStore<AttributedSimpleGraph>,
      AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>>
      >
{

    typedef MultilayerNetwork<
    AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
                          VertexOverlappingLayerStore<AttributedSimpleGraph>,
                          AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>>
                          > super;

  public:

    typedef AttributedSimpleGraph layer_type;

    //using super::super;

    using super::interlayer_edges;

    AttributedHomogeneousMultilayerNetwork(
        const std::string& name,
        MultilayerNetworkType t,

        std::unique_ptr<AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>> v,
        std::unique_ptr<VertexOverlappingLayerStore<AttributedSimpleGraph>> l,
        std::unique_ptr<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,AttributedSimpleGraph,Attributes<InterlayerEdge<Vertex,AttributedSimpleGraph>, UserDefinedAttrs<InterlayerEdge<Vertex,AttributedSimpleGraph>>>>> e);

    std::string
    summary(
    ) const;

};

/**
 * Creates a multilayer network.
 */
std::shared_ptr<AttributedHomogeneousMultilayerNetwork>
create_shared_attributed_homogeneous_multilayer_network(
    const std::string& name
);

/**
 * Creates a multilayer network.
 */
std::unique_ptr<AttributedHomogeneousMultilayerNetwork>
create_attributed_homogeneous_multilayer_network(
    const std::string& name
);

}
}

#endif
