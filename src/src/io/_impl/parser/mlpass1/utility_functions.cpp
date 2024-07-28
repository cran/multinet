#include "io/_impl/parser/mlpass1/utility_functions.hpp"
#include "core/utils/string.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/WrongFormatException.hpp"

namespace uu {
namespace net {
namespace parser {
namespace mlpass1 {

void
read_layer_type(
    const std::string& graph_type,
    GraphType& layer
)
{
    if (graph_type == "undirected")
    {
        layer.is_directed = false;
    }

    else if (graph_type == "directed")
    {
        layer.is_directed = true;
    }

    else if (graph_type == "loops")
    {
        layer.allows_loops = true;
    }

    else if (graph_type == "no loops")
    {
        layer.allows_loops = false;
    }

    else
    {
        throw core::WrongFormatException("unsupported layer type: " + graph_type);
    }
}

core::AttributeType
read_attr_type(
    const std::string& attr_type_name
)
{
    if (attr_type_name=="double")
    {
        return core::AttributeType::DOUBLE;
    }

    else if (attr_type_name=="integer")
    {
        return core::AttributeType::INTEGER;
    }

    else if (attr_type_name=="string")
    {
        return core::AttributeType::STRING;
    }

    else if (attr_type_name == "time")
    {
        return core::AttributeType::TIME;
    }

    else
    {
        throw core::WrongFormatException("Unsupported attribute type: " + attr_type_name);
    }

    return core::AttributeType::INTEGER; // Never here
}

}
}
}
}
