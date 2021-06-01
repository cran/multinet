#ifndef UU_NETWORKS_TIME_H_
#define UU_NETWORKS_TIME_H_

#include <array>

#include "core/attributes/Time.hpp"
#include "networks/Network.hpp"

namespace uu {
namespace net {

void
make_temporal(
    Network* net
);

bool
is_temporal(
    const Network* net
);

void
add_time(
    Network* net,
    const Edge* edge,
    const core::Time& t
);


std::set<core::Time>
get_times(
    const Network* net,
    const Edge* edge
);

/**
 * @throw OperationNotSupportedException
 */
std::array<core::Time, 2>
get_time_bounds(
    const Network* net
);

}
}

#endif
