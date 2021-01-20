#include "operations/union.hpp"

namespace uu {
namespace net {

template <typename LayerIterator, typename W>
void
flatten_weighted(
    LayerIterator begin,
    LayerIterator end,
    W* target
)
{

    for (auto layer=begin; layer!=end; ++layer)
    {
        // force actors? @todo

        weighted_graph_add(*layer,target);
    }
}

template <typename LayerIterator, typename G>
void
flatten_unweighted(
    LayerIterator begin,
    LayerIterator end,
    G* target
)
{
    for (auto g=begin; g!=end; ++g)
    {
        uu::net::graph_add(*g, target);
    }
}



}
}
