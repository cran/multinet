
#include <unordered_map>
#include <vector>
#include <memory>
//#include "networks/Network.hpp"

namespace uu {
namespace net {

template <typename VertexIterator>
const Vertex*
GMetaNetwork::
add(
    VertexIterator begin,
    VertexIterator end
)
{
    auto v = w->vertices()->add(std::to_string(order));
    order++;
    mapping[v];

    for (auto u = begin; u != end; ++u)
    {
        mapping[v].insert(*u);
        reverse_mapping[*u] = v;
    }

    return v;
}



}
}

