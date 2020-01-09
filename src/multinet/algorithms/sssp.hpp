/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_ALGORITHMS_SSSP_H_
#define UU_NET_ALGORITHMS_SSSP_H_

#include <unordered_set>
#include <queue>
#include "core/exceptions/assert_not_null.hpp"
#include "measures/basic.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

/**
 * Returns the shortest path length from an input vertex to all other vertices,
 * where the length is expressed as the number of edges in the path.
 */
template<typename G>
std::vector<int>
single_source_path_length(
    const G* g,
    const Vertex* v,
    EdgeMode mode = EdgeMode::OUT
);



template<typename G>
std::vector<int>
single_source_path_length(
    const G* g,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(g, "single_source_shortest_pa.hpp", "g");
    core::assert_not_null(v, "single_source_shortest_pa.hpp", "v");

    std::vector<int> path_length(order(g), -1);

    int vertex_position = g->vertices()->index_of(v);
    path_length.at(vertex_position) = 0;

    std::queue<const Vertex*> queue;
    std::unordered_set<const Vertex*> processed;

    queue.push(v);
    processed.insert(v);

    while (queue.size() > 0)
    {
        const Vertex* current_vertex = queue.front();
        queue.pop();

        vertex_position = g->vertices()->index_of(current_vertex);
        int current_vertex_distance = path_length.at(vertex_position);

        for (auto n: *g->edges()->neighbors(current_vertex, mode))
        {
            if (processed.find(n) == processed.end())
            {
                queue.push(n);
                processed.insert(n);
                vertex_position = g->vertices()->index_of(n);
                path_length.at(vertex_position) = current_vertex_distance+1;
            }
        }
    }

    return path_length;
}


}
}

#endif