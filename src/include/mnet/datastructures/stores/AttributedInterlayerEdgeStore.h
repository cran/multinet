/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDINTERLAYEREDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDINTERLAYEREDGESTORE_H_

#include "mnet/datastructures/stores/InterlayerEdgeStore.h"
#include "net/datastructures/stores/AttributedSimpleEdgeStore.h"

namespace uu {
namespace net {

class
    AttributedDynamicInterlayerEdgeStore :
    public InterlayerEdgeStore<TemporalSimpleEdgeStore, N>
{
    typedef InterlayerEdgeStore<TemporalSimpleEdgeStore, N> super;

    using super::edge_stores_;

  public:
    TemporalInterlayerEdgeStore(EdgeDir dir);

};




template <size_t N>
TemporalInterlayerEdgeStore<N>::
TemporalInterlayerEdgeStore(EdgeDir dir)
{

    for (size_t i=0; i< N; i++)
    {
        for (size_t j=i+1; j< N; j++)
        {
            using A = uu::net::Attributes<uu::net::Edge, uu::net::Times<uu::net::Edge>>;
            auto w_attr = std::make_unique<A>();
            edge_stores_.at(i).at(j) = std::make_unique<TemporalSimpleEdgeStore>(dir, std::move(w_attr));
        }
    }

}

}
}

#endif
