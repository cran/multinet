/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "mnet/datastructures/graphs/AttributedTwoModeNetwork.h"

namespace uu {
namespace net {


AttributedTwoModeNetwork::
AttributedTwoModeNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<UnionVertexStore> v,
    std::unique_ptr<VertexDisjointLayerStore<AttributedEmptyGraph, AttributedEmptyGraph>> l,
    std::unique_ptr<InterlayerEdgeStore<AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>,2>> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

AttributedEmptyGraph*
AttributedTwoModeNetwork::
top(
)
{
    return layers()->template get<0>();
}


const AttributedEmptyGraph*
AttributedTwoModeNetwork::
top(
) const
{
    return layers()->template get<0>();
}

AttributedEmptyGraph*
AttributedTwoModeNetwork::
bottom(
)
{
    return layers()->template get<1>();
}

const AttributedEmptyGraph*
AttributedTwoModeNetwork::
bottom(
) const
{
    return layers()->template get<1>();
}

AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>*
AttributedTwoModeNetwork::
interlayer_edges(
)
{
    return super::interlayer_edges()->get<0,1>();
}

const AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>*
AttributedTwoModeNetwork::
interlayer_edges() const
{
    return super::interlayer_edges()->get<0,1>();
}

std::string
AttributedTwoModeNetwork::
summary(
) const
{
    size_t num_edges = interlayer_edges()->size();
    std::string summary =
        "TwoModeNetwork (" +
        vertices_->summary() + " (top: " +
        std::to_string(top()->vertices()->size()) + ", bottom: " +
        std::to_string(bottom()->vertices()->size()) + "), " +
        std::to_string(num_edges) + (num_edges==1?" edge)":" edges)");
    return summary;
}



std::unique_ptr<AttributedTwoModeNetwork>
create_attributed_twomode_network(
    const std::string& name,
    EdgeDir dir
)
{
    auto vs = std::make_unique<UnionVertexStore>();

    using LS = VertexDisjointLayerStore<AttributedEmptyGraph, AttributedEmptyGraph>;

    std::unique_ptr<AttributedEmptyGraph> g1 = create_attributed_empty_graph("top");
    std::unique_ptr<AttributedEmptyGraph> g2 = create_attributed_empty_graph("bottom");
    auto ls = std::make_unique<LS>(std::move(g1), std::move(g2));

    using ES = AttributedSimpleEdgeStore<Attributes<Edge, UserDefinedAttrs<Edge>>>;

    using EA = Attributes<Edge, UserDefinedAttrs<Edge>>;
    auto e_attr = std::make_unique<EA>();
    auto aes = std::make_unique<AttributedSimpleEdgeStore<EA>>(dir, std::move(e_attr));

    std::array<std::unique_ptr<ES>,1> init;
    init.at(0) = std::move(aes);

    auto es = std::make_unique<InterlayerEdgeStore<ES,2>>(std::move(init));

    std::unique_ptr<AttributedTwoModeNetwork> net;


    MultilayerNetworkType t;

    net = std::make_unique<AttributedTwoModeNetwork>(
              name,
              t,
              std::move(vs),
              std::move(ls),
              std::move(es));

    /*
     std::unique_ptr<NoOpObserver<const Vertex>> o1 = std::make_unique<NoOpObserver<const Vertex>>();
     net->vertices().attach(o1.get());
     net->register_observer(std::unique_ptr<core::GenericObserver>(std::move(o1)));
     */

    std::unique_ptr<UnionObserver<const Vertex, UnionVertexStore>> o1 = std::make_unique<UnionObserver<const Vertex, UnionVertexStore>>(net->vertices());
    net->top()->vertices()->attach(o1.get());
    net->bottom()->vertices()->attach(o1.get());
    net->register_observer(std::unique_ptr<core::GenericObserver>(std::move(o1)));

    return net;

}

}
}

