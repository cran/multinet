#include "core/exceptions/DuplicateElementException.hpp"
#include "core/exceptions/WrongFormatException.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "io/read_multilayer_network.hpp"
#include "io/read_network.hpp"
#include "io/_impl/parser/mlpass1/parser.hpp"
#include "io/_impl/parser/mlpass2/parser.hpp"

#include <sstream>


namespace uu {
namespace net {

std::unique_ptr<MultilayerNetwork>
read_multilayer_network(
    const std::string& infile,
    const std::string& name,
    bool align
)
{

    // Read metadata
    auto net = std::make_unique<MultilayerNetwork>(name);
    MultilayerMetadata meta;
    
    bool res = uu::net::parser::mlpass1::parse(infile, net.get(), meta);
    
    if (!res) throw core::WrongFormatException("unknown file format error");
    
    uu::net::parser::mlpass2::parse(infile, net.get(), meta);
    
    if (align)
    {
        for (auto layer: *net->layers())
        {
            for (auto a: *net->actors())
            {
                layer->vertices()->add(a);
            }
        }
    }
    
    return net;

}


}
}
