#include "core/datastructures/objects/Object.h"

namespace uu {
namespace core {


ObjectId Object::max_object_id = 0;

Object::
Object(
) :
    id(++Object::max_object_id)
{

}

Object::
Object(
    const ObjectId& id
) :
    id(id)
{

}

bool
Object::operator==(
    const Object& comp
) const
{
    return id==comp.id;
}

bool
Object::operator!=(
    const Object& comp
) const
{
    return id!=comp.id;
}

bool
Object::operator<(
    const Object& comp
) const
{
    return id<comp.id;
}

bool
Object::operator>(
    const Object& comp
) const
{
    return id>comp.id;
}

std::string
Object::to_string(
) const
{
    return "obj(" + std::to_string(id) + ")";
}

} // namespace core
} // namespace uu
