/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_XNET_DATASTRUCTURES_STORES_MESSAGESTORE_H_
#define UU_XNET_DATASTRUCTURES_STORES_MESSAGESTORE_H_

#include "net/datastructures/stores/AttributedVertexStore.h"
#include "xnet/datastructures/stores/Texts.h"
#include "net/datastructures/objects/Vertex.h"

namespace uu {
namespace net {

class MessageStore :
    public AttributedVertexStore<Attributes<Vertex, Texts<Vertex>>>
{
    typedef AttributedVertexStore<Attributes<Vertex, Texts<Vertex>>> super;
  public:
    MessageStore();
};

}
}

#endif
