/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_MEASURES_REDUNDANCY_H_
#define MNET_MEASURES_REDUNDANCY_H_

#include <vector>
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/math.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"
#include "net/datastructures/containers/GenericObjectList.hpp"
#include "measures/degree.hpp"
#include "measures/neighborhood.hpp"

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
