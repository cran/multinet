/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_OPERATIONS_CONTRACTION_H_
#define UU_NET_OPERATIONS_CONTRACTION_H_

namespace uu {
namespace net {

/**
 * Removes the two end vertices of the input edge and replaces
 * them with a new single vertex.
 *
 * @todo: decide how to handle multiedges created through the contractions
 *
 * e must be an edge in G.
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
void
edge_contraction(
    const std::shared_ptr<G>& g,
    const std::shared_ptr<const Edge>& e
);


} // namespace net
} // namespace uu

#endif
