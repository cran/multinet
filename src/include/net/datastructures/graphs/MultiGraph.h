/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURE_GRAPHS_WEIGHTEDGRAPH_H_
#define UU_NET_DATASTRUCTURE_GRAPHS_WEIGHTEDGRAPH_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/MultiEdgeStore.h"

namespace uu {
namespace net {

using MultiGraph =
    Graph<
    VertexStore,
    MultiEdgeStore
    >;

std::unique_ptr<MultiGraph>
create_multi_graph(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false
);

}
}

#endif
