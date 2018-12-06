/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_XNET_DATASTRUCTURE_GRAPHS_TEXTGRAPH_H_
#define UU_XNET_DATASTRUCTURE_GRAPHS_TEXTGRAPH_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "xnet/datastructures/stores/MessageStore.h"
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

using TextGraph =
    Graph<
    MessageStore,
    SimpleEdgeStore
    >;

/**
 * Creates a graph with directed or undirected simple edges and with or without loops.
 */
std::unique_ptr<TextGraph>
create_text_graph(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false);

}
}

#endif
