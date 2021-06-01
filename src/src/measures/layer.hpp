#ifndef UU_MEASURES_LAYER_H_
#define UU_MEASURES_LAYER_H_

#include "networks/Network.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

template <typename M>
double
jaccard_edge(
    const M* net,
    const Network* layer1,
    const Network* layer2
);

template <typename M>
double
pearson_degree(
    const M* net,
    const Network* layer1,
    const Network* layer2,
    EdgeMode mode = EdgeMode::INOUT 
);


}
}

#include "layer.ipp"

#endif
