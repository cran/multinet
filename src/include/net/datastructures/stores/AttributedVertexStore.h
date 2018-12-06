/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDVERTEXSTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDVERTEXSTORE_H_

#include "net/datastructures/stores/Attributed.h"
#include "net/datastructures/stores/VertexStore.h"
#include "net/datastructures/stores/Attributes.h"

namespace uu {
namespace net {

/**
 * An attributed vertex store (AttrVertexStore) is a vertex store that can also associate
 * attribute values to its vertices.
 *
 * A must be an attribute store, itself templatized to work with vertices.
 */
template <typename A = Attributes<const Vertex>>
class
    AttributedVertexStore :
    public Attributed<A>,
    public VertexStore
{

    using Attributed<A>::attributes_;

  public:
    AttributedVertexStore(
        std::unique_ptr<A> attr
    );

    /**
     * Returns a short string summary of this store, for example including
     * the number of vertices it contains.
     */
    virtual
    std::string
    summary(
    ) const;

};


template <typename A>
AttributedVertexStore<A>::
AttributedVertexStore(
    std::unique_ptr<A> attr
) :
    Attributed<A>(std::move(attr))
{
    attach(this->attr());
}


template <typename A>
std::string
AttributedVertexStore<A>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" vertex (":" vertices (") +
        attributes_->summary() + ")";
    return summary;
}

}
}

#endif
