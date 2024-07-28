#ifndef UU_IO_READMULTILAYERNETWORK_H_
#define UU_IO_READMULTILAYERNETWORK_H_

#include <string>
#include <memory>
#include "networks/MultilayerNetwork.hpp"

namespace uu {
namespace net {

std::unique_ptr<MultilayerNetwork>
read_multilayer_network(
    const std::string& infile,
    const std::string& name,
    bool align = false
);




}
}

#endif
