#ifndef UU_ALGORITHMS_DFS_H_
#define UU_ALGORITHMS_DFS_H_

#include <unordered_set>
#include <stack>
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

    /**
     * Iterator over the vertices in G reachable from v, including v,
     * in DFS order.
     */
    class
        iterator
    {
        typedef std::forward_iterator_tag iterator_category;

      public:

        /** Returns an iterator starting from a vertex */
        iterator(
            const G*,
            const Vertex*,
            EdgeMode
        );

        /** Returns an iterator with no vertices to process */
        iterator(
            const G*,
            EdgeMode
        );

        /** Return the vertex pointed by this iterator */
        const Vertex*
        operator*(
        ) const;

        /** Moves the iterator to the next vertex in DFS order */
        iterator
        operator++(
        );

        /** Moves the iterator to the next vertex in DFS order (postfix) */
        iterator
        operator++(
            int
        );

        /** Checks if this iterator equals the input one */
        bool
        operator==(
            const DFS::iterator& rhs
        ) const;

        /** Checks if this iterator differs from the input one */
        bool
        operator!=(
            const DFS::iterator& rhs
        ) const;

      private:

        /** DFS parameters */
        const G* g;
        EdgeMode mode;
        /** Vertices to be processed */
        std::stack<const Vertex*> stack;
        /** Vertices already processed */
        std::unordered_set<const Vertex*> processed;

    };

    /** Returns an iterator accessing the vertices in DFS order */
    DFS::iterator
    begin(
    ) const;

    DFS::iterator
    end(
    ) const;

  private:

    const G* g;
    const Vertex* v;
    EdgeMode mode;

};

}
}

#include "DFS.ipp"

#endif
