/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "networks/WeightedNetwork.hpp"

namespace uu {
namespace net {

WeightedNetwork::
WeightedNetwork(
    const std::string& name,
    EdgeDir dir,
    bool allows_loops
) : super(name, dir, allows_loops)
{
    auto w_attr = core::Attribute::create(KWEIGHT_ATTR_NAME, core::AttributeType::DOUBLE);

    edges()->attr()->add(std::move(w_attr));

}

void
WeightedNetwork::
set_weight(
    const Edge* e,
    double w
)
{
    edges()->attr()->set_double(e, KWEIGHT_ATTR_NAME, w);
}

/**
 * Sets the weight of an edge.
 */
core::Value<double>
WeightedNetwork::
get_weight(
    const Edge* e
)
{
    return edges()->attr()->get_double(e, KWEIGHT_ATTR_NAME);
}

bool
WeightedNetwork::
is_weighted(
) const
{
    return true;
}


std::string
WeightedNetwork::
summary(
) const
{
    return "WeightedNetwork(" + std::to_string(vertices()->size()) + "," + std::to_string(edges()->size()) + ")";
}

}
}

