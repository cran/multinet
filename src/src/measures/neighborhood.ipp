#include <vector>
#include <unordered_set>
#include <string>
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/math.hpp"
#include "networks/_impl/containers/GenericObjectList.hpp"
#include "measures/degree.hpp"

namespace uu {
namespace net {


template <typename LayerIterator>
GenericObjectList<Vertex>
neighbors(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "neighbors", "v");

    GenericObjectList<Vertex> res;

    for (auto layer=first; layer!=last; ++layer)
    {
        for (auto vertex: *(*layer)->edges()->neighbors(v, mode))
        {
            res.add(vertex);
        }
    }

    return res;
}


template <typename M, typename LayerIterator>
GenericObjectList<Vertex>
xneighbors(
    const M* net,
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "xneighbors", "v");

    GenericObjectList<Vertex> res;
    std::unordered_set<std::string> layers;

    for (auto layer=first; layer!=last; ++layer)
    {
        layers.insert((*layer)->name);

        for (auto vertex: *(*layer)->edges()->neighbors(v, mode))
        {
            res.add(vertex);
        }
    }

    for (auto layer: *net->layers())
    {
        if (layers.find(layer->name) != layers.end())
        {
            continue;
        }

        for (auto vertex: *layer->edges()->neighbors(v, mode))
        {
            res.erase(vertex);
        }
    }

    return res;
}



}
}

