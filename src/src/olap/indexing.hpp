#ifndef UU_OLAP_INDEXING_H_
#define UU_OLAP_INDEXING_H_

#include <vector>
#include <string>

namespace uu {
namespace net {

std::size_t
idx_to_pos(
    const std::vector<std::size_t>& index,
    const std::vector<std::size_t>& dimensions
);

}
}

#endif
