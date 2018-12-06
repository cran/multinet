/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDMULTIPLEXNETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDMULTIPLEXNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/AttributedSimpleGraph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/EmptyEdgeStore.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/VertexOverlappingLayerStore.h"

namespace uu {
namespace net {

class
    AttributedMultiplexNetwork
    : public MultilayerNetwork<
      AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
      VertexOverlappingLayerStore<AttributedSimpleGraph>,
      EmptyEdgeStore
      >
{
    typedef MultilayerNetwork<
    AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
                          VertexOverlappingLayerStore<AttributedSimpleGraph>,
                          EmptyEdgeStore
                          > super;

  public:

    //using super::super;

    AttributedMultiplexNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>> v,
        std::unique_ptr<VertexOverlappingLayerStore<AttributedSimpleGraph>> l,
        std::unique_ptr<EmptyEdgeStore> e
    );

    std::string
    summary(
    ) const;

};

/**
 * Creates an attributed multiplex network.
 */
std::unique_ptr<AttributedMultiplexNetwork>
create_attributed_multiplex_network(
    const std::string& name
);


/**
 * This is mainly intended for the integration with R, where unique_ptrs are not compatible with
 * how Rcpp is implemented.
 */
std::shared_ptr<AttributedMultiplexNetwork>
create_shared_attributed_multiplex_network(
    const std::string& name
);

}
}

#endif
