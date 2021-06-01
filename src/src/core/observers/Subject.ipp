#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace core {

template <typename OT>
void
Subject<OT>::
attach(
    core::Observer<OT>* obs
)
{
    assert_not_null(obs, "Subject::attach", "obs");
    observers.push_back(obs);
}

}
}
