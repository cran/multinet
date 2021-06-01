#include "objects/Edge.hpp"

#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {


Edge::
Edge(
    const Vertex* v1,
    const VCube* c1,
    const Vertex* v2,
    const VCube* c2,
    EdgeDir dir
) :
    v1(v1),
    c1(c1),
    v2(v2),
    c2(c2),
    dir(dir)
{
    core::assert_not_null(v1, "Edge::constructor", "v1");
    core::assert_not_null(c1, "Edge::constructor", "c1");
    core::assert_not_null(v2, "Edge::constructor", "v2");
    core::assert_not_null(c2, "Edge::constructor", "c2");
}


std::string
Edge::
to_string(
) const
{
    if (c1 == c2)
    {
        switch (dir)
        {
        case EdgeDir::DIRECTED:
            return "(" + v1->to_string() +
                   " -> " + v2->to_string() + ")";

        case EdgeDir::UNDIRECTED:
            return "(" + v1->to_string() +
                   " -- " + v2->to_string() + ")";
        }
    }
    else
    {
        switch (dir)
        {
        case EdgeDir::DIRECTED:
            return "(" + v1->to_string() +
                   "@" + c1->to_string() +
                   " -> " + v2->to_string() +
                   "@" + c2->to_string() + ")";

        case EdgeDir::UNDIRECTED:
            return "(" + v1->to_string() +
                   "@" + c1->to_string() +
                   " -- " + v2->to_string() +
                   "@" + c2->to_string() + ")";
        }
    }
    return ""; // cannot get here
}


Edge::key_type
Edge::
key(
) const
{
    return std::make_tuple(v1, c1, v2, c2);
};


std::ostream&
operator<<(std::ostream& os, const Edge& e)
{
    os << e.to_string();
    return os;
}


}
}

