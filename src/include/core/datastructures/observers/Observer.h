/**
 * History:
 * - 2018.03.09 file created
 */

#ifndef UU_CORE_DATASTRUCTURES_OBSERVERS_OBSERVER_H_
#define UU_CORE_DATASTRUCTURES_OBSERVERS_OBSERVER_H_

#include "core/datastructures/observers/GenericObserver.h"

namespace uu {
namespace core {

/**
 * This is an Observer, as used in the observer design pattern, that can be notified by a
 * Subject about an object being erased or added.
 */
template <typename OT>
class
    Observer : public GenericObserver
{

  public:

    virtual ~Observer() = default;
    
    virtual void
    notify_erase(
        OT* const
    ) = 0;

    virtual void
    notify_add(
        OT* const
    ) = 0;

};

}
}

#endif
