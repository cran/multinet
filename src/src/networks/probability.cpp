#include "networks/probability.hpp"

#include "core/exceptions/WrongParameterException.hpp"

namespace uu {
namespace net {

void
make_probabilistic(
    Network* net
)
{
    net->edges()->attr()->add("p_", core::AttributeType::DOUBLE);
}

bool
is_probabilistic(
    const Network* net
)
{
    auto attr = net->edges()->attr()->get("p_");
    
    if (!attr)  return false;
    
    if (attr->type == core::AttributeType::DOUBLE)
    {
        return true;
    }

    return false;
}

void
set_prob(
    Network* net,
    const Edge* edge,
    double p
)
{
    if (p < 0 || p > 1)
    {
        std::string err = "probabilities must be between 0 and 1";
        throw core::WrongParameterException(err);
    }

    net->edges()->attr()->set_double(edge, "p_", p);
}

double
get_prob(
    const Network* net,
    const Edge* edge
)
{
    auto val = net->edges()->attr()->get_double(edge, "p_");

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

