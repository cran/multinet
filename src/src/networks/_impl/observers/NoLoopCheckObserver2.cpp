#include "networks/_impl/observers/NoLoopCheckObserver2.hpp"

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/WrongParameterException.hpp"

namespace uu {
namespace net {

NoLoopCheckObserver2::
NoLoopCheckObserver2(
)
{
}


void
NoLoopCheckObserver2::
notify_add(
    const Edge* e
)
{
    core::assert_not_null(e, "NoLoopCheckObserver2::notify_add", "e");

    // Same vertex in same context
    if (e->v1 == e->v2 && e->c1 == e->c2)
    {
        throw core::WrongParameterException("loops are not allowed");
    }
}


void
NoLoopCheckObserver2::
notify_erase(
    const Edge* e
)
{
    // Erasing an edge cannot generate a loop: no action
    core::assert_not_null(e, "NoLoopCheckObserver2::notify_add", "e");
}


}
}

