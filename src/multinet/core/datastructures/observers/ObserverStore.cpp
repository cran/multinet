#include "core/datastructures/observers/ObserverStore.h"
#include "core/exceptions/NullPtrException.h"

namespace uu {
namespace core {

void
ObserverStore::
register_observer(
    std::unique_ptr<core::GenericObserver> obs
)
{
    if (!obs.get())
    {
        throw NullPtrException("observer");
    }

    observers_.push_back(std::move(obs));
}

}
}
