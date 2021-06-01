
#ifndef UU_OPERATIONS_SHUFFLE_H_
#define UU_OPERATIONS_SHUFFLE_H_

#include <memory>
#include "networks/time.hpp"

namespace uu {
namespace net {


/**
* @brief Shuffle edges in each layer.
* @param net a multilayer network
* @param num number of shufflings
**/
template <class M>
void
shuffle(
    M* net,
    size_t num
);

}
}

#include "shuffle.ipp"

#endif
