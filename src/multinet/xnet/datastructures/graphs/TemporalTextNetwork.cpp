/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "xnet/datastructures/graphs/TemporalTextNetwork.h"
#include "net/datastructures/objects/EdgeDir.h"

namespace uu {
namespace net {


TemporalTextNetwork::
TemporalTextNetwork(
    const std::string& name,
    MultilayerNetworkType t,
    std::unique_ptr<UnionVertexStore> v,
    std::unique_ptr<VertexDisjointLayerStore<TextGraph, AttributedSimpleGraph>> l,
    std::unique_ptr<TemporalInterlayerEdgeStore<2>> e
) :
    super(name, t, std::move(v), std::move(l), std::move(e))
{
}

TextGraph*
TemporalTextNetwork::
messages(
)
{
    return layers()->template get<0>();
}


const TextGraph*
TemporalTextNetwork::
messages(
) const
{
    return layers()->template get<0>();
}

AttributedSimpleGraph*
TemporalTextNetwork::
actors(
)
{
    return layers()->template get<1>();
}

const AttributedSimpleGraph*
TemporalTextNetwork::
actors(
) const
{
    return layers()->template get<1>();
}

TemporalSimpleEdgeStore*
TemporalTextNetwork::
interlayer_edges(
)
{
    return super::interlayer_edges()->get<0,1>();
}

const TemporalSimpleEdgeStore*
TemporalTextNetwork::
interlayer_edges() const
{
    return super::interlayer_edges()->get<0,1>();
}

std::string
TemporalTextNetwork::
summary(
) const
{
    size_t num_edges = interlayer_edges()->size();

    size_t num_msg = messages()->vertices()->size();
    size_t num_act = actors()->vertices()->size();


    std::string summary =
        "TemporalTextNetwork (" +
        std::to_string(num_act) + (num_act==1?" actor, ":" actors, ") +
        std::to_string(num_msg) + (num_msg==1?" message, ":" messages, ") +
        std::to_string(num_edges) + (num_edges==1?" edge)":" edges)");
    return summary;
}



std::unique_ptr<TemporalTextNetwork>
create_temporal_text_network(
    const std::string& name
)
{
    auto vs = std::make_unique<UnionVertexStore>();

    using LS = VertexDisjointLayerStore<TextGraph, AttributedSimpleGraph>;

    std::unique_ptr<TextGraph> g1 = create_text_graph("messages", EdgeDir::DIRECTED);
    std::unique_ptr<AttributedSimpleGraph> g2 = create_attributed_simple_graph("actors");
    auto ls = std::make_unique<LS>(std::move(g1), std::move(g2));

    auto es = std::make_unique<TemporalInterlayerEdgeStore<2>>(EdgeDir::DIRECTED);

    std::unique_ptr<TemporalTextNetwork> net;


    MultilayerNetworkType t;

    net = std::make_unique<TemporalTextNetwork>(
              name,
              t,
              std::move(vs),
              std::move(ls),
              std::move(es));

    std::unique_ptr<UnionObserver<const Vertex, UnionVertexStore>> o1 = std::make_unique<UnionObserver<const Vertex, UnionVertexStore>>(net->vertices());
    net->messages()->vertices()->attach(o1.get());
    net->actors()->vertices()->attach(o1.get());
    net->register_observer(std::unique_ptr<core::GenericObserver>(std::move(o1)));

    return net;

}


}
}

