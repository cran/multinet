#include "core/datastructures/objects/NamedObject.h"

namespace uu {
namespace core {

NamedObject::
NamedObject(
    //const ObjectId& id,
    const std::string& name
) :
    //Object(id),
    name(name)
{

}

std::string
NamedObject::
to_string(
) const
{
    return "obj(" + name + ")";
}

std::ostream&
operator<<(
    std::ostream& os,
    const NamedObject& obj
)
{
    os << obj.to_string();
    return os;
}

} // namespace core
} // namespace uu
