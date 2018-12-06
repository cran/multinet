/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_OBJECTS_EDGEMODE_H_
#define UU_NET_DATASTRUCTURES_OBJECTS_EDGEMODE_H_

namespace uu {
namespace net {

/**
 * Selection mode, for directed edges.
 * E.g., to compute the IN-degree or OUT-degree of a node.
 */
enum class EdgeMode
{
    INOUT,
    IN,
    OUT
};

}
}

#endif
