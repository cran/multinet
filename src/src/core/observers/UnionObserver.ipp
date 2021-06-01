#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace core {


template<typename S>
UnionObserver<S>::
UnionObserver(
    S* store
) :
    store_(store)
{
    assert_not_null(store_, "UnionObserver::constructor", "store");
}

template<typename S>
void
UnionObserver<S>::
notify_add(
    typename S::value_type* obj
)
{
    assert_not_null(obj, "UnionObserver::notify_add", "obj");

    auto el = ++(count[obj]);

    if (el == 1)
    {
        store_->add(obj); // @todo should we check if this returns true?
    }
}


template<typename S>
void
UnionObserver<S>::
notify_erase(
    typename S::value_type* obj
)
{

    assert_not_null(obj, "UnionObserver::notify_erase", "obj");

    auto el = count.find(obj);

    if (el != count.end())
    {
        if (el->second == 1)
        {
            store_->erase(obj); // @todo should we check if this returns true?
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

