/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_OPERATIONS_SUBGRAPH_H_
#define UU_NET_OPERATIONS_SUBGRAPH_H_

namespace uu {
namespace net {

/**
 * Returns the subgraph induced by a set of vertices.
 * @param g the input graph
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of std::shared_ptr<Vertex>'s.
 * The range used is [first,last).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G, typename ForwardIterator>
void
vertex_induced_subgraph(
    const G& g,
    ForwardIterator first,
    ForwardIterator last,
    G& subgraph
);


/**
 * Returns the subgraph induced by a set of vertices.
 * @param g the input graph
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of std::shared_ptr<Vertex>'s.
 * The range used is [first,last).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G, typename ForwardIterator>
std::shared_ptr<G>
vertex_induced_attributed_subgraph(
    const std::shared_ptr<const G>& g,
    ForwardIterator first,
    ForwardIterator last
);


/**
 * Returns the subgraph induced by a set of edges.
 * @param g the input graph
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of std::shared_ptr<Edge>'s.
 * The range used is [first,last).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G, typename ForwardIterator>
std::shared_ptr<G>
edge_induced_subgraph(
    const std::shared_ptr<const G>& g,
    ForwardIterator first,
    ForwardIterator last
);


/**
 * Returns the subgraph induced by a set of edges.
 * @param g the input graph
 * @param first, last forward iterators to the initial and final
 * positions of the sequence of std::shared_ptr<Edge>'s.
 * The range used is [first,last).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G, typename ForwardIterator>
std::shared_ptr<G>
edge_induced_attributed_subgraph(
    const std::shared_ptr<const G>& g,
    ForwardIterator first,
    ForwardIterator last
);



/**********************************************/

template<typename G, typename ForwardIterator>
void
vertex_induced_subgraph(
    const G& g,
    ForwardIterator first,
    ForwardIterator last,
    G& subgraph
)
{
    for (auto it=first; it!=last; ++it)
    {
        subgraph.vertices().add(*it);
    }

    // @todo
}

} // namespace net
} // namespace uu

#endif
