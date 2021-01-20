#ifndef UU_CORE_OLAP_IMPL_OBSERVERS_UNIONOBSERVER_H_
#define UU_CORE_OLAP_IMPL_OBSERVERS_UNIONOBSERVER_H_

#include "core/datastructures/observers/Observer.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include <unordered_map>

namespace uu {
namespace core {

/**
 * @todo wastes some space: adds one more pointer per element
 */
template<typename S, typename O>
class UnionObserver :
    public core::Observer<O>
{


  public:
    /**
     * Creates an observer with a pointer to the store to be notified when objects are erased.
     *
     */
    UnionObserver(
        S* store
    );

    /**
     * Informs the observer that an object has been added.
     */
    void
    notify_add(
        O* v
    ) override;


    /**
     * Informs the observer that an object has been erased.
     */
    void
    notify_erase(
        O* v
    ) override;

  private:
    /** Internal object store. */
    S* store_;
    /** Count of elements */
    std::unordered_map<O*, size_t> count;

};



template<typename S, typename O>
UnionObserver<S, O>::
UnionObserver(
    S* store
) :
    store_(store)
{
    assert_not_null(store_, "UnionObserver::constructor", "store");
}

template<typename S, typename O>
void
UnionObserver<S, O>::
notify_add(
    O* obj
)
{
    assert_not_null(obj, "UnionObserver::notify_add", "obj");

    auto el = ++(count[obj]);

    if (el == 1)
    {
        store_->add(obj); // @todo should we check if this worked?
    }
}


template<typename S, typename O>
void
UnionObserver<S, O>::
notify_erase(
    O* obj
)
{

    assert_not_null(obj, "UnionObserver::notify_erase", "obj");

    auto el = count.find(obj);

    if (el != count.end())
    {
        if (el->second == 1)
        {
            store_->erase(obj); // @todo should we check if this worked?
            count.erase(el);
        }

        else
        {
            el->second--;
        }
    }

}


}
}

#endif
