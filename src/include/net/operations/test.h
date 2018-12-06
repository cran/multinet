/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_MEASURES_TEST_H_
#define UU_NET_MEASURES_TEST_H_

namespace uu {
namespace net {

/**
 * Returns true is g is bipartite.
 * A bipartite graph is one for which its vertices can
 * be partitioned into two independent sets.
 * An independent set is a set of vertices V' in V where
 * for all a, b in V' a and b are not adjacent.
 * Complexity: O(n+m)
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
bool
is_bipartite(
    const std::shared_ptr<const G>  g
);

/**
 * Returns true is g1 and g2 are isomorphic.
 *
 * Complexity: non polynomial
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
bool
are_isomorphic(
    const std::shared_ptr<const G>  g1,
    const std::shared_ptr<const G>  g2
);

} // namespace net
} // namespace uu

#endif
