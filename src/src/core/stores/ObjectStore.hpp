#ifndef UU_CORE_STORES_OBJECTSTORE_H_
#define UU_CORE_STORES_OBJECTSTORE_H_

#include <memory>
#include <map>
#include "core/stores/_impl/SharedPtrSortedRandomSet.hpp"
#include "core/observers/Observer.hpp"
#include "core/observers/Subject.hpp"

namespace uu {
namespace core {

/**
 * An ObjectStore allows to store, retrieve and erase objects.
 *
 * OBJECT_TYPE must have:
 * - define a typedef key_type (the type of the key used to identify the object in the store,
 * - provide a const member function key() returning the key value for the object, and
 * - inherit from std::enable_shared_from_this.
 *
 * Notice that the key is guaranteed to be unique only inside the ObjectStore.
 * Different ObjectStore's can contain different objects with the same key.
 */
template <typename OBJECT_TYPE>
class
    ObjectStore :
    public core::Subject<const OBJECT_TYPE>
{

  private:

    typedef core::SharedPtrSortedRandomSet<const OBJECT_TYPE> sorted_random_set;
    std::unique_ptr<sorted_random_set> data;

  public:

    typedef const OBJECT_TYPE value_type;
    typedef typename OBJECT_TYPE::key_type key_type;
    typedef typename sorted_random_set::iterator iterator;

    ObjectStore(
    );

    virtual
    ~ObjectStore() {}

    /** Returns an iterator to the first object in the store. */
    iterator
    begin(
    ) const;

    /** Returns an iterator after the last object in the store. */
    iterator
    end(
    ) const;

    /** Returns the number of objects in the store. */
    size_t
    size(
    ) const;

    /**
     * Inserts a new object in the store.
     * @return a pointer to the object
     */
    const OBJECT_TYPE*
    add(
        const OBJECT_TYPE* const obj
    );
    
    /**
     * Inserts a new object in the store.
     * @return a pointer to the object
     */
    const OBJECT_TYPE *
    add(
        std::shared_ptr<const OBJECT_TYPE> obj
    );

    /** Returns true if the input object is present in the store. */
    bool
    contains(
        const OBJECT_TYPE* const obj
    ) const;

    /** Returns true if an object with the input key is present in the store. */
    bool
    contains(
        const typename OBJECT_TYPE::key_type& key
    ) const;
    
    /** Returns the object with the input key, or nullptr if the key is not present in the store. */
    const OBJECT_TYPE*
    get(
        const typename OBJECT_TYPE::key_type& key
    ) const;

    /** Returns the object at the given position in the store.
     * @throw IndexOutOfBoundException if pos >= size()
     */
    const OBJECT_TYPE*
    at(
        size_t pos
    ) const;

    /** Returns a random object, selected with uniform probability. */
    const OBJECT_TYPE*
    get_at_random(
    ) const;
    
    /** Returns the position of the input object in the store, or -1. */
    int
    index_of(
        const OBJECT_TYPE* const obj
    ) const;

    /**
     * Removes the input object from the store.
     * @return true if the object was present
     */
    bool
    erase(
        const OBJECT_TYPE * const obj
    );
    
    /**
     * Removes the object with the input key from the store.
     * @return true if the object was present
     */
    bool
    erase(
        const typename OBJECT_TYPE::key_type& key
    );

    
    using core::Subject<const OBJECT_TYPE>::attach;
    using core::Subject<const OBJECT_TYPE>::observers;

  protected:

    /** Index: find element by key. */
    std::map<typename OBJECT_TYPE::key_type, const OBJECT_TYPE*> cidx_element_by_key;

};

}
}

#include "ObjectStore.ipp"

#endif
