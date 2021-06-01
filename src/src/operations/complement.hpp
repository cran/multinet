#ifndef UU_OPERATIONS_COMPLEMENT_H_
#define UU_OPERATIONS_COMPLEMENT_H_

#include <memory>
#include <string>

namespace uu {
namespace net {

/**
 * Returns the complement G' of a graph G.
 * V(G') = V(G), and there is an edge for each pair of vertices that are not adjacent in the
 * input graph.
 *
 * G' does not have any attributes.
 *
 * @param g input graph
 * @param name name of the new graph
 */
template<typename G>
std::unique_ptr<G>
graph_complement(
    const G* g,
    const std::string& name = ""
);

}
}

#include "complement.ipp"

#endif
