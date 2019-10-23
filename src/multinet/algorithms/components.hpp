/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_ALGORITHMS_COMPONENTS_H_
#define UU_NET_ALGORITHMS_COMPONENTS_H_

#include <vector>
#include <unordered_set>
#include "core/exceptions/assert_not_null.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"
#include "measures/basic.hpp"
#include "algorithms/BFS.hpp"

namespace uu {
namespace net {

/**
 * Computes the components of a graph, treated as undirected.
 * @param g input graph
 * @return a vector of component ids, where the number at position i indicates the id
 * of the component of vertex g->vertices()->get_at(i)
 */
template<typename G>
std::vector<int>
components(
    const G* g
);


template<typename G>
std::vector<int>
components(
    const G* g
)
{
    core::assert_not_null(g, "components", "g");

    std::vector<int> membership(order(g), -1);

    int comp_id = 0;
    size_t vertex_pos = 0;

    for (auto v: *g->vertices())
    {
        if (membership.at(vertex_pos) != -1)
        {
            // do nothing: vertex already processed
        }
        else
        {
            // recursively traverse the whole component

            BFS<G> bfs(g, v, EdgeMode::INOUT);
            const Vertex* current_vertex;

            while ((current_vertex = bfs.get_next()) != nullptr)
            {
                size_t pos_current_vertex = g->vertices()->index_of(current_vertex);

                membership.at(pos_current_vertex) = comp_id;
            }

            comp_id++;
        }

        vertex_pos++;
    }

    return membership;
}


}
}

#endif
