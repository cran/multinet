#include "olap/sel//All.hpp"

namespace uu {
namespace net {

All::
All(
)
{
    has_next_ = false;
}


void
All::
eval(
    std::size_t size
)
{
    if (size > 0)
    {
        max_ = size;
        has_next_ = true;
        current_ = 0;
    }
}


bool
All::
has_next(
) const
{
    return has_next_;
}


std::size_t
All::
next(
)
{
    if (current_ < max_ - 1)
    {
        return current_++;
    }

    else
    {
        has_next_ = false;
        return current_;
    }
}

}
}

