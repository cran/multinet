#ifndef UU_MEASURES_RELEVANCE_H_
#define UU_MEASURES_RELEVANCE_H_

#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {


template <typename M, typename LayerIterator>
double
relevance(
    const M* mnet,
    LayerIterator first,
    LayerIterator last,
    const Vertex* actor,
    EdgeMode mode = EdgeMode::INOUT
);

template <typename M, typename LayerIterator>
double
xrelevance(
    const M* mnet,
    LayerIterator first,
    LayerIterator last,
    const Vertex* actor,
    EdgeMode mode = EdgeMode::INOUT
);


}
}

#include "relevance.ipp"

#endif
