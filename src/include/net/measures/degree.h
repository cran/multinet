/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_MEASURES_DEGREE_H_
#define UU_NET_MEASURES_DEGREE_H_

#include <vector>
#include <algorithm>
#include "core/exceptions/assert_not_null.h"
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
maximum_degree(
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
minimum_degree(
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
std::vector<size_t>
degree_sequence(
    const G* g,
    const EdgeMode mode
);

/**
 * Returns the degree distribution of a graph.
 * @param g input graph
 * @param mode to select IN, OUT, or INOUT degree
 * @return a vector dd, where dd[i] is the number of vertices having degree i
 */
template<typename G>
std::vector<size_t>
degree_distribution(
    const G* g,
    const EdgeMode mode
);

/**
 * Returns the degree of a vertex.
 * @param g input graph
 * @param v input vertex
 * @param mode to select IN, OUT, or INOUT degree
 * @return the (mode-)degree of v in g
 */
template<typename G>
size_t
degree(
    const G* g,
    const Vertex* v,
    const EdgeMode mode
);


// DEFINITIONS


template<typename G>
size_t
maximum_degree(
    const G* g,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "maximum_degree", "g");
    size_t max = 0;
    size_t d;

    for (auto v: *g->vertices())
    {
        d=degree(g, v, mode);

        if (d > max)
        {
            max = d;
        }
    }

    return max;
}





template<typename G>
size_t
minimum_degree(
    const G* g,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "minimum_degree", "g");
    size_t min = 0;
    size_t d;
    bool first = true;

    for (auto v: *g->vertices())
    {
        d=degree(g, v, mode);

        if (first)
        {
            min = d;
            first = false;
        }

        else if (d < min)
        {
            min = d;
        }
    }

    return min;
}




template<typename G>
std::vector<size_t>
degree_sequence(
    const G* g,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "degree_sequence", "g");

    size_t order = g->vertices()->size();
    std::vector<size_t> res;
    res.reserve(order);

    size_t d;

    for (auto v: *g->vertices())
    {
        d=degree(g, v, mode);
        res.push_back(d);
    }

    std::sort(res.begin(), res.end());
    return res;
}




template<typename G>
std::vector<size_t>
degree_distribution(
    const G* g,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "degree_distribution", "g");
    core::Counter<size_t> dd;

    size_t max = 0;
    size_t d;

    for (auto v: *g->vertices())
    {
        d = degree(g, v, mode);
        dd.inc(d);

        if (d > max)
        {
            max = d;
        }
    }

    std::vector<size_t> res;
    res.reserve(max+1);

    for (d = 0; d<=max; d++)
    {
        res.push_back(dd.count(d));
    }

    return res;
}



template<typename G>
size_t
degree(
    const G* g,
    const Vertex* v,
    const EdgeMode mode
)
{
    core::assert_not_null(g, "degree", "g");
    core::assert_not_null(g, "degree", "v");
    return g->edges()->neighbors(v, mode)->size();
}


}
}

#endif
