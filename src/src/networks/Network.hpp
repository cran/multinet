#ifndef UU_NETWORKS_NETWORK2_H_
#define UU_NETWORKS_NETWORK2_H_

#include <memory>
#include <string>
#include "olap/VCube.hpp"
#include "olap/ECube.hpp"

namespace uu {
namespace net {

/**
 * A Network is an attributed graph with at most one edge between each pair of vertices.
 *
 * Vertex and edge attributes are local to the network, that is, the same vertex inside another
 * network will have different attributes.
 * Depending on its parameters, a Network can allow or disallow loops (default: allowed) and
 * be directed or undirected (default: undirected).
 */
class Network
{

  public:

    typedef const Vertex* vertex_type;
    typedef const Edge* edge_type;
    typedef const Vertex* community_element_type;

    const std::string name;

    /**
     * Creates a Network with directed or undirected simple edges and allowing or not loops.
     */
    Network(
        const std::string& name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        LoopMode loops = LoopMode::ALLOWED
    );

    Network(
        const std::string& name,
        std::unique_ptr<VCube> vertices,
        std::unique_ptr<ECube> edges
    );

    virtual
    ~Network() {}

    /**
     * Returns a pointer to the network's vertices.
     */
    VCube*
    vertices(
    );


    /**
     * Returns a pointer to the network's vertices.
     */
    const VCube*
    vertices(
    ) const;


    /**
     * Returns a pointer to the network's edges.
     */
    ECube*
    edges(
    );


    /**
     * Returns a pointer to the network's edges.
     */
    const ECube*
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
    std::unique_ptr<ECube> edges_;

};

}
}

#endif
