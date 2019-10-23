/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/datastructures/stores2/EmptyEdgeStore_todel.hpp"

namespace uu {
namespace net {


bool
EmptyEdgeStore::
is_directed(
) const
{
    return false;
}

void
EmptyEdgeStore::
erase(
    const Vertex* v
)
{

}

std::string
EmptyEdgeStore::
summary(
) const
{
    return "0 edges";
}
}
}
