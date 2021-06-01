#ifndef UU_OLAP_TIME_H_
#define UU_OLAP_TIME_H_

#include <array>

#include "core/attributes/Time.hpp"
#include "olap/ECube.hpp"

namespace uu {
namespace net {

void
make_temporal(
    ECube* c
);

bool
is_temporal(
    const ECube* c
);

void
add_time(
    ECube* c,
    const Edge* edge,
    const core::Time& t
);


std::set<core::Time>
get_times(
    const ECube* c,
    const Edge* edge
);

/**
 * @throw OperationNotSupportedException
 */
std::array<core::Time, 2>
get_time_bounds(
    const ECube* c
);

}
}

#endif
