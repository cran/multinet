/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURE_UNIONOBSERVER_H_
#define UU_MNET_DATASTRUCTURE_UNIONOBSERVER_H_

#include "core/exceptions/OperationNotSupportedException.h"
#include "core/exceptions/DuplicateElementException.h"
#include "core/datastructures/observers/Observer.h"

namespace uu {
namespace net {

/**
 *
 */
template<typename T, typename Store>
class UnionObserver :
    public core::Observer<T>
{

  public:

    UnionObserver(Store* store) : store_(store)
    {

    }

    /**
     * Informs the graph that a vertex has been added to its vertex store.
     */
    void
    notify_add(
        T* el
    ) override;


    /**
     * Informs the graph that a vertex has been erased from its vertex store.
     */
    void
    notify_erase(
        T* el
    ) override;

  private:

    Store* store_;
};


template<typename T, typename Store>
void
UnionObserver<T,Store>::
notify_add(
    T* el
)
{
    if (store_->contains(el))
    {
        throw core::DuplicateElementException("element already present");
    }

    store_->add(el);
}


template<typename T, typename Store>
void
UnionObserver<T,Store>::
notify_erase(
    T* el
)
{
    store_->erase(el);
}


}
}

#endif
