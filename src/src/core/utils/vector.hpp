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
    std::size_t from,
    std::size_t to
);


std::vector<std::size_t>
seq(
    std::size_t from,
    std::size_t to
);

}
}

#include "vector.ipp"

#endif
