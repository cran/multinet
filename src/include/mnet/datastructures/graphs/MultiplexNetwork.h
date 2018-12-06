/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_MULTIPLEXNETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_MULTIPLEXNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/SimpleGraph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/EmptyEdgeStore.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/VertexOverlappingLayerStore.h"

namespace uu {
namespace net {

/**
 * A multiplex networks contains actors, as they are called in Multilayer Social Networks
 * (here stored in the VertexStore), that can be inserted in its layers (where they are called
 * nodes in Multilayer Social Networks). There are no interlayer edges.
 *
using MultiplexNetwork =
    MultilayerNetwork<
    VertexStore,
    VertexOverlappingLayerStore<SimpleGraph>,
    EmptyEdgeStore
    >;*/

class
    MultiplexNetwork
    : public MultilayerNetwork<
      VertexStore,
      VertexOverlappingLayerStore<SimpleGraph>,
      EmptyEdgeStore
      >
{
    typedef MultilayerNetwork<
    VertexStore,
    VertexOverlappingLayerStore<SimpleGraph>,
    EmptyEdgeStore
    > super;

  public:

    typedef SimpleGraph layer_type;
    //using super::super;

    MultiplexNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<VertexStore> v,
        std::unique_ptr<VertexOverlappingLayerStore<SimpleGraph>> l,
        std::unique_ptr<EmptyEdgeStore> e
    );

    std::string
    summary(
    ) const;

};

/**
 * Creates a multiplex network.
 */
std::unique_ptr<MultiplexNetwork>
create_multiplex_network(
    const std::string& name
);

}
}

#endif
