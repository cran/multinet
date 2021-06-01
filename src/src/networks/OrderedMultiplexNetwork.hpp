#ifndef UU_NETWORKS_ORDEREDMULTIPLEXNETWORK_H_
#define UU_NETWORKS_ORDEREDMULTIPLEXNETWORK_H_

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "objects/MLVertex.hpp"
#include "olap/VCube.hpp"
#include "olap/ECube.hpp"
#include "networks/Network.hpp"

#include "networks/_impl/stores/LayerStore.hpp"
#include "networks/_impl/stores/MLECubeStore.hpp"

namespace uu {
namespace net {

/**
 * An OrderedMultiplexNetwork is a Vertex Cube with N dimensions.
 * Each cell of the Vertex Cube has an Edge Cube defined on it, with one dimension.
 *
 * In OrderedMultiplexNetwork's, vertices are called actors, and the same actor can be
 * present in multiple layers.
 * A multilayer vertex (MLVertex) is a pair (actor,layer).
 * A multilayer edge (MLEdge) is an edge connecting multilayer vertices.
 */
class
    OrderedMultiplexNetwork
{

    friend LayerStore;

  public:

    typedef Network layer_type;
    typedef Vertex vertex_type;
    typedef MLVertex community_element_type;

  private:

    /** The actors, organized into N members on one dimension */
    std::unique_ptr<VCube> actors_;
    /** Layer Store */
    std::unique_ptr<LayerStore> layers_;
    /** Layer's vertices */
    //std::map<std::vector<std::string>, std::unique_ptr<VCube>> vertices_;
    /** Intralayer edges */
    //std::map<std::vector<std::string>, std::unique_ptr<ECube>> intra_edges_;

  public:

    const std::string name;

    //typedef Network layer_type;
    //typedef Vertex vertex_type;
    //typedef MLVertex<OrderedMultiplexNetwork> community_element_type;

    /**
     * Creates an empty Network.
     */
    OrderedMultiplexNetwork(
        const std::string& name
    );

    /**
     * Returns a pointer to the network's actors.
     */
    const VCube*
    actors(
    ) const;

    /**
     * Returns a pointer to the network's actors.
     */
    VCube*
    actors(
    );


    /**
     * Returns a pointer to the network's interlayer edges.
     */
    LayerStore*
    layers(
    );

    /**
     * Returns a pointer to the network's interlayer edges.
     */
    const LayerStore*
    layers(
    ) const;

};


}
}

#endif
