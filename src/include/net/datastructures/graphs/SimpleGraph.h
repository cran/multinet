/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURE_GRAPHS_SIMPLEGRAPH_H_
#define UU_NET_DATASTRUCTURE_GRAPHS_SIMPLEGRAPH_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/SimpleEdgeStore.h"

namespace uu {
namespace net {

/**
 * A simple graph is an undirected graph with at most one edge between each pair of vertices,
 * no loops and no attributes.
 * In this library that is the default setting for simple graphs, but we can also have directed
 * edges and loops if specified in the creation function.
 */
using SimpleGraph =
    Graph<
    VertexStore,
    SimpleEdgeStore
    >;

/**
 * Creates a graph with directed or undirected simple edges and with or without loops.
 */
std::unique_ptr<SimpleGraph>
create_simple_graph(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false);

}
}

#endif
