/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */
#include "net/datastructures/graphs/AttributedEmptyGraph.h"

namespace uu {
namespace net {

std::unique_ptr<AttributedEmptyGraph>
create_attributed_empty_graph(
    const std::string& name)
{

    using VA = Attributes<Vertex, UserDefinedAttrs<Vertex>>;
    auto v_attr = std::make_unique<VA>();
    auto vs = std::make_unique<AttributedVertexStore<VA>>(std::move(v_attr));

    auto es = std::make_unique<EmptyEdgeStore>();

    GraphType t;

    auto graph = std::make_unique<AttributedEmptyGraph>(name, t, std::move(vs), std::move(es));

    return graph;
}

}
}

