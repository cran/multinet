#include "olap/time.hpp"

namespace uu {
namespace net {

void
make_temporal(
    ECube* c
)
{
    c->attr()->add("t_", core::AttributeType::TIMESET);
}


bool
is_temporal(
    const ECube* c
)
{
    auto attr = c->attr()->get("t_");

    if (attr->type == core::AttributeType::TIMESET)
    {
        return true;
    }

    return false;
}


void
add_time(
    ECube* c,
    const Edge* edge,
    const core::Time& t
)
{
    c->attr()->add_time(edge, "t_", t);
}


std::set<core::Time>
get_times(
    const ECube* c,
    const Edge* edge
)
{
    return c->attr()->get_times(edge, "t_");
}


std::array<core::Time, 2>
get_time_bounds(
    const ECube* c
)
{
    bool init = false;
    core::Time min;
    core::Time max;

    for (auto edge: *c)
    {
        auto times = get_times(c, edge);

        for (auto time: times)
        {
            if (!init)
            {
                init = true;
                min = time;
                max = time;
            }

            else
            {
                if (time < min)
                {
                    min = time;
                }

                else if (time > max)
                {
                    max = time;
                }
            }
        }
    }

    if (!init)
    {
        std::string err = "cannot return time bounds of network with no associated times";
        throw core::OperationNotSupportedException(err);
    }

    std::array<core::Time, 2> res({min, max});
    return res;
}

}
}

