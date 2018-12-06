/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURES_STORES_LAYERVERTEXSTORE_H_
#define UU_MNET_DATASTRUCTURES_STORES_LAYERVERTEXSTORE_H_

#include <memory>
#include <unordered_map>
#include "core/datastructures/containers/SharedPtrSortedRandomSet.h"
#include "core/datastructures/observers/Observer.h"
#include "core/datastructures/observers/Subject.h"
#include "net/datastructures/objects/Vertex.h"
#include "mnet/datastructures/objects/IntralayerVertex.h"

namespace uu {
namespace net {

/**
 * A VertexStore allows to create, store, retrieve and erase a set of vertices.
 */
template<typename L>
class
    LayerVertexStore :
    public core::SharedPtrSortedRandomSet<const IntralayerVertex<L>>,
            public core::Subject<const IntralayerVertex<L>>
{

  private:

    typedef core::SharedPtrSortedRandomSet<const IntralayerVertex<L>> super;

  public:

    LayerVertexStore(
    );


    using super::add;


    const IntralayerVertex<L> *
    add(
        std::shared_ptr<const IntralayerVertex<L>> v
    ) override;


    /** Creates a new vertex and adds it to the store. */
    const IntralayerVertex<L> *
    add(
        const Vertex* v,
        const L* l
    );


    bool
    erase(
        const IntralayerVertex<L> * const v
    ) override;


    /**
     * Returns a short string summary of this store, for example including
     * the number of vertices it contains.
     */
    virtual
    std::string
    summary(
    ) const;

};




LayerVertexStore<L>::
LayerVertexStore(
)
{
}


const IntralayerVertex<L> *
LayerVertexStore<L>::
add(
    std::shared_ptr<const IntralayerVertex<L>> v
)
{
    assert_not_null(v, "add", "v");

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_add(v.get());
    }

    // Return a nullptr if a vertex with this name exists.
    const IntralayerVertex<L> * res = super::add(v);

    if (!res)
    {
        return nullptr;
    }

    return res;
}

const IntralayerVertex<L> *
LayerVertexStore<L>::
add(
    const Vertex* v,
    const L* l
)
{
    if (!get(v, l))
    {
        return add(Vertex::create(vertex_name));
    }

    else
    {
        return nullptr;
    }
}


bool
LayerVertexStore<L>::
erase(
    const Vertex * const vertex
)
{
    if (!vertex)
    {
        throw core::NullPtrException("vertex in erase(vertex)");
    }

    // Notify the observers.
    for (auto obs: observers)
    {
        obs->notify_erase(vertex);
    }

    bool res = super::erase(vertex);

    if (!res)
    {
        return false;
    }

    return true;
}


}
}

#endif
