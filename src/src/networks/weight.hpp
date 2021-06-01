#ifndef UU_NETWORKS_WEIGHT_H_
#define UU_NETWORKS_WEIGHT_H_

#include "networks/Network.hpp"

namespace uu {
namespace net {

void
make_weighted(
    Network* net
);

bool
is_weighted(
    const Network* net
);


void
set_weight(
    Network* net,
    const Edge* edge,
    double w
);

/**
 * Returns the edge weight, or 1.0 if the edge has not been
 * annotated with any weight.
 * throw ElementNotFoundException if the edge does not belong to the network
 */
double
get_weight(
    const Network* net,
    const Edge* edge
);

}
}

#endif
