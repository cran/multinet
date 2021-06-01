#ifndef UU_IO_READTEMPORALNETWORK_H_
#define UU_IO_READTEMPORALNETWORK_H_

#include <string>
#include <memory>
#include "networks/time.hpp"
#include "io/_impl/read_common.hpp"

namespace uu {
namespace net {

std::unique_ptr<Network>
read_temporal_network(
    const std::string& infile,
    const std::string& name,
    char separator = ','
);

}
}

#endif
