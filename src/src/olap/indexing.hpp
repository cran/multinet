#ifndef UU_OLAP_INDEXING_H_
#define UU_OLAP_INDEXING_H_

#include <vector>
#include <string>

namespace uu {
namespace net {

size_t
idx_to_pos(
    const std::vector<size_t>& index,
    const std::vector<size_t>& dimensions
);

}
}

#endif
