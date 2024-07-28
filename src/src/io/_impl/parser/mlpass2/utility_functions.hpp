#ifndef PARSER_MLPASS2_UTILITYFUNCTIONS_HPP
#define PARSER_MLPASS2_UTILITYFUNCTIONS_HPP

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
namespace mlpass2 {

template <typename ASPtr, typename EPtr>
void
read_attr_values(
    ASPtr store,
    EPtr element,
    const std::vector<core::Attribute>& attributes,
    const std::vector<std::string>& line,
    size_t from_idx
);

/* This function assumes that all the attribute values are present.
 */
template <typename ASPtr, typename EPtr>
void
read_attr_values(
    ASPtr store,
    EPtr element,
    const std::vector<core::Attribute>& attributes,
    const std::vector<std::string>& line,
    size_t from_idx
)
{
    if (line.size()-from_idx != attributes.size())
    {
        std::stringstream ss;
        ss << "\"" <<
           line.at(0);

        for (size_t i = 1; i < from_idx; i++)
        {
            ss << "," << line.at(i);
        }

        ss << "...\" " << attributes.size() << " attribute value(s) expected";
        throw core::WrongFormatException(ss.str());
    }

    for (size_t i=from_idx; i<from_idx+attributes.size(); i++)
    {
        switch (attributes.at(i-from_idx).type)
        {
        case core::AttributeType::DOUBLESET:
        case core::AttributeType::INTEGERSET:
        case core::AttributeType::STRINGSET:
        case core::AttributeType::TIMESET:
            store->add_as_string(element, attributes.at(i-from_idx).name, line.at(i));
            break;

        case core::AttributeType::NUMERIC:
        case core::AttributeType::DOUBLE:
        case core::AttributeType::INTEGER:
        case core::AttributeType::STRING:
        case core::AttributeType::TIME:
        case core::AttributeType::TEXT:
            store->set_as_string(element, attributes.at(i-from_idx).name, line.at(i));
            break;

        }
    }
}

}
}
}
}

#endif
