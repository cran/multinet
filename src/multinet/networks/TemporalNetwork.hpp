/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NETWORKS_TEMPORALNETWORK_H_
#define UU_NETWORKS_TEMPORALNETWORK_H_

#include "networks/MultiNetwork.hpp"

namespace uu {
namespace net {

/**
 * A weighted network is a Network with a default edge attribute and methods to set/get values
 * on this attribute.
 */

class TemporalNetwork
    : public MultiNetwork
{

  private:
    
    typedef MultiNetwork super;
    
  public:
    
    const std::string KTIME_ATTR_NAME = "t";
    
    /**
     * Creates a network with directed or undirected simple edges and with or without loops.
     */
    TemporalNetwork(
        const std::string& name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        bool allow_loops = false
    );

    /**
     * Checks if the graph is weighted.
     */
    bool
    is_temporal(
    ) const override;

    /**
     * Sets the weight of an edge.
     */
    void
    set_time(
        const Edge* e,
        core::Time t
    );

    /**
     * Sets the weight of an edge.
     */
    core::Value<core::Time>
    get_time(
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
