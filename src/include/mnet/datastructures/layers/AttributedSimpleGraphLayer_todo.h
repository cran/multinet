/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDSIMPLEGRAPHLAYER_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDSIMPLEGRAPHLAYER_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/stores/AttributedVertexStore.h"
#include "net/datastructures/stores/AttributedSimpleEdgeStore.h"
#include "net/datastructures/stores/Attributes.h"
#include "net/datastructures/stores/UserDefinedAttrs.h"

namespace uu {
namespace net {

/**
 * A simple graph is an undirected graph with at most one edge between each pair of vertices,
 * no loops and no attributes.
 * In this library that is the default setting for simple graphs, but we can also have directed
 * edges and loops if specified in the creation function.
 */

using AttributedSimpleGraphLayer =
    Graph<
    AttributedVertexStore<Attributes<Vertex, UserDefinedAttrs<Vertex>>>,
    AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>
    >;

/**
 * Creates a graph with directed or undirected simple edges and with or without loops.
 */
std::unique_ptr<AttributedSimpleGraph>
create_attributed_simple_graph(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false);

}
}

#endif
