#ifndef UU_IO_WRITEMULTILAYERCOMMUNITIES_H_
#define UU_IO_WRITEMULTILAYERCOMMUNITIES_H_

#include <string>
#include <memory>
#include "community/CommunityStructure.hpp"
#include "core/utils/string.hpp"
#include "io/_impl/read_common.hpp"

namespace uu {
namespace net {


template <typename M>
void
write_multilayer_communities(
    CommunityStructure<M>* communities,
    const std::string& output_file,
    char separator = ','
);

}
}

#include "write_multilayer_communities.ipp"

#endif
