/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_CREATION_STANDARDGRAPHS_H_
#define UU_NET_CREATION_STANDARDGRAPHS_H_

#include "standard_graphs.ipp"

namespace uu {
namespace net {


/**
 * When g is an empty graph, returns a graph with n new vertices and no edges.
 *
 * G must have a method vertices() returning a vertex store.
 */
template<typename G>
void
null_graph(
    G* g,
    size_t n
);

/**
 * When g is an empty graph, returns a graph with the input vertices and no edges.
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of const Vertex*'s.
 * The range used is [first,last).
 *
 * G must have a method vertices() returning a vertex store.
 */
template<typename G, typename ForwardIterator>
void
null_graph(
    G* g,
    ForwardIterator first,
    ForwardIterator last
);

/**
 * When g is an empty graph, returns a graph K_n with n new vertices, all adjacent to each other.
 * If the graph is directed, arcs in both directions are created for each pair of vertices.
 * No loops are created.
 */
template<typename G>
void
complete_graph(
    G* g,
    size_t n
);

/**
 * When g is an empty graph, returns a bipartite graph K_{n1,n2} with two partite sets V1 and V2
 * where all vertices in V1 are all adjacent to all vertices in V2.
 * If the graph is directed, arcs in both directions are created for each pair of vertices.
 */
template<typename G>
void
complete_bipartite_graph(
    G* g,
    size_t n1,
    size_t n2
);


/**
 * When g is an empty graph, returns a graph P_n with n new vertices with edges forming a path.
 */
template<typename G>
void
path_graph(
    G* g,
    size_t n
);

/**
 * When g is an empty graph, returns a graph C_n with n new vertices with edges forming a circle.
 */
template<typename G>
void
cycle_graph(
    G* g,
    size_t n
);


/**
 * When g is an empty graph, returns a graph W_n with n new vertices made of a C_{n-1}
 * cycle graph plus a vertex adjacent to all the other n-1 vertices.
 */
template<typename G>
void
wheel_graph(
    G* g,
    size_t n
);

}
}


#endif
