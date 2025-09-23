#ifndef UU_CORE_ARULES_GENERATESUBSETS_H_
#define UU_CORE_ARULES_GENERATESUBSETS_H_

#include <vector>
#include <cstddef>

namespace uu {
namespace core {

std::vector<std::vector<std::size_t>>
generate_subsets(
                 const std::vector<std::size_t>& items
                 );

}
}

#endif
