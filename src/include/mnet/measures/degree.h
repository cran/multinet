/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_MEASURES_DEGREE_H_
#define MNET_MEASURES_DEGREE_H_

#include <vector>
#include "core/exceptions/assert_not_null.h"
#include "core/utils/math.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"
#include "net/measures/degree.h"

namespace uu {
namespace net {

/**
 * Returns the sum of the intralayer degrees of a vertex.
 * @param first, last iterators specifying a range of layers (first included, last not included)
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the sum of the degrees of v in the input layers
 */
template <typename LayerIterator>
int
degree(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
);

/**
 * Returns the average intralayer degree of a vertex.
 * @param first, last iterators specifying a range of layers (first included, last not included)
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the mean of the degrees of v in the input layers
 */
template <typename LayerIterator>
double
degree_mean(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
);

/**
 * Returns the standard deviation of the intralayer degrees of a vertex.
 * @param first, last iterators specifying a range of layers (first included, last not included)
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the standard deviation of the degrees of v in the input layers
 */
template <typename LayerIterator>
double
degree_deviation(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
);

// DEFINITIONS


template <typename LayerIterator>
int
degree(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree", "v");

    int d = 0;

    for (auto layer=first; layer!=last; ++layer)
    {
        d += degree(*layer, v, mode);
    }

    return d;
}


template <typename LayerIterator>
double
degree_mean(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree_mean", "v");

    std::vector<double> degrees;

    for (auto layer=first; layer!=last; ++layer)
    {
        degrees.push_back((double)degree(*layer, v, mode));
    }

    return core::mean(degrees.begin(), degrees.end());
}


template <typename LayerIterator>
double
degree_deviation(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree_deviation", "v");

    std::vector<double> degrees;

    for (auto layer=first; layer!=last; ++layer)
    {
        degrees.push_back((double)degree(*layer, v, mode));
    }

    return core::stdev(degrees.begin(), degrees.end());
}


}
}

#endif
