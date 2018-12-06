/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_MEASURES_NEIGHBORHOOD_H_
#define MNET_MEASURES_NEIGHBORHOOD_H_

#include <vector>
#include "core/exceptions/assert_not_null.h"
#include "core/utils/math.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"
#include "net/datastructures/containers/GenericObjectList.h"
#include "net/measures/degree.h"

namespace uu {
namespace net {

// TO BE COMPLETED

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
    EdgeMode mode
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
    EdgeMode mode
);


// DEFINITIONS

template <typename LayerIterator>
GenericObjectList<Vertex>
neighbors(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "neighbors", "v");

    GenericObjectList<Vertex> res;

    for (auto layer=first; layer!=last; ++layer)
    {
        for (auto vertex: *(*layer)->edges()->neighbors(v, mode))
        {
            res.add(vertex);
        }
    }

    return res;
}


template <typename M, typename LayerIterator>
GenericObjectList<Vertex>
xneighbors(
    const M* net,
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "xneighbors", "v");

    GenericObjectList<Vertex> res;
    std::unordered_set<std::string> layers;

    for (auto layer=first; layer!=last; ++layer)
    {
        layers.insert((*layer)->name);

        for (auto vertex: *(*layer)->edges()->neighbors(v, mode))
        {
            res.add(vertex);
        }
    }

    for (auto layer: *net->layers())
    {
        if (layers.find(layer->name) != layers.end())
        {
            continue;
        }

        for (auto vertex: *layer->edges()->neighbors(v, mode))
        {
            res.erase(vertex);
        }
    }

    return res;
}



}
}

#endif
