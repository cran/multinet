/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_OBJECTS_EDGE_H_
#define UU_NET_DATASTRUCTURES_OBJECTS_EDGE_H_

#include <string>
#include <memory>
#include <iostream>
#include "net/datastructures/objects/GenericEdge.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeDir.h"

namespace uu {
namespace net {

/**
 * An edge between two vertices.
 */

using Edge = GenericEdge<Vertex>;

}
}

#endif
