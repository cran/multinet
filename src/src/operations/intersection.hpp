#ifndef UU_OPERATIONS_INTERSECTION_H_
#define UU_OPERATIONS_INTERSECTION_H_

#include <memory>
#include <string>

namespace uu {
namespace net {

/**
 * Returns the intersection of two graphs.
 * Notice that new edges are created in the result graph: if e=(v1,v2) is an edge in an
 * input graph and e'=(v1,v2) is an edge in the result graph, e != e'.
 *
 * @param g1, g2 input graphs
 */
template<typename G>
std::unique_ptr<G>
graph_intersection(
    const G* g1,
    const G* g2,
    const std::string& name = ""
);


}
}

#include "intersection.ipp"

#endif
