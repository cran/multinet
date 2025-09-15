#ifndef UU_CORE_ARULES_GENERATESUBSETS_H_
#define UU_CORE_ARULES_GENERATESUBSETS_H_

#include <vector>

namespace uu {
namespace core {

std::vector<std::vector<size_t>>
generate_subsets(
                 const std::vector<size_t>& items
                 );

}
}

#endif
