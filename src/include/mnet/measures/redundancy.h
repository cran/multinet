/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_MEASURES_REDUNDANCY_H_
#define MNET_MEASURES_REDUNDANCY_H_

#include <vector>
#include "core/exceptions/assert_not_null.h"
#include "core/utils/math.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"
#include "net/datastructures/containers/GenericObjectList.h"
#include "mnet/measures/degree.h"
#include "mnet/measures/neighborhood.h"

namespace uu {
namespace net {

template <typename M, typename LayerIterator>
double
connective_redundancy(
    const M* mnet,
    LayerIterator first,
    LayerIterator last,
    const Vertex* actor,
    EdgeMode mode
);


template <typename M, typename LayerIterator>
double
connective_redundancy(
    const M* mnet,
    LayerIterator first,
    LayerIterator last,
    const Vertex* actor,
    EdgeMode mode
)
{
    double d = degree(first,last,actor,mode);

    if (d==0)
    {
        return 0;
    }

    return 1 - neighbors(first,last,actor,mode).size()/d;
}

}
}

#endif
