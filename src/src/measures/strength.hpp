#ifndef UU_MEASURES_STRENGTH_H_
#define UU_MEASURES_STRENGTH_H_

#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

/**
 * Returns the maximum strength of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return the degree of the vertex with the maximum degree in g
 */
template<typename G>
size_t
maximum_strength(
    const G* g,
    const EdgeMode mode = EdgeMode::INOUT
);


/**
 * Returns the minimum strength of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return the degree of the vertex with the minimum degree in g
 */
template<typename G>
size_t
minimum_strength(
    const G* g,
    const EdgeMode mode = EdgeMode::INOUT
);

/**
 * Returns the strength sequence of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return a vector of length n with the ordered sequence of vertex degrees in g
 */
template<typename G>
std::vector<double>
strength_sequence(
    const G* g,
    const EdgeMode mode = EdgeMode::INOUT
);

/**
 * Returns the average strength of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return the average strength of vertices in g
 */
template<typename G>
double
average_strength(
    const G* g,
    const EdgeMode mode = EdgeMode::INOUT
);

/**
 * Returns the strength of a vertex.
 * @param g input graph
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the (mode-)degree of v in g
 */
template<typename G>
double
strength(
    const G* g,
    const Vertex* v,
    const EdgeMode mode = EdgeMode::INOUT
);

}
}

#include "strength.ipp"

#endif
