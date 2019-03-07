/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_SIMPLEEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_SIMPLEEDGESTORE_H_

#include "net/datastructures/stores/GenericSimpleEdgeStore.h"
#include "net/datastructures/objects/Edge.h"
#include "net/datastructures/objects/Vertex.h"

namespace uu {
namespace net {


class
    SimpleEdgeStore :
    public GenericSimpleEdgeStore<Edge, Vertex>
{
  private:
    typedef GenericSimpleEdgeStore<Edge, Vertex> super;

  public:

    using super::super;

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
    );


};

}
}

#endif
