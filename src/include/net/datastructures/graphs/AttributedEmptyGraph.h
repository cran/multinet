/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURE_GRAPHS_EMPTYATTRIBUTEDGRAPH_H_
#define UU_NET_DATASTRUCTURE_GRAPHS_EMPTYATTRIBUTEDGRAPH_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/AttributedVertexStore.h"
#include "net/datastructures/stores/Attributes.h"
#include "net/datastructures/stores/UserDefinedAttrs.h"
#include "net/datastructures/stores/EmptyEdgeStore.h"

namespace uu {
namespace net {

/**
 * A simple graph is an undirected graph with at most one edge between each pair of vertices,
 * no loops and no attributes.
 * In this library that is the default setting for simple graphs, but we can also have directed
 * edges and loops if specified in the creation function.
 */
using AttributedEmptyGraph =
    Graph<
    AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
    EmptyEdgeStore
    >;

/**
 * Creates a graph with directed or undirected simple edges and with or without loops.
 */
std::unique_ptr<AttributedEmptyGraph>
create_attributed_empty_graph(
    const std::string& name
);

}
}

#endif
