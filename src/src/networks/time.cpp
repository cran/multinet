#include "networks/time.hpp"

#include "olap/time.hpp"

namespace uu {
namespace net {

void
make_temporal(
    Network* net
)
{
    make_temporal(net->edges());
}


bool
is_temporal(
    const Network* net
)
{
    return is_temporal(net->edges());
}


void
add_time(
    Network* net,
    const Edge* edge,
    const core::Time& t
)
{
    add_time(net->edges(), edge, t);
}


std::set<core::Time>
get_times(
    const Network* net,
    const Edge* edge
)
{
    return get_times(net->edges(), edge);
}


std::array<core::Time, 2>
get_time_bounds(
    const Network* net
)
{
    return get_time_bounds(net->edges());
}

}
}

