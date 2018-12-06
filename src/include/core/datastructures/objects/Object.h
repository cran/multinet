/**
 * History:
 * - 2018.01.01 file adapted from version 1.0 of the multinet library
 */

#ifndef UU_CORE_DATASTRUCTURES_OBJECTS_OBJECT_H_
#define UU_CORE_DATASTRUCTURES_OBJECTS_OBJECT_H_

#include <iostream>
#include "core/datastructures/objects/ObjectId.h"

namespace uu {
namespace core {

/**
 * A generic class for objects that are part of any container defined in this
 * project, e.g., a row in a table, a node or an edge in a network, etc.
 *
 * Each Object is owned by a container, and it is the responsibility of the
 * container to use it properly, e.g., ensuring uniqueness of the identifiers.
 */
class
    Object
{
  protected:
    /** Constructor. */
    Object(
        //const ObjectId& oid
    );

    /** Constructor. */
    Object(
        const ObjectId& oid
    );

    /** Returns a complete description of the object. */
    std::string
    to_string(
    ) const;

    /** Writes the string representation of the object to an output stream. */
    friend std::ostream&
    operator<<(
        std::ostream&,
        const Object&
    );

  public:

    /**
     * Unique identifier of the object.
     */
    const ObjectId id;

    /**
     * Comparison operator: equality, based on the object identifiers.
     * This assumes that objects of the same type are compared - no checks
     * are made for efficiency reasons.
     */
    bool
    operator==(
        const Object&
    ) const;

    /**
     * Comparison operator: disequality, based on the object identifiers.
     * This assumes that objects of the same type are compared - no checks
     * are made for efficiency reasons.
     */
    bool
    operator!=(
        const Object&
    ) const;

    /**
     * Comparison operator: less than, bbased on the object identifiers.
     * This assumes that objects of the same type are compared - no checks
     * are made for efficiency reasons.
     */
    bool
    operator<(
        const Object&
    ) const;

    /**
     * Comparison operator: higher than, based on the object identifiers.
     * This assumes that objects of the same type are compared - no checks
     * are made for efficiency reasons.
     */
    bool
    operator>(
        const Object&
    ) const;

  public:

    /* largest identifier assigned so far. */
    static ObjectId max_object_id;

};

} // namespace core
} // namespace uu

#endif /* UU_CORE_DATASTRUCTURES_OBJECT_H_ */
