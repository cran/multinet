/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_EMPTYEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_EMPTYEDGESTORE_H_


#include "net/datastructures/objects/Edge.h"
#include "net/datastructures/objects/Vertex.h"
#include "core/datastructures/observers/Subject.h"

namespace uu {
namespace net {

class EmptyEdgeStore :
    public core::Subject<const Edge>
{

  public:

    EmptyEdgeStore() {};

    bool
    is_directed(
    ) const;

    void
    erase(
        const Vertex* v
    );

    std::string
    summary(
    ) const;

};

}
}

#endif
