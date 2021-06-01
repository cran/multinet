#include "core/exceptions/assert_not_null.hpp"
#include "operations/union.hpp"
#include "networks/weight.hpp"

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
    
    core::assert_not_null(target, "flatten_weighted", "target");
    if (!is_weighted(target))
    {
        make_weighted(target);
    }
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
    core::assert_not_null(target, "flatten_unweighted", "target");
    for (auto g=begin; g!=end; ++g)
    {
        uu::net::graph_add(*g, target);
    }
}



}
}
