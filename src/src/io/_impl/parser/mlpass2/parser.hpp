#ifndef PARSER_MLPASS2_PARSER_HPP
#define PARSER_MLPASS2_PARSER_HPP

#include "io/_impl/parser/mlpass2/actions.hpp"
#include "io/_impl/parser/mlpass2/grammar.hpp"

#include "io/_impl/MultilayerMetadata.hpp"
#include "networks/MultilayerNetwork.hpp"

namespace uu {
namespace net {
namespace parser {
namespace mlpass2 {

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
