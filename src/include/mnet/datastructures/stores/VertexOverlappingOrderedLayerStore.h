/**

 */

#ifndef UU_MNET_DATASTRUCTURES_STORES_VERTEXOVERLAPPINGORDEREDLAYERSTORE_H_
#define UU_MNET_DATASTRUCTURES_STORES_VERTEXOVERLAPPINGORDEREDLAYERSTORE_H_

#include <vector>
#include "core/datastructures/containers/LabeledUniquePtrSortedRandomSet.h"

namespace uu {
namespace net {

template <typename Graph>
class VertexOverlappingOrderedLayerStore :
    private core::LabeledUniquePtrSortedRandomSet<Graph>,
    private std::vector<Graph*>
{

  private:

    typedef core::LabeledUniquePtrSortedRandomSet<Graph> super1;
    typedef std::vector<Graph*> super2;

  public:

    using super1::size;
    using super1::erase;
    using super1::get;
    using super2::begin;
    using super2::end;

    VertexOverlappingOrderedLayerStore()
    {}

    Graph*
    push_back(
        std::unique_ptr<Graph>
    );


    Graph*
    get_at_index(
        size_t idx
    );

    const Graph*
    get_at_index(
        size_t idx
    ) const;

    void
    erase(
        const Vertex* v
    );

    std::string
    summary(
    ) const
    {
        size_t s = size();
        return std::to_string(s) + (s==1?" layer":" layers");
    }

};


template <typename Graph>
Graph*
VertexOverlappingOrderedLayerStore<Graph>::
push_back(
    std::unique_ptr<Graph> g
)
{
    Graph* g_rawptr = super1::add(std::move(g));
    super2::push_back(g_rawptr);
    return g_rawptr;
}

template <typename Graph>
Graph*
VertexOverlappingOrderedLayerStore<Graph>::
get_at_index(
    size_t idx
)
{
    return super2::at(idx);
}

template <typename Graph>
const Graph*
VertexOverlappingOrderedLayerStore<Graph>::
get_at_index(
    size_t idx
) const
{
    return super2::at(idx);
}


template <typename Graph>
void
VertexOverlappingOrderedLayerStore<Graph>::
erase(
    const Vertex* v
)
{
    for (auto g=begin(); g!=end(); ++g)
    {
        (*g)->vertices()->erase(v);
    }
}

}
}

#endif

