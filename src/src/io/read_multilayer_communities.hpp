#ifndef UU_IO_READMULTILAYERCOMMUNITIES_H_
#define UU_IO_READMULTILAYERCOMMUNITIES_H_

#include <string>
#include <memory>
#include "community/CommunityStructure.hpp"
#include "core/utils/string.hpp"
#include "io/_impl/read_common.hpp"

namespace uu {
namespace net {


template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    read_multilayer_communities(
                                        const std::string& infile,
                                        const M* net,
                                        char separator = ','
                                    );

}
}

#include "read_multilayer_communities.ipp"

#endif
