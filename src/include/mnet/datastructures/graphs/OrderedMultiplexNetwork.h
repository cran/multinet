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
#include "mnet/datastructures/stores/VertexOverlappingOrderedLayerStore.h"

namespace uu {
namespace net {

class
    OrderedMultiplexNetwork
    : public MultilayerNetwork<
      VertexStore,
      VertexOverlappingOrderedLayerStore<SimpleGraph>,
      EmptyEdgeStore
      >
{
    typedef MultilayerNetwork<
    VertexStore,
    VertexOverlappingOrderedLayerStore<SimpleGraph>,
    EmptyEdgeStore
    > super;

  public:

    //using super::super;

    OrderedMultiplexNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<VertexStore> v,
        std::unique_ptr<VertexOverlappingOrderedLayerStore<SimpleGraph>> l,
        std::unique_ptr<EmptyEdgeStore> e
    );

    std::string
    summary(
    ) const;

};

/**
 * Creates a multiplex network.
 */
std::unique_ptr<OrderedMultiplexNetwork>
create_ordered_multiplex_network(
    const std::string& name
);

}
}

#endif
