/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NETWORKS_WEIGHTEDNETWORK_H_
#define UU_NETWORKS_WEIGHTEDNETWORK_H_

#include "networks/Network.hpp"

namespace uu {
namespace net {

/**
 * A weighted network is a Network with a default edge attribute and methods to set/get values
 * on this attribute.
 */

class WeightedNetwork
    : public Network
{

  private:

    std::string KWEIGHT_ATTR_NAME = "weight";

    typedef Network super;

  public:

    /**
     * Creates a network with directed or undirected simple edges and with or without loops.
     */
    WeightedNetwork(
        const std::string& name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        bool allow_loops = false
    );

    /**
     * Checks if the graph is weighted.
     */
    bool
    is_weighted(
    ) const override;

    /**
     * Sets the weight of an edge.
     */
    void
    set_weight(
        const Edge* e,
        double w
    );

    /**
     * Sets the weight of an edge.
     */
    core::Value<double>
    get_weight(
        const Edge* e
    );

    /**
     * Returns a string providing a summary of the network structure.
     */
    std::string
    summary(
    ) const override;

};

}
}

#endif
