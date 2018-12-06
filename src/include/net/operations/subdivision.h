/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_OPERATIONS_SUBDIVISION_H_
#define UU_NET_OPERATIONS_SUBDIVISION_H_

namespace uu {
namespace net {

/**
 * Adds a new vertex to the graph subdividing the input edge.
 *
 * e must be an edge in E(g).
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
void
edge_subdivision(
    const std::shared_ptr<G>& g,
    const std::shared_ptr<const Edge>& e
);


} // namespace net
} // namespace uu

#endif
