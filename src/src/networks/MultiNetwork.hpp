#ifndef UU_NETWORKS_MULTINETWORK_H_
#define UU_NETWORKS_MULTINETWORK_H_

#include <memory>
#include <string>
#include "olap/VCube.hpp"
#include "olap/MECube.hpp"

namespace uu {
namespace net {

/**
 * A MultiNetwork is an attributed graph allowing multiple edges between each pair of vertices.
 *
 * Vertex and edge attributes are local to the network, that is, the same vertex inside another
 * network will have different attributes.
 *
 * Depending on its parameters, a MultiNetwork can allow or disallow loops (default: allow) and
 * be directed or undirected (default: undirected). That is, a MultiNetwork by default corresponds
 * to a mathematical multigraph.
 */
class MultiNetwork
{

  public:

    typedef const Vertex* vertex_type;
    typedef const Edge* edge_type;
    typedef const Vertex* community_element_type;

    const std::string name;

    /**
     * Creates a MultiNetwork with directed or undirected multiedges and with or without loops.
     */
    MultiNetwork(
        const std::string& name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        LoopMode loops = LoopMode::ALLOWED
    );

    virtual
    ~MultiNetwork() {}

    /**
     * Returns a pointer to the network's vertices.
     */
    VCube*
    vertices(
    );

    /**
     * Returns a pointer to the network's (const) vertices.
     */
    const VCube*
    vertices(
    ) const;


    /**
     * Returns a pointer to the network's edges.
     */
    MECube*
    edges(
    );


    /**
     * Returns a pointer to the network's (const) edges.
     */
    const MECube*
    edges(
    ) const;


    /**
     * Checks if the edges in this network are directed.
     */
    virtual
    bool
    is_directed(
    ) const;


    /**
     * Checks if the network allows loops.
     */
    virtual
    bool
    allows_loops(
    ) const;

  private:

    std::unique_ptr<VCube> vertices_;
    std::unique_ptr<MECube> edges_;

};

}
}

#endif
