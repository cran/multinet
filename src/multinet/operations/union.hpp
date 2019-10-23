/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_OPERATIONS_UNION_H_
#define UU_NET_OPERATIONS_UNION_H_

#include <memory>
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

/**
 * Stores the union of two graphs into a third graph
 *
 * @param g1
 */
template<typename G>
void
graph_add(
    const G* g1,
    G* target
);


/**
 * Stores the union of two graphs into a third graph
 *
 * @param g1, g2 input graphs
 */
template<typename GraphIterator, typename G>
void
graph_union(
    GraphIterator begin,
    GraphIterator end,
    G* target
);


/**
 * Stores the union of two graphs into a third graph
 *
 * @param g1, g2 input graphs
 */
template<typename G>
void
graph_union(
    const G* g1,
    const G* g2,
    G* target
);



/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present.
 *
 * @param g1, g2 input graphs
 */
template<typename G, typename W>
void
weighted_graph_add(
    const G* g,
    W* target);

/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present.
 *
 * @param g1, g2 input graphs
 */
template<typename GraphIterator, typename W>
void
weighted_graph_union(
    GraphIterator begin,
    GraphIterator end,
    W* target);

/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present.
 *
 * @param g1, g2 input graphs
 */
template<typename G, typename W>
void
weighted_graph_union(
    const G* g1,
    const G* g2,
    W* target);


/**
 * Stores the union of two graphs into a third graph, assigning a weight to edges
 * to indicate in how many input graphs the edge was present
 *
 * @param g1, g2 input graphs
 *
 * @todo NOT IMPLEMENTED
 */
template<typename G>
std::unique_ptr<G>
attributed_graph_union(
    const G* g1,
    const G* g2,
    G* target
);


template<typename G>
void
graph_add(
    const G* g,
    G* target)
{

    core::assert_not_null(g, "graph_add", "g");
    core::assert_not_null(target, "graph_add", "target");


    for (auto vertex: *g->vertices())
    {
        target->vertices()->add(vertex);
    }


    for (auto edge: *g->edges())
    {
        target->edges()->add(edge->v1,edge->v2);
    }

    if (!g->is_directed() && target->is_directed())
    {
        for (auto edge: *g->edges())
        {
            target->edges()->add(edge->v2,edge->v1);
        }
    }
}


template<typename GraphIterator, typename G>
void
graph_union(
    GraphIterator begin,
    GraphIterator end,
    G* target
)
{
    core::assert_not_null(target, "graph_union", "target");

    for (auto g=begin; g!=end; ++g)
    {
        graph_add(*g, target);
    }
}

template<typename G>
void
graph_union(
    const G* g1,
    const G* g2,
    G* target)
{

    core::assert_not_null(g1, "graph_union", "g1");
    core::assert_not_null(g2, "graph_union", "g2");
    core::assert_not_null(target, "graph_union", "target");

    std::array<const G*, 2> graphs = {g1, g2};

    graph_union(graphs.begin(), graphs.end(), target);

}

template<typename G, typename W>
void
weigthed_graph_add(
    const G* g,
    W* target)
{

    core::assert_not_null(g, "weigthed_graph_add", "g");
    core::assert_not_null(target, "weigthed_graph_add", "target");


    for (auto vertex: *g->vertices())
    {
        target->vertices()->add(vertex);
    }


    for (auto edge: *g->edges())
    {
        auto new_edge = target->edges()->get(edge->v1,edge->v2);

        if (!new_edge)
        {
            new_edge = target->edges()->add(edge->v1,edge->v2);
            target->edges()->attr()->set_weight(new_edge,1.0);
        }

        else
        {
            double weight = target->edges()->attr()->get_weight(new_edge).value;
            target->edges()->attr()->set_weight(new_edge, weight+1.0);
        }
    }

    if (!g->is_directed() && target->is_directed())
    {
        for (auto edge: *g->edges())
        {
            auto new_edge = target->edges()->get(edge->v2,edge->v1);

            if (!new_edge)
            {
                new_edge = target->edges()->add(edge->v2,edge->v1);
                target->edges()->attr()->set_weight(new_edge,1.0);
            }

            else
            {
                double weight = target->edges()->attr()->get_weight(new_edge).value;
                target->edges()->attr()->set_weight(new_edge, weight+1.0);
            }
        }
    }

}



template<typename GraphIterator, typename G>
void
weighted_graph_union(
    GraphIterator begin,
    GraphIterator end,
    G* target,
    const std::string& weight_attribute_name
)
{
    core::assert_not_null(target, "graph_union", "target");

    for (auto g=begin; g!=end; ++g)
    {
        weigthed_graph_add(*g, target, weight_attribute_name);
    }
}

template<typename G, typename W>
void
weigthed_graph_add(
    const G* g,
    W* target,
    const std::string& weight_attribute_name
)
{

    core::assert_not_null(g, "weigthed_graph_add", "g");
    core::assert_not_null(target, "weigthed_graph_add", "target");


    for (auto vertex: *g->vertices())
    {
        target->vertices()->add(vertex);
    }


    for (auto edge: *g->edges())
    {
        auto new_edge = target->edges()->get(edge->v1,edge->v2);

        if (!new_edge)
        {
            new_edge = target->edges()->add(edge->v1,edge->v2);
            target->edges()->attr()->set_double(new_edge, weight_attribute_name,1.0);
        }

        else
        {
            double weight = target->edges()->attr()->get_double(new_edge, weight_attribute_name).value;
            target->edges()->attr()->set_double(new_edge, weight_attribute_name, weight+1.0);
        }
    }

    if (!g->is_directed() && target->is_directed())
    {
        for (auto edge: *g->edges())
        {
            auto new_edge = target->edges()->get(edge->v2,edge->v1);

            if (!new_edge)
            {
                new_edge = target->edges()->add(edge->v2,edge->v1);
                target->edges()->attr()->set_double(new_edge, weight_attribute_name, 1.0);
            }

            else
            {
                double weight = target->edges()->attr()->get_double(new_edge, weight_attribute_name).value;
                target->edges()->attr()->set_double(new_edge, weight_attribute_name, weight+1.0);
            }
        }
    }

}



}
}

#endif
