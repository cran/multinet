/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_CREATION_STANDARDGRAPHS_H_
#define UU_NET_CREATION_STANDARDGRAPHS_H_

namespace uu {
namespace net {


/**
 * Returns a graph with n new vertices and no edges.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
null_graph(
    int n
);

/**
 * Returns a graph with the input vertices and no edges.
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of std::shared_ptr<Vertex>'s.
 * The range used is [first,last).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G, typename ForwardIterator>
std::shared_ptr<G>
null_graph(
    ForwardIterator first,
    ForwardIterator last
);

/**
 * Returns a graph K_n with n new vertices, all adjacent to each other.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
complete_graph(
    int n
);

/**
 * Returns a bipartite graph K_{n1,n2} with two partite sets V1 and V2
 * where all vertices in V1 all adjacent to all vertices in V2.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
complete_bipartite_graph(
    int n1,
    int n2
);


/**
 * Returns a graph P_n with n new vertices with edges forming a path.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
path_graph(
    int n
);

/**
 * Returns a graph C_n with n new vertices with edges forming a circle.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
cycle_graph(
    int n
);


/**
 * Returns a graph W_n with n new vertices made of a C_{n-1} cycle graph plus
 * a vertex adjacent to all the other n-1 vertices.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::shared_ptr<G>
wheel_graph(
    int n
);


} // namespace net
} // namespace uu

#endif
