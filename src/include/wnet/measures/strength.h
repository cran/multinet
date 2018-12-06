/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_WNET_MEASURES_STRENGTH_H_
#define UU_WNET_MEASURES_STRENGTH_H_

#include <vector>
#include <algorithm>
#include "core/exceptions/assert_not_null.h"
#include "core/exceptions/WrongParameterException.h"
#include "core/utils/Counter.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"

namespace uu {
namespace net {

/**
 * Returns the maximum degree (\Delta) of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return the degree of the vertex with the maximum degree in g
 */
template<typename G>
size_t
maximum_strength(
    const G* g,
    const EdgeMode mode
);


/**
 * Returns the minimum degree (\delta) of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return the degree of the vertex with the minimum degree in g
 */
template<typename G>
size_t
minimum_strength(
    const G* g,
    const EdgeMode mode
);

/**
 * Returns the degree sequence of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return a vector of length n with the ordered sequence of vertex degrees in g
 */
template<typename G>
std::vector<double>
strength_sequence(
    const G* g,
    const EdgeMode mode
);

/**
 * Returns the degree distribution of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return a vector dd, where dd[i] is the number of vertices having degree i
 *
template<typename G>
std::vector<size_t>
degree_distribution(
    const G* g,
    const EdgeMode mode
);*/

/**
 * Returns the degree of a vertex.
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
    const EdgeMode mode
);


/** DEFINITIONS */


template<typename G>
double
strength(
    const G* g,
    const Vertex* v,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "degree", "g");
    core::assert_not_null(g, "degree", "v");

    if (!g->is_weighted())
    {
        throw core::WrongParameterException("strength can only be computed on weighted graphs");
    }

    double s = 0;

    for (auto edge: *g->edges()->incident(v, mode))
    {
        auto w = g->edges()->attr()->get_weight(edge);

        if (!w.null)
        {
            s += w.value;
        }
    }

    return s;
}


}
}

#endif
