#include "measures/_impl/layer_utils.hpp"

namespace uu {
namespace net {

template <typename M>
double
jaccard_edge(
    const M* net,
    const Network* layer1,
    const Network* layer2
)
{
    auto P = uu::net::edge_existence_property_matrix(net);
    return core::jaccard<std::pair<const typename M::vertex_type*,const typename M::vertex_type*>, const uu::net::Network*>(P, layer1, layer2);
}


template <typename M>
double
pearson_degree(
    const M* net,
    const Network* layer1,
    const Network* layer2,
    EdgeMode mode
)
{
    auto P = actor_degree_property_matrix(net,mode);
    return uu::core::pearson<const uu::net::Vertex*, const uu::net::Network*>(P, layer1, layer2);
}

}
}
