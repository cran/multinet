/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_XNET_DATASTRUCTURES_STORES_MESSAGESTORE_H_
#define UU_XNET_DATASTRUCTURES_STORES_MESSAGESTORE_H_

#include "net/datastructures/stores/AttrVertexStore.hpp"
#include "objects/Vertex.hpp"
#include "core/attributes/Text.hpp"

namespace uu {
namespace net {

class MessageStore :
    public AttrVertexStore
{
    typedef AttrVertexStore super;
    
  public:
    
    MessageStore();
    
    std::string
    get_msg(
             const Vertex* v
             ) const;

    
    void
    set_msg(
            const Vertex* v,
            const std::string& msg
            );
    
};

}
}

#endif
