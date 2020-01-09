/**
 * History:
 * - 2020.01.04 file created.
 */

#ifndef UU_NET_MEASURES_BETWEENNESS_H_
#define UU_NET_MEASURES_BETWEENNESS_H_

#include <unordered_map>

#include "betweenness.ipp" // definition

namespace uu {
namespace net {

/**
 * Exact computation of betweenness centrality (Freeman, 1977) for unweighted graphs
 * using Brandes' algorithm (2001).
 */
template<typename G>
std::unordered_map<const Vertex*, double>
betweenness(
    const G* g
);

}
}

#endif
