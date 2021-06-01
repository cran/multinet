#ifndef UU_CORE_ATTRIBUTES_ATTRIBUTE_H_
#define UU_CORE_ATTRIBUTES_ATTRIBUTE_H_

#include <memory>
#include <string>
#include "core/attributes/AttributeType.hpp"

namespace uu {
namespace core {

/** Meta data about an attribute. */
class Attribute :
    public std::enable_shared_from_this<Attribute>
{
  public:


    /** Name of the attribute. */
    std::string name;

    /** Type of the attribute. */
    AttributeType type;

    /** Constructor. */
    Attribute(
        const std::string& name,
        const AttributeType& type
    );

};

}
}

#endif
