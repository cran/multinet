/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_VERTEXSTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_VERTEXSTORE_H_

#include <memory>
#include <unordered_map>
#include "core/datastructures/containers/LabeledSharedPtrSortedRandomSet.h"
#include "core/datastructures/observers/Observer.h"
#include "core/datastructures/observers/Subject.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/stores/GenericVertexStore.h"

namespace uu {
namespace net {

/**
 * A VertexStore allows to create, store, retrieve and erase a set of vertices.
 */
class
    VertexStore :
    public GenericVertexStore<Vertex>
{

};


}
}

#endif
