#include "objects/MLVertex.hpp"

#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

MLVertex::
MLVertex(
    const Vertex* v,
    const Network* c
) :
    v(v),
    c(c),
    key(v, c)
{
    core::assert_not_null(v, "MLVertex::constructor", "v");
    core::assert_not_null(c, "MLVertex::constructor", "c");
}

MLVertex::
MLVertex(
) :
    v(nullptr),
    c(nullptr),
    key(v, c)
{
}


bool
MLVertex::
operator==(
    const MLVertex& mlv
) const
{
    return v == mlv.v && c == mlv.c;
}

bool
MLVertex::
operator<(
    const MLVertex& mlv
) const
{
    return v < mlv.v || (v == mlv.v && c < mlv.c);
}

bool
MLVertex::
operator!=(
    const MLVertex& mlv
) const
{
    return v != mlv.v || c != mlv.c;
}

bool
MLVertex::
operator>(
    const MLVertex& mlv
) const
{
    return v > mlv.v || (v == mlv.v && c > mlv.c);
}


std::string
MLVertex::
to_string(
) const
{
    return v->name + "@" + c->name;
}


std::ostream&
operator<<(std::ostream& os, const MLVertex& v)
{
    os << v.to_string();
    return os;
}


}
}
