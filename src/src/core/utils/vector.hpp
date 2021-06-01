#ifndef UU_CORE_UTILS_VECTOR_H_
#define UU_CORE_UTILS_VECTOR_H_

#include <stdlib.h>
#include <vector>

namespace uu {
namespace core {

/**
 * Moves the element at position from to position to, shifting the other elements accordingly
 */
template <typename E>
void
move(
    std::vector<E>& vec,
    size_t from,
    size_t to
);


std::vector<size_t>
seq(
    size_t from,
    size_t to
);

}
}

#include "vector.ipp"

#endif
