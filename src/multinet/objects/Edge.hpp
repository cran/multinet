/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_OBJECTS_EDGE_H_
#define UU_NET_DATASTRUCTURES_OBJECTS_EDGE_H_

#include <string>
#include <memory>
#include <iostream>
#include "objects/GenericEdge.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeDir.hpp"

namespace uu {
namespace net {

/**
 * An edge between two vertices.
 */

using Edge = GenericEdge<Vertex>;

}
}

#endif
