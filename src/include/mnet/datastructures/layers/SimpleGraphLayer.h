/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_SIMPLEGRAPHLAYER_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_SIMPLEGRAPHLAYER_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.h"
#include "net/datastructures/graphs/SimpleGraph.h"
#include "net/datastructures/stores/GenericVertexStore.h"
#include "net/datastructures/stores/GenericSimpleEdgeStore.h"
#include "mnet/datastructures/objects/IntralayerVertex.h"
#include "mnet/datastructures/objects/InterlayerEdge.h"

namespace uu {
namespace net {

/**
 * A simple graph is an undirected graph with at most one edge between each pair of vertices,
 * no loops and no attributes.
 * In this library that is the default setting for simple graphs, but we can also have directed
 * edges and loops if specified in the creation function.
 */
class
    SimpleGraphLayer :
    public
    Graph<
    GenericVertexStore<IntralayerVertex<Vertex,SimpleGraph>>,
            GenericSimpleEdgeStore<InterlayerEdge<Vertex,SimpleGraph>, IntralayerVertex<Vertex,SimpleGraph>>
            >
{
  public:
    typedef IntralayerVertex<Vertex,SimpleGraph> V;
    typedef InterlayerEdge<Vertex,SimpleGraph> E;
    typedef GenericVertexStore<V> VS;
    typedef GenericSimpleEdgeStore<E, V> ES;
    typedef Graph<VS,ES> super;

    SimpleGraphLayer(
        const std::string& name,
        GraphType t,
        std::unique_ptr<VS> vs,
        std::unique_ptr<ES> es
    );
};

/**
 * Creates a graph with directed or undirected simple edges and with or without loops.
 */
std::unique_ptr<SimpleGraphLayer>
create_simple_graph_layer(
    const std::string& name,
    EdgeDir dir = EdgeDir::UNDIRECTED,
    bool allow_loops = false);

}
}

#endif
