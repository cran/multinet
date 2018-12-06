/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_XNET_DATASTRUCTURE_GRAPHS_TEMPORALTEXTNETWORK_H_
#define UU_XNET_DATASTRUCTURE_GRAPHS_TEMPORALTEXTNETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/AttributedSimpleGraph.h"
#include "xnet/datastructures/graphs/TextGraph.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/UnionVertexStore.h"
#include "mnet/datastructures/stores/VertexDisjointLayerStore.h"
#include "mnet/datastructures/stores/TemporalInterlayerEdgeStore.h"
//#include "mnet/datastructures/store_types.h"

namespace uu {
namespace net {

class
    TemporalTextNetwork
    :
    public MultilayerNetwork<
    UnionVertexStore,
    VertexDisjointLayerStore<TextGraph, AttributedSimpleGraph>,
    TemporalInterlayerEdgeStore<2>
    >
{

    typedef MultilayerNetwork<
    UnionVertexStore,
    VertexDisjointLayerStore<TextGraph, AttributedSimpleGraph>,
    TemporalInterlayerEdgeStore<2>
    > super;

  public:

    //using super::super;

    TemporalTextNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<UnionVertexStore> v,
        std::unique_ptr<VertexDisjointLayerStore<TextGraph, AttributedSimpleGraph>> l,
        std::unique_ptr<TemporalInterlayerEdgeStore<2>> e
    );

    TextGraph*
    messages(
    );

    const TextGraph*
    messages(
    ) const;

    AttributedSimpleGraph*
    actors(
    );

    const AttributedSimpleGraph*
    actors(
    ) const;

    TemporalSimpleEdgeStore*
    interlayer_edges(
    );

    const TemporalSimpleEdgeStore*
    interlayer_edges(
    ) const;

    std::string
    summary(
    ) const;

};

/**
 * Creates a multiplex network.
 */
std::unique_ptr<TemporalTextNetwork>
create_temporal_text_network(
    const std::string& name
);

}
}

#endif
