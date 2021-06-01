#ifndef UU_CORE_OBSERVERS_OBSERVERSTORE_H_
#define UU_CORE_OBSERVERS_OBSERVERSTORE_H_


#include <vector>
#include <memory>
#include "core/observers/GenericObserver.hpp"

namespace uu {
namespace core {

/**
 * Observer/Subject pattern: a Subject can store several Observers, so that they can be
 * notified when something happens (erase or add events).
 */
class ObserverStore
{
  public:

    virtual
    ~ObserverStore()
    {

    }

    void
    register_observer(
        std::unique_ptr<core::GenericObserver> obs
    );

  protected:

    std::vector<std::unique_ptr<GenericObserver>> observers_;

};

}
}

#endif
