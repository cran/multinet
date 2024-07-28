#ifndef PARSER_MLPASS1_UTILITYFUNCTIONS_HPP
#define PARSER_MLPASS1_UTILITYFUNCTIONS_HPP

#include <string>
#include <vector>
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/exceptions/WrongFormatException.hpp"
#include "core/attributes/Attribute.hpp"
#include "core/utils/CSVReader.hpp"
#include "core/objects/Object.hpp"
#include "objects/Vertex.hpp"
#include "objects/Edge.hpp"
#include "networks/Network.hpp"
#include "networks/MultilayerNetwork.hpp"
#include "io/_impl/GraphMetadata.hpp"
#include "io/_impl/GraphIOFileSection.hpp"

namespace uu {
namespace net {
namespace parser {
namespace mlpass1 {

/**
 * Utility function to read ...
 * @param graph_type...
 * @param line_number current line in the input file, for error management
 */
void
read_layer_type(
    const std::string& graph_type,
    GraphType& meta
);

/**
 * Utility function to read an attribute definition.
 * @param store attribute store where the attribute values are saved
 * @param id identifier of the object for which the attributes should be read
 * @param attr_types vector with the expected types of attributes
 * @param attr_names vector with the expected names of attributes
 * @param line a vector of strings where the attribute values are stores
 * @param idx the index of the first attribute value in the line vector
 * @param line_number current line in the input file, for error management
 */
core::AttributeType
read_attr_type(
    const std::string& name
);

}
}
}
}

#endif
