/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/datastructures/stores/VertexStore.h"
#include "core/exceptions/NullPtrException.h"

namespace uu {
namespace net {


VertexStore::
VertexStore(
)
{
}


const Vertex *
VertexStore::
add(
    std::shared_ptr<const Vertex> vertex
)
{
    if (!vertex)
    {
        throw core::NullPtrException("vertex in add(vertex)");
    }

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_add(vertex.get());
    }

    // Return a nullptr if a vertex with this name exists.
    const Vertex * res = super::add(vertex);

    if (!res)
    {
        return nullptr;
    }

    return res;
}

const Vertex *
VertexStore::
add(
    std::string vertex_name
)
{
    if (!get(vertex_name))
    {
        return add(Vertex::create(vertex_name));
    }

    else
    {
        return nullptr;
    }
}


bool
VertexStore::
erase(
    const Vertex * const vertex
)
{
    if (!vertex)
    {
        throw core::NullPtrException("vertex in erase(vertex)");
    }

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_erase(vertex);
    }

    bool res = super::erase(vertex);

    if (!res)
    {
        return false;
    }

    return true;
}



std::string
VertexStore::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" vertex":" vertices");
    return summary;
}


}
}

