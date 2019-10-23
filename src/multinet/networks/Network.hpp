/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NETWORKS_NETWORK_H_
#define UU_NETWORKS_NETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/Graph.hpp"
#include "net/datastructures/stores/AttrVertexStore.hpp"
#include "net/datastructures/stores/AttrSimpleEdgeStore.hpp"

namespace uu {
namespace net {

/**
 * A simple graph is an undirected graph with at most one edge between each pair of vertices,
 * no loops and no attributes.
 * In this library that is the default setting for simple graphs, but we can also have directed
 * edges and loops if specified in the creation function.
 */

class Network
{

  public:

    const std::string name;
    
    /**
     * Creates a graph with directed or undirected simple edges and with or without loops.
     */
    Network(
        const std::string& name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        bool allow_loops = false
    );

    /**
     * Returns a pointer to the graph's vertex store.
     */
    AttrVertexStore*
    vertices(
    );

    /**
     * Returns a pointer to the graph's (const) vertex store.
     */
    const AttrVertexStore*
    vertices(
    ) const;


    /**
     * Returns a pointer to the graph's edge store.
     */
    AttrSimpleEdgeStore*
    edges(
    );


    /**
     * Returns a pointer to the graph's (const) edge store.
     */
    const AttrSimpleEdgeStore*
    edges(
    ) const;


    /**
     * Checks if the edges in this graph are directed.
     */
    virtual
    bool
    is_directed(
    ) const;


    /**
     * Checks if the graph is weighted.
     */
    virtual
    bool
    is_weighted(
    ) const;

    /**
     * Checks if the graph is probabilistic.
     */
    virtual
    bool
    is_probabilistic(
    ) const;


    /**
     * Checks if the graph has temporal information on its edges.
     */
    virtual
    bool
    is_temporal(
    ) const;


    /**
     * Checks if the graph allows users to define their own generic attributes.
     */
    virtual
    bool
    is_attributed(
    ) const;


    /**
     * Checks if the graph allows multi-edges. If false, only simple edges are allowed.
     */
    virtual
    bool
    allows_multi_edges(
    ) const;


    /**
     * Checks if the graph allows loops.
     */
    virtual
    bool
    allows_loops(
    ) const;

    /**
     * Returns a string providing a summary of the graph structure.
     */
    virtual
    std::string
    summary(
    ) const;

  private:

    std::unique_ptr<Graph<AttrVertexStore, AttrSimpleEdgeStore>> data_;

};

}
}

#endif
