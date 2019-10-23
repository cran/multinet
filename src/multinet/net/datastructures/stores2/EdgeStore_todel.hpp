/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_EDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_EDGESTORE_H_

#include "net/datastructures/stores2/GenericEdgeStore.hpp"
#include "objects/Edge.hpp"
#include "objects/Vertex.hpp"

namespace uu {
namespace net {

/**
 * An Edge Store is a basic class to store edges. It provides functionality shared among
 * different types of edge stores.
 *
 * Once an edge store has been created with a given directionality (DIRECTED or UNDIRECTED),
 * only edges with the same directionality can be added to the store.
 */
class EdgeStore :
    public GenericEdgeStore<Edge, Vertex>
{
  private:
    typedef GenericEdgeStore<Edge, Vertex> super;

  protected:

    using super::super;

  public:

    using super::add;

    /**
     * Adds a new edge.
     * Multiple edges between the same pair of vertices are not allowed.
     * @param vertex1 a pointer to the "from" vertex if directed, or to one end of
     * the edge if undirected.
     * @param vertex2 a pointer to the "to" vertex if directed, or one end of the
     * edge if undirected.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     **/
    virtual
    const Edge *
    add(
        const Vertex* vertex1,
        const Vertex* vertex2
    ) = 0;

};


}
}

#endif
