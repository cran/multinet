/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_WNET_DATASTRUCTURE_GRAPHS_WEIGHTEDGRAPH_H_
#define UU_WNET_DATASTRUCTURE_GRAPHS_WEIGHTEDGRAPH_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/AttributedSimpleEdgeStore.h"
#include "net/datastructures/stores/Attributes.h"
#include "wnet/datastructures/stores/Weights.h"

namespace uu {
namespace net {

using WeightedGraph =
    Graph<
    VertexStore,
    AttributedSimpleEdgeStore<Attributes<Edge, Weights<Edge>>>
    >;

std::unique_ptr<WeightedGraph>
create_weighted_graph(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false
);

}
}

#endif
