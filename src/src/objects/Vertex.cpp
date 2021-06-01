#include "objects/Vertex.hpp"

namespace uu {
namespace net {

Vertex::
Vertex(
    const std::string& name
) :
    name(name)
{
}


std::string
Vertex::
to_string() const
{
    return name;
}


Vertex::key_type
Vertex::
key(
) const
{
    return name;
}


std::ostream&
operator<<(std::ostream& os, const Vertex& v)
{
    os << v.to_string();
    return os;
}


}
}
