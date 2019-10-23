/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDMULTIEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_ATTRIBUTEDMULTIEDGESTORE_H_

#include <unordered_set>
#include "net/datastructures/stores/MultiEdgeStore.hpp"
#include "net/datastructures/stores2/Attributed.hpp"
#include "net/datastructures/stores2/Attributes.hpp"

namespace uu {
namespace net {


/**
 * An attributed edge store (AttrMultiEdgeStore) is an edge store that can also associate
 * attribute values to its vertices.
 *
 * A must be an attribute store, itself templatized to work with edges.
 */
template <typename A = Attributes<const Edge>>
class AttributedMultiEdgeStore :
    public MultiEdgeStore,
    public Attributed<A>
{

  public:

    /**
     * Constructor.
     */

    AttributedMultiEdgeStore(
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
AttributedMultiEdgeStore<A>::
AttributedMultiEdgeStore(
    EdgeDir dir,
    std::unique_ptr<A> attr
) :
    MultiEdgeStore(dir),
    Attributed<A>(std::move(attr))
{
    attach(this->attr());
}

template <typename A>
std::string
AttributedMultiEdgeStore<A>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" multiedge (":" multiedges (") +
        attributes_->summary() + ")";
    return summary;
}

}
}

#endif
