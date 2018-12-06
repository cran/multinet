/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_SIMPLEINTERLAYEREDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_SIMPLEINTERLAYEREDGESTORE_H_

#include "mnet/datastructures/stores/InterlayerEdgeStore.h"
#include "net/datastructures/stores/SimpleEdgeStore.h"

namespace uu {
namespace net {

template <size_t N>
class
    SimpleInterlayerEdgeStore :
    public InterlayerEdgeStore<SimpleEdgeStore, N>
{
    typedef InterlayerEdgeStore<SimpleEdgeStore, N> super;

    using super::edge_stores_;

  public:
    SimpleInterlayerEdgeStore(EdgeDir dir);

};




template <size_t N>
SimpleInterlayerEdgeStore<N>::
SimpleInterlayerEdgeStore(EdgeDir dir)
{

    for (size_t i=0; i< N; i++)
    {
        for (size_t j=i+1; j< N; j++)
        {
            edge_stores_.at(i).at(j) = std::make_unique<SimpleEdgeStore>(dir);
        }
    }

}

}
}

#endif
