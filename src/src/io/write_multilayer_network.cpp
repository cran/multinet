#include "io/write_multilayer_network.hpp"

namespace uu {
namespace net {

void
write_multilayer_network(
    const MultilayerNetwork* net,
    const std::string& outfile,
    char separator
)
{
    write_multilayer_network(net, net->layers()->begin(), net->layers()->end(), outfile, separator);
}


}
}

