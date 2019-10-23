/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDHOMOGENEOUSMULTILAYERNETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDHOMOGENEOUSMULTILAYERNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/stores/AttrVertexStore.hpp"
#include "mnet/datastructures/stores/UserDefinedAttrs.hpp"
#include "mnet/datastructures/stores/Attributed.hpp"
#include "mnet/datastructures/stores/Attributes.hpp"
#include "objects/Vertex.hpp"
#include "net/datastructures/stores2/GenericSimpleEdgeStore.hpp"
#include "networks/Network.hpp"
#include "mnet/datastructures/stores/AttributedDynamicInterlayerSimpleEdgeStore.hpp"
#include "mnet/datastructures/graphs/MultilayerNetwork.hpp"
#include "mnet/datastructures/stores/VertexOverlappingLayerStore.hpp"

namespace uu {
namespace net {

class
    AttributedHomogeneousMultilayerNetwork
    : public MultilayerNetwork<
      AttrVertexStore,
      VertexOverlappingLayerStore<Network>,
      AttributedDynamicInterlayerSimpleEdgeStore<Vertex,Network,Attributes<InterlayerEdge<Vertex,Network>, UserDefinedAttrs<InterlayerEdge<Vertex,Network>>>>
      >
{

    typedef MultilayerNetwork<
    AttrVertexStore,
    VertexOverlappingLayerStore<Network>,
    AttributedDynamicInterlayerSimpleEdgeStore<Vertex,Network,Attributes<InterlayerEdge<Vertex,Network>, UserDefinedAttrs<InterlayerEdge<Vertex,Network>>>>
    > super;

  public:

    typedef Network layer_type;
    typedef Vertex vertex_type;

    //using super::super;

    using super::interlayer_edges;

    AttributedHomogeneousMultilayerNetwork(
        const std::string& name,
        MultilayerNetworkType t,

        std::unique_ptr<AttrVertexStore> v,
        std::unique_ptr<VertexOverlappingLayerStore<Network>> l,
        std::unique_ptr<AttributedDynamicInterlayerSimpleEdgeStore<Vertex,Network,Attributes<InterlayerEdge<Vertex,Network>, UserDefinedAttrs<InterlayerEdge<Vertex,Network>>>>> e);

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
