#ifndef PARSER_MLPASS1_PARSER_HPP
#define PARSER_MLPASS1_PARSER_HPP

#include "io/_impl/parser/mlpass1/actions.hpp"
#include "io/_impl/parser/mlpass1/grammar.hpp"

#include "io/_impl/MultilayerMetadata.hpp"
#include "networks/MultilayerNetwork.hpp"

namespace uu {
namespace net {
namespace parser {
namespace mlpass1 {

bool
parse(
    std::string const& file_name,
    MultilayerNetwork* net,
    MultilayerMetadata& meta
);

}
}
}
}

#endif
