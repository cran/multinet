#ifndef UU_IO_READWEIGHTEDNETWORK_H_
#define UU_IO_READWEIGHTEDNETWORK_H_

#include <string>
#include <memory>
#include "networks/weight.hpp"
#include "io/_impl/read_common.hpp"

namespace uu {
namespace net {

std::unique_ptr<Network>
read_weighted_network(
    const std::string& infile,
    const std::string& name,
    char separator = ','
);

}
}

#endif
