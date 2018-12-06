/**
 * History:
 * - 2018.01.01 file adapted from version 1.0 of the multinet library
 */

#ifndef UU_CORE_DATASTRUCTURES_OBJECTS_NAMEDOBJECT_H_
#define UU_CORE_DATASTRUCTURES_OBJECTS_NAMEDOBJECT_H_

#include <iostream>
#include "core/datastructures/objects/Object.h"

namespace uu {
namespace core {

/** A generic class for objects with a name. */
class
    NamedObject : public Object
{

  protected:

    /** Constructor. */
    NamedObject(
        const std::string& name
    );

  public:

    /** Returns a complete description of the object. */
    std::string
    to_string(
    ) const;

    /**
     * Name of the object. If uniqueness is required, it must be ensured by the
     * container storing the object.
     */
    const std::string name;
};

}
}

#endif
