#ifndef UU_MEASURES_NEIGHBORHOOD_H_
#define UU_MEASURES_NEIGHBORHOOD_H_

#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

/**
 * Returns the vertices that are neighbors of the input on at least one of the input layers.
 * @param first, last iterators specifying a range of layers (first included, last not included)
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the sum of the degrees of v in the input layers
 */
template <typename LayerIterator>
GenericObjectList<Vertex>
neighbors(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode = EdgeMode::INOUT
);

/**
 * Returns the vertices that are neighbors of the input on at least one of the input layers.
 * @param first, last iterators specifying a range of layers (first included, last not included)
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the sum of the degrees of v in the input layers
 */
template <typename M, typename LayerIterator>
GenericObjectList<Vertex>
xneighbors(
    const M* net,
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode = EdgeMode::INOUT
);

}
}

#include "neighborhood.ipp"

#endif
