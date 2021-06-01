
namespace uu {
namespace core {


template <typename OBJECT_TYPE>
ObjectStore<OBJECT_TYPE>::
ObjectStore(
)
{
    data = std::make_unique<sorted_random_set>();
}

template <typename OBJECT_TYPE>
typename ObjectStore<OBJECT_TYPE>::iterator
ObjectStore<OBJECT_TYPE>::
 begin(
 ) const
{
    return data->begin();
}


template <typename OBJECT_TYPE>
typename ObjectStore<OBJECT_TYPE>::iterator
 ObjectStore<OBJECT_TYPE>::
 end(
 ) const
 {
     return data->end();
 }


template <typename OBJECT_TYPE>
 size_t
 ObjectStore<OBJECT_TYPE>::
 size(
 ) const
 {
     return data->size();
 }

template <typename OBJECT_TYPE>
 const OBJECT_TYPE*
 ObjectStore<OBJECT_TYPE>::
 add(
     const OBJECT_TYPE* const obj
 )
 {
     core::assert_not_null(obj, "ObjectStore::add", "obj");
     return add(obj->shared_from_this());
 }
 

template <typename OBJECT_TYPE>
 bool
 ObjectStore<OBJECT_TYPE>::
 contains(
     const OBJECT_TYPE* const obj
 ) const
 {
     core::assert_not_null(obj, "ObjectStore::contains", "obj");
     return data->contains(obj);
 }


template <typename OBJECT_TYPE>
 bool
 ObjectStore<OBJECT_TYPE>::
 contains(
     const typename OBJECT_TYPE::key_type& key
 ) const
 {
     auto obj = get(key);
     if (!obj) return false;
     else return true;
 }
 

template <typename OBJECT_TYPE>
 const OBJECT_TYPE*
 ObjectStore<OBJECT_TYPE>::
 at(
     size_t pos
 ) const
 {
     return data->at(pos);
 }


template <typename OBJECT_TYPE>
 const OBJECT_TYPE*
 ObjectStore<OBJECT_TYPE>::
 get_at_random(
 ) const
 {
     return data->get_at_random();
 }


template <typename OBJECT_TYPE>
 int
 ObjectStore<OBJECT_TYPE>::
 index_of(
     const OBJECT_TYPE* const obj
 ) const
 {
     core::assert_not_null(obj, "ObjectStore::index_of", "obj");
     return data->index_of(obj);
 }


 template <typename OBJECT_TYPE>
 bool
 ObjectStore<OBJECT_TYPE>::
 erase(
     const typename OBJECT_TYPE::key_type& key
 )
{
    auto obj = get(key);
    if (!obj) return false;
    return erase(obj);
}


template <typename OBJECT_TYPE>
const OBJECT_TYPE *
ObjectStore<OBJECT_TYPE>::
add(
    std::shared_ptr<const OBJECT_TYPE> obj
)
{

    core::assert_not_null(obj.get(), "ObjectStore::add", "obj");

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_add(obj.get());
    }

    // Return a nullptr if a vertex with this key exists.
    auto search = cidx_element_by_key.find(obj->key());

    if (search != cidx_element_by_key.end())
    {
        return nullptr;
    }

    const OBJECT_TYPE* res = data->add(obj);

    // Indexing.
    cidx_element_by_key[obj->key()] = obj.get();

    return res;
}


template <typename OBJECT_TYPE>
const OBJECT_TYPE *
ObjectStore<OBJECT_TYPE>::
get(
    const typename OBJECT_TYPE::key_type& key
) const
{
    auto search = cidx_element_by_key.find(key);

    if (search != cidx_element_by_key.end())
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
    const OBJECT_TYPE * const obj
)
{
    core::assert_not_null(obj, "ObjectStore::erase", "obj");

    auto search = cidx_element_by_key.find(obj->key());

    if (search != cidx_element_by_key.end())
    {
        for (auto obs: observers)
        {
            obs->notify_erase(obj);
        }
        cidx_element_by_key.erase(search);
        data->erase(obj);
        return true;
    }

    else
    {
        return false;
    }
}


}
}
