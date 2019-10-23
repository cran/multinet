/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_ALGORITHMS_DFS_H_
#define UU_NET_ALGORITHMS_DFS_H_

#include <unordered_set>
#include <stack>
#include "core/exceptions/assert_not_null.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

/**
 * Performs a depth-first search over a graph.
 */
template<typename G>
class DFS
{
  public:

    DFS(
        const G* g,
        const Vertex* v,
        EdgeMode mode
    );

    const Vertex*
    get_next();

  private:

    const G* g;
    EdgeMode mode;
    std::stack<const Vertex*> stack;
    std::unordered_set<const Vertex*> processed;

};



template<typename G>
DFS<G>::
DFS(
    const G* g,
    const Vertex* v,
    EdgeMode mode
) : g(g), mode(mode)
{
    core::assert_not_null(g, "BFS", "g");
    core::assert_not_null(v, "BFS", "v");

    stack.push(v);
    processed.insert(v);

}


template<typename G>
const Vertex*
DFS<G>::
get_next(
)
{
    if (stack.size() == 0)
    {
        return nullptr;
    }

    const Vertex* res = stack.top();
    stack.pop();

    for (auto n: *g->edges()->neighbors(res, mode))
    {
        if (processed.find(n) == processed.end())
        {
            stack.push(n);
            processed.insert(n);
        }
    }

    return res;
}


}
}

#endif
