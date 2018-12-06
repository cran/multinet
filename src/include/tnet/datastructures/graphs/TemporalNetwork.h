/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_TNET_DATASTRUCTURE_GRAPHS_TEMPORALNETWORK_H_
#define UU_TNET_DATASTRUCTURE_GRAPHS_TEMPORALNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/AttributedSimpleEdgeStore.h"
#include "net/datastructures/stores/Attributes.h"
#include "tnet/datastructures/stores/TemporalMultiEdgeStore.h"

namespace uu {
namespace net {

class
    TemporalNetwork
    : public
      Graph<
      VertexStore,
      TemporalMultiEdgeStore
      >
{
  private:
    typedef Graph<
    VertexStore,
    TemporalMultiEdgeStore
    > super;

  public:

    TemporalNetwork(
        const std::string& name,
        GraphType t,
        std::unique_ptr<VertexStore> v,
        std::unique_ptr<TemporalMultiEdgeStore> e
    );

    std::string
    summary(
    ) const override;
};

std::unique_ptr<TemporalNetwork>
create_temporal_network(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false
);

}
}

#endif
