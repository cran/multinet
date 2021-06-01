#ifndef UU_MEASURES_MLDEGREE_H_
#define UU_MEASURES_MLDEGREE_H_

#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

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
size_t
degree(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode = EdgeMode::INOUT
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
    EdgeMode mode = EdgeMode::INOUT
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
    EdgeMode mode = EdgeMode::INOUT
);

}
}

#include "degree_ml.ipp"

#endif
