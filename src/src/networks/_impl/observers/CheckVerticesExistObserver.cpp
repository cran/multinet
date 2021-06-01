#include "networks/_impl/observers/CheckVerticesExistObserver.hpp"

#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

CheckVerticesExistObserver::
CheckVerticesExistObserver(
)
{
}

void
CheckVerticesExistObserver::
notify_add(
    const Edge* e
)
{

    core::assert_not_null(e, "CheckVerticesExistObserver::notify_add", "e");

    if (!e->c1->contains(e->v1))
    {
        throw core::ElementNotFoundException("vertex " + e->v1->name + "@" + e->c1->name);
    }

    if (!e->c2->contains(e->v2))
    {
        throw core::ElementNotFoundException("vertex " + e->v2->name + "@" + e->c2->name);
    }
}


void
CheckVerticesExistObserver::
notify_erase(
    const Edge* e
)
{
    core::assert_not_null(e, "CheckVerticesExistObserver::notify_erase", "e");
}


}
}
