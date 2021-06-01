#ifndef UU_NET_DATASTRUCTURE_OBSERVERS_PROPAGATEOBSERVER_H_
#define UU_NET_DATASTRUCTURE_OBSERVERS_PROPAGATEOBSERVER_H_

#include "core/observers/Observer.hpp"
#include "core/exceptions/NullPtrException.hpp"

namespace uu {
namespace net {

template<typename S>
class VCubeObserver :
    public core::Observer<const Vertex>
{

  public:

    /**
     * Creates an observer with a pointer to the store to be notified when vertices are changed.
     *
     */
    VCubeObserver(
        const VCube* vcube,
        S* store
    );

    /**
     * Informs the observer that an object has been added.
     */
    void
    notify_add(
        const Vertex* v
    ) override;


    /**
     * Informs the observer that an object has been erased.
     */
    void
    notify_erase(
        const Vertex* v
    ) override;

  private:

    const VCube* vcube_;

    /** Store to be notified. */
    S* store_;

};



template<typename S>
VCubeObserver<S>::
VCubeObserver(
    const VCube* vcube,
    S* store
) :
    vcube_(vcube), store_(store)
{
    core::assert_not_null(vcube, "VCubeObserver::constructor", "vcube");
    core::assert_not_null(store, "VCubeObserver::constructor", "store");

}

template<typename S>
void
VCubeObserver<S>::
notify_add(
    const Vertex* obj
)
{
    core::assert_not_null(obj, "VCubeObserver::notify_add", "obj");
}


template<typename S>
void
VCubeObserver<S>::
notify_erase(
    const Vertex* obj
)
{
    core::assert_not_null(obj, "VCubeObserver::notify_erase", "obj");

    store_->erase(vcube_, obj);
}


}
}

#endif
