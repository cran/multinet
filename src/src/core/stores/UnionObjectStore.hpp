#ifndef UU_CORE_STORES_UNIONOBJECTSTORE_H_
#define UU_CORE_STORES_UNIONOBJECTSTORE_H_

#include <memory>
#include <map>
#include "core/datastructures/containers/SharedPtrSortedRandomSet.hpp"
#include "core/datastructures/observers/Observer.hpp"
#include "core/datastructures/observers/Subject.hpp"

namespace uu {
namespace core {

/**
 * A ObjectStore allows to create, store, retrieve and erase a set of elements.
 *
 * OBJECT_TYPE must have:
 * a typedef key_type, to specify the input to create the objects used as keys by the store
 */
template <typename OBJECT_TYPE>
class
    UnionObjectStore :
    public ObjectStore<OBJECT_TYPE>
{

  private:

    typedef core::UnionSortedRandomSet<const OBJECT_TYPE> set_;

  public:

    typedef OBJECT_TYPE value_type;
    typedef typename OBJECT_TYPE::key_type key_type;


    UnionObjectStore(
    );

    using super::add;

    using super::size;

    const OBJECT_TYPE *
    add(
        std::shared_ptr<const OBJECT_TYPE> v
    ) override;

    /** Creates a new object and adds it to the store.
    const OBJECT_TYPE *
    add(
        const typename OBJECT_TYPE::key_type& key
    );
     */

    const OBJECT_TYPE *
    get(
        const typename OBJECT_TYPE::key_type& key
    ) const;

    bool
    erase(
        const OBJECT_TYPE * v
    ) override;

    /**
     * Returns a short string summary of this store, for example including
     * the number of objects it contains.
     */
    virtual
    std::string
    summary(
    ) const;

};


template <typename OBJECT_TYPE>
UnionObjectStore<OBJECT_TYPE>::
UnionObjectStore(
)
{
}


template <typename OBJECT_TYPE>
const OBJECT_TYPE *
UnionObjectStore<OBJECT_TYPE>::
add(
    std::shared_ptr<const OBJECT_TYPE> v
)
{

    core::assert_not_null(v.get(), "add", "v");

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_add(v.get());
    }

    // Return false if a vertex with this key exists.
    auto search = cidx_element_by_name.find(v->key);

    if (search != cidx_element_by_name.end())
    {
        return nullptr;
    }

    const OBJECT_TYPE* res = super::add(v);

    // Indexing.
    cidx_element_by_name[v->key] = v.get();

    return res;
}


/*
template <typename OBJECT_TYPE>
const OBJECT_TYPE *
ObjectStore<OBJECT_TYPE>::
add(
    const typename OBJECT_TYPE::key_type& key
)
{
    if (!get(key))
    {
        return add(OBJECT_TYPE::create(key));
    }

    else
    {
        return nullptr;
    }
}
*/

template <typename OBJECT_TYPE>
const OBJECT_TYPE *
UnionObjectStore<OBJECT_TYPE>::
get(
    const typename OBJECT_TYPE::key_type& key
) const
{
    auto search = cidx_element_by_name.find(key);

    if (search != cidx_element_by_name.end())
    {
        return search->second;
    }

    else
    {
        return nullptr;
    }
}

template <typename OBJECT_TYPE>
bool
ObjectStore<OBJECT_TYPE>::
erase(
    const OBJECT_TYPE * v
)
{
    throw
    return false;
}


template <typename OBJECT_TYPE>
std::string
ObjectStore<OBJECT_TYPE>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" object":" objects");
    return summary;
}
}
}

#endif
