#ifndef UU_CORE_STORES_ATTRIBUTESTORE_H_
#define UU_CORE_STORES_ATTRIBUTESTORE_H_

#include <memory>
#include "core/stores/_impl/MainMemoryAttributeValueMap.hpp"
#include "core/observers/Observer.hpp"
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace core {

/**
 * A class to handle attributes to be associated to objects of type OBJECT_TYPE.
 */
template <typename OBJECT_TYPE>
class AttributeStore :
    public MainMemoryAttributeValueMap<const OBJECT_TYPE*>,
    public Observer<const OBJECT_TYPE>
{

  public:
    
    typedef const OBJECT_TYPE value_type;
    
    /**
     * Constructor.
     */
    AttributeStore();

    /**
     * When an object no longer exists, this method must be called to erase its values from the store.
     */
    void
    notify_erase(
        const OBJECT_TYPE* const obj
    );

    /**
     * This function has no effect on the store.
     */
    void
    notify_add(
        const OBJECT_TYPE* const obj
    );

    /**
     * Utility function adding attributes.length attribute values to object obj.
     * @param obj object to which the values are associated
     * @param fields a vector with attribute values
     * @param offset position in vector fields from where values are read
     * @param attributes names and types of the attributes to be read
     * @param line_number line number in the file from where the values were read, for error messages
     */
    virtual
    void
    read_attributes(
        const OBJECT_TYPE* const obj,
        const std::vector<std::string>& fields,
        size_t offset,
        const std::vector<Attribute>& attributes,
        size_t line_number
    );

};


}
}

#include "AttributeStore.ipp"

#endif
