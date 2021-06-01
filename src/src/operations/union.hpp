#ifndef UU_OPERATIONS_UNION_H_
#define UU_OPERATIONS_UNION_H_

#include <memory>

namespace uu {
namespace net {

/**
 * Computes the union of two graphs.
 *
 * The operation is only allowed if both graphs are directed or both are undirected.
 * Only vertices and edges are included in the new graph, not attributes.
 * Notice that new edges are created in the result graph: if e=(v1,v2) is an edge in an
 * input graph and e'=(v1,v2) is an edge in the result graph, e != e'.
 *
 * Complexity: O(N log(N) + M log(M)) where N is the sum of the two graphs'
 * orders and M is the sum of the two graphs' sizes
 *
 * @param g1 input graph
 * @param g2 input graph
 * @param name name of the new graph
 */
template<typename G>
std::unique_ptr<G>
graph_union(
    const G* g1,
    const G* g2,
    const std::string& name = ""
);

/**
 * Adds a graph to another.
 * Vertices are copied from the input to the result graph, and new edges are created in the
 * result graph between vertices which are adjacent in the input graph.
 *
 * @param g input graph
 * @param target the graph to which vertices and edges in g are added
 */
template<typename G>
void
graph_add(
    const G* g,
    G* target
);


/**
 * Adds a graph to another.
 * Vertices are copied from the input to the result graph, and new edges are created in the
 * result graph between vertices which are adjacent in the input graph.
 *
 * @param g input graph
 * @param target the graph to which vertices and edges in g are added
 */
template<typename G, typename W>
void
weighted_graph_add(
    const G* g,
    W* target);

/**
 * Stores the union of multiple graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present.
 *
 * @param begin iterator to a container of pointers to graphs
 * @param end iterator to a container of pointers to graphs
 * @param target the graph to which vertices and edges are added
 */
template<typename GraphIterator, typename W>
void
weighted_graph_union(
    GraphIterator begin,
    GraphIterator end,
    W* target);

/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present.
 *
 * @param g1 input graph
 * @param g2 input graph
 * @param target the graph to which vertices and edges are added
 */
template<typename G, typename W>
void
weighted_graph_union(
    const G* g1,
    const G* g2,
    W* target);


/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present
 *
 * @param g1, g2 input graphs
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::unique_ptr<G>
attributed_graph_union(
    const G* g1,
    const G* g2,
    G* target
);


}
}

#include "union.ipp"

#endif
