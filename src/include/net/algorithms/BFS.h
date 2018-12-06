/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_ALGORITHMS_BFS_H_
#define UU_NET_ALGORITHMS_BFS_H_

#include <unordered_set>
#include <queue>
#include "core/exceptions/assert_not_null.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"

namespace uu {
namespace net {

/**
 * Performs a breadth-first search over a graph.
 */
template<typename G>
class BFS
{
  public:

    BFS(
        const G* g,
        const Vertex* v,
        EdgeMode mode
    );

    const Vertex*
    get_next();

  private:

    const G* g;
    EdgeMode mode;
    std::queue<const Vertex*> queue;
    std::unordered_set<const Vertex*> processed;

};



template<typename G>
BFS<G>::
BFS(
    const G* g,
    const Vertex* v,
    EdgeMode mode
) : g(g), mode(mode)
{
    assert_not_null(g, "BFS", "g");
    assert_not_null(v, "BFS", "v");

    queue.push(v);
    processed.insert(v);

}


template<typename G>
const Vertex*
BFS<G>::
get_next(
)
{
    if (queue.size() == 0)
    {
        return nullptr;
    }

    const Vertex* res = queue.front();
    queue.pop();

    for (auto n: *g->edges()->neighbors(res, mode))
    {
        if (processed.find(n) == processed.end())
        {
            queue.push(n);
            processed.insert(n);
        }
    }

    return res;
}


}
}

#endif
