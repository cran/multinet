/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "networks/TemporalNetwork.hpp"

namespace uu {
namespace net {

TemporalNetwork::
TemporalNetwork(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops
) : super(name, dir, allows_loops)
{
    auto t_attr = core::Attribute::create(KTIME_ATTR_NAME, core::AttributeType::TIME);

    edges()->attr()->add(std::move(t_attr));

}

void
TemporalNetwork::
set_time(
    const Edge* e,
    core::Time t
)
{
    edges()->attr()->set_time(e, KTIME_ATTR_NAME, t);
}

/**
 * Sets the weight of an edge.
 */
core::Value<core::Time>
TemporalNetwork::
get_time(
    const Edge* e
)
{
    return edges()->attr()->get_time(e, KTIME_ATTR_NAME);
}

bool
TemporalNetwork::
is_temporal(
) const
{
    return true;
}


std::string
TemporalNetwork::
summary(
) const
{
    return "TemporalNetwork(" + std::to_string(vertices()->size()) + "," + std::to_string(edges()->size()) + ")";
}

}
}

