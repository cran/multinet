#ifndef UU_NETWORKS_PROBABILITY_H_
#define UU_NETWORKS_PROBABILITY_H_

#include "networks/Network.hpp"

namespace uu {
namespace net {

void
make_probabilistic(
    Network* net
);

bool
is_probabilistic(
    const Network* net
);

void
set_prob(
    Network* net,
    const Edge* edge,
    double p
);

/**
 * Returns the edge probability, or 1.0 if the edge has not been
 * annotated with any probability.
 * throw ElementNotFoundException if the edge does not belong to the network
 */
double
get_prob(
    const Network* net,
    const Edge* edge
);

}
}

#endif
