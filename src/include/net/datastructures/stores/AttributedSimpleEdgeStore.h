/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDSIMPLEEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDSIMPLEEDGESTORE_H_

#include <unordered_set>
#include "net/datastructures/stores/SimpleEdgeStore.h"
#include "net/datastructures/stores/Attributed.h"
#include "net/datastructures/stores/Attributes.h"

namespace uu {
namespace net {


/**
 * An attributed edge store (AttributedSimpleEdgeStore) is an edge store that can also associate
 * attribute values to its vertices.
 *
 * A must be an attribute store, itself templatized to work with edges.
 */
template <typename A = Attributes<const Edge>>
class AttributedSimpleEdgeStore :
    public SimpleEdgeStore,
    public Attributed<A>
{

  public:

    /**
     * Constructor.
     */

    AttributedSimpleEdgeStore(
        EdgeDir dir,
        std::unique_ptr<A> attr
    );

    /**
     * Returns a short string summary of this store, for example including
     * the number of edges it contains.
     */
    virtual
    std::string
    summary(
    ) const;

  protected:

    using Attributed<A>::attributes_;

};


template <typename A>
AttributedSimpleEdgeStore<A>::
AttributedSimpleEdgeStore(
    EdgeDir dir,
    std::unique_ptr<A> attr
) :
    SimpleEdgeStore(dir),
    Attributed<A>(std::move(attr))
{
    attach(this->attr());
}

template <typename A>
std::string
AttributedSimpleEdgeStore<A>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" edge (":" edges (") +
        attributes_->summary() + ")";
    return summary;
}

}
}

#endif
