#ifndef UU_ALGORITHMS_BFS_H_
#define UU_ALGORITHMS_BFS_H_

#include <unordered_set>
#include <queue>
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

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

    /**
     * Iterator over the vertices in G reachable from v, including v,
     * in BFS order.
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

        /** Moves the iterator to the next vertex in BFS order */
        iterator
        operator++(
        );

        /** Moves the iterator to the next vertex in BFS order (postfix) */
        iterator
        operator++(
            int
        );

        /** Checks if this iterator equals the input one */
        bool
        operator==(
            const BFS::iterator& rhs
        ) const;

        /** Checks if this iterator differs from the input one */
        bool
        operator!=(
            const BFS::iterator& rhs
        ) const;

      private:

        /** BFS parameters */
        const G* g;
        EdgeMode mode;
        /** Vertices to be processed */
        std::queue<const Vertex*> queue;
        /** Vertices already processed */
        std::unordered_set<const Vertex*> processed;

    };

    /** Returns an iterator accessing the vertices in BFS order */
    BFS::iterator
    begin(
    ) const;

    BFS::iterator
    end(
    ) const;


  private:

    const G* g;
    const Vertex* v;
    EdgeMode mode;

};

}
}

#include "BFS.ipp"

#endif
