#include "core/attributes/Attribute.hpp"

namespace uu {
namespace core {

Attribute::
Attribute(
    const std::string& name,
    const AttributeType& type
) :
    name(name),
    type(type)
{
}


}
}

