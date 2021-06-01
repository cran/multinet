#ifndef UU_NET_DATASTRUCTURE_OBSERVERS_NOLOOPCHECKOBSERVER2_H_
#define UU_NET_DATASTRUCTURE_OBSERVERS_NOLOOPCHECKOBSERVER2_H_

#include "core/observers/Observer.hpp"
#include "objects/Edge.hpp"

namespace uu {
namespace net {

/**
 * This observer checks that the vertices at the end of new edges are not the same (that is, there are no loops).
 */
class NoLoopCheckObserver2 :
    public core::Observer<const Edge>
{

  public:

    /**
     * Creates an observer with a pointer to the vertex store where vertices are expected to be.
     *
     */
    NoLoopCheckObserver2();

    /**
     * Informs the observer that an edge has been added.
     */
    void
    notify_add(
        const Edge* e
    ) override;


    /**
     * Informs the observer that an edge has been erased.
     */
    void
    notify_erase(
        const Edge* e
    ) override;

};


}
}

#endif
