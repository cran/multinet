/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_GENERICVERTEXSTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_GENERICVERTEXSTORE_H_

#include <memory>
#include <map>
#include "core/datastructures/containers/SharedPtrSortedRandomSet.h"
#include "core/datastructures/observers/Observer.h"
#include "core/datastructures/observers/Subject.h"
#include "net/datastructures/objects/Vertex.h"

namespace uu {
namespace net {

/**
 * A GenericVertexStore allows to create, store, retrieve and erase a set of vertices.
 *
 * V must have:
 * a typedef key_type, to specify the input to create the objects used as keys by the store
 */
template <typename V>
class
    GenericVertexStore :
    public core::SharedPtrSortedRandomSet<const V>,
    public core::Subject<const V>
{

  private:

    typedef core::SharedPtrSortedRandomSet<const V> super;

  public:
    GenericVertexStore(
    );

    using super::add;
    using super::size;
    using core::Subject<const V>::observers;

    const V *
    add(
        std::shared_ptr<const V> v
    ) override;

    /** Creates a new vertex and adds it to the store. */
    const V *
    add(
        const typename V::key_type& key
    );

    const V *
    get(
        const typename V::key_type& key
    ) const;

    bool
    erase(
        const V * v
    ) override;

    /**
     * Returns a short string summary of this store, for example including
     * the number of vertices it contains.
     */
    virtual
    std::string
    summary(
    ) const;


  protected:

    /** Index: find element by key. */
    std::map<typename V::key_type, const V*> cidx_element_by_name;

};


template <typename V>
GenericVertexStore<V>::
GenericVertexStore(
)
{
}


template <typename V>
const V *
GenericVertexStore<V>::
add(
    std::shared_ptr<const V> v
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

    const V* res = super::add(v);

    // Indexing.
    cidx_element_by_name[v->key] = v.get();

    return res;
}



template <typename V>
const V *
GenericVertexStore<V>::
add(
    const typename V::key_type& key
)
{
    if (!get(key))
    {
        return add(Vertex::create(key));
    }

    else
    {
        return nullptr;
    }
}


template <typename V>
const V *
GenericVertexStore<V>::
get(
    const typename V::key_type& key
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

template <typename V>
bool
GenericVertexStore<V>::
erase(
    const V * v
)
{
    core::assert_not_null(v, "erase", "v");


    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_erase(v);
    }

    auto search = cidx_element_by_name.find(v->key);

    if (search != cidx_element_by_name.end())
    {
        cidx_element_by_name.erase(search);
        super::erase(v);
        return true;
    }

    else
    {
        return false;
    }
}


template <typename V>
std::string
GenericVertexStore<V>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" vertex":" vertices");
    return summary;
}
}
}

#endif
