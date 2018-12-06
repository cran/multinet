/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/datastructures/stores/SimpleEdgeStore.h"

namespace uu {
namespace net {


const Edge *
SimpleEdgeStore::
add(
    const Vertex* vertex1,
    const Vertex* vertex2
)
{
    if (!get(vertex1,vertex2))
    {
        // Edge::create will also take care of checking that the pointers are not null
        std::shared_ptr<const Edge> e = Edge::create(vertex1, vertex2, edge_directionality);

        return add(e);
    }

    else
    {
        return nullptr;
    }
}


}
}
