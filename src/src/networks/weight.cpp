#include "networks/weight.hpp"

#include "core/exceptions/WrongParameterException.hpp"

namespace uu {
namespace net {

void
make_weighted(
    Network* net
)
{
    net->edges()->attr()->add("w_", core::AttributeType::DOUBLE);
}

bool
is_weighted(
    const Network* net
)
{
    auto attr = net->edges()->attr()->get("w_");

    if (!attr)  return false;
    
    if (attr->type == core::AttributeType::DOUBLE)
    {
        return true;
    }

    return false;
}

void
set_weight(
    Network* net,
    const Edge* edge,
    double w
)
{
    net->edges()->attr()->set_double(edge, "w_", w);
}

double
get_weight(
    const Network* net,
    const Edge* edge
)
{
    auto val = net->edges()->attr()->get_double(edge, "w_");

    if (val.null)
    {
        if (net->edges()->contains(edge))
        {
            return 1.0;
        }

        else
        {
            throw core::ElementNotFoundException("edge in network " + net->name);
        }
    }

    return val.value;
}

}
}

