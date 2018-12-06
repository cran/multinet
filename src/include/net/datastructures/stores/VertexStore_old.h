/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_VERTEXSTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_VERTEXSTORE_H_

#include <memory>
#include <unordered_map>
#include "core/datastructures/containers/LabeledSharedPtrSortedRandomSet.h"
#include "core/datastructures/observers/Observer.h"
#include "core/datastructures/observers/Subject.h"
#include "net/datastructures/objects/Vertex.h"

namespace uu {
namespace net {

/**
 * A VertexStore allows to create, store, retrieve and erase a set of vertices.
 */
class
    VertexStore :
    public core::LabeledSharedPtrSortedRandomSet<const Vertex>,
    public core::Subject<const Vertex>
{

  private:

    typedef core::LabeledSharedPtrSortedRandomSet<const Vertex> super;

  public:
    VertexStore(
    );

    using super::add;

    const Vertex *
    add(
        std::shared_ptr<const Vertex> vertex
    ) override;

    /** Creates a new vertex and adds it to the store. */
    const Vertex *
    add(
        std::string vertex_name
    );


    bool
    erase(
        const Vertex * const vertex
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

}
}

#endif
