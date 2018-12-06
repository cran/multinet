/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDTWOMODENETWORK_H_
#define UU_MNET_DATASTRUCTURE_GRAPHS_ATTRIBUTEDTWOMODENETWORK_H_

#include <memory>
#include <string>
#include "net/datastructures/graphs/AttributedEmptyGraph.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/AttributedSimpleEdgeStore.h"
#include "mnet/datastructures/graphs/MultilayerNetwork.h"
#include "mnet/datastructures/stores/UnionVertexStore.h"
#include "mnet/datastructures/stores/VertexDisjointLayerStore.h"
#include "mnet/datastructures/stores/InterlayerEdgeStore.h"
//#include "mnet/datastructures/store_types.h"

namespace uu {
namespace net {

class
    AttributedTwoModeNetwork
    :
    public MultilayerNetwork<
    UnionVertexStore,
    VertexDisjointLayerStore<AttributedEmptyGraph, AttributedEmptyGraph>,
    InterlayerEdgeStore<AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>,2>
    >
{
    typedef MultilayerNetwork<
    UnionVertexStore,
    VertexDisjointLayerStore<AttributedEmptyGraph, AttributedEmptyGraph>,
    InterlayerEdgeStore<AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>,2>
    > super;

  public:

    //using super::super;

    AttributedTwoModeNetwork(
        const std::string& name,
        MultilayerNetworkType t,
        std::unique_ptr<UnionVertexStore> v,
        std::unique_ptr<VertexDisjointLayerStore<AttributedEmptyGraph, AttributedEmptyGraph>> l,
        std::unique_ptr<InterlayerEdgeStore<AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>,2>> e
    );

    AttributedEmptyGraph*
    top(
    );

    const AttributedEmptyGraph*
    top(
    ) const;

    AttributedEmptyGraph*
    bottom(
    );

    const AttributedEmptyGraph*
    bottom(
    ) const;

    AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>*
    interlayer_edges(
    );

    const AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>*
    interlayer_edges(
    ) const;

    std::string
    summary(
    ) const;

};

/**
 * Creates a multiplex network.
 */
std::unique_ptr<AttributedTwoModeNetwork>
create_attributed_twomode_network(
    const std::string& name,
    EdgeDir dir
);

}
}

#endif
