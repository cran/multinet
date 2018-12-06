/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include <memory>
#include "xnet/datastructures/stores/MessageStore.h"

namespace uu {
namespace net {



MessageStore::
MessageStore(
) :
    super(std::make_unique<Attributes<Vertex, Texts<Vertex>>>())
{
}

}
}
