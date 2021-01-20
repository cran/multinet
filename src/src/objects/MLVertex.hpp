#ifndef UU_OBJECTS_MLVERTEX_H_
#define UU_OBJECTS_MLVERTEX_H_

#include <string>
#include <memory>
#include <iostream>
#include "core/exceptions/assert_not_null.hpp"
#include "objects/Vertex.hpp"
#include "networks/Network.hpp"

namespace uu {
namespace net {

/**
 * M is a multilayer network
 */
template<typename M>
class
    MLVertex :
    public core::Object,
    public std::enable_shared_from_this<MLVertex<M>>
{

  public:

    typedef std::pair<const typename M::vertex_type*, const typename M::layer_type*> key_type;

    /** Constructor. */
    MLVertex(
        const typename M::vertex_type* v,
        const typename M::layer_type* l
    );

    MLVertex(
    );

    bool
    operator==(
        const MLVertex<M>& v
    ) const;

    bool
    operator<(
        const MLVertex<M>& v
    ) const;

    bool
    operator!=(
        const MLVertex<M>& v
    ) const;

    bool
    operator>(
        const MLVertex<M>& v
    ) const;

    /** Output function, presenting a complete description of the edge. */
    std::string
    to_string(
    ) const;

    /** The vertex at the first end of this edge. */
    const typename M::vertex_type* v;

    /** The vertex at the first end of this edge. */
    const typename M::layer_type* l;

    key_type key;

};


template<typename M>
std::ostream&
operator<<(std::ostream& os, const MLVertex<M>& v);


template<typename M>
MLVertex<M>::
MLVertex(
    const typename M::vertex_type* v,
    const typename M::layer_type* l
) :
    v(v),
    l(l),
    key(v,l)
{
    core::assert_not_null(v, "MLVertex<M>::constructor", "v");
    core::assert_not_null(l, "MLVertex<M>::constructor", "l");
}

template<typename M>
MLVertex<M>::
MLVertex(
) :
    v(nullptr),
    l(nullptr),
    key(v,l)
{
}


template<typename M>
bool
MLVertex<M>::
operator==(
    const MLVertex<M>& mlv
) const
{
    return v==mlv.v && l==mlv.l;
}

template<typename M>
bool
MLVertex<M>::
operator<(
    const MLVertex<M>& mlv
) const
{
    return v<mlv.v || (v==mlv.v && l<mlv.l);
}

template<typename M>
bool
MLVertex<M>::
operator!=(
    const MLVertex<M>& mlv
) const
{
    return v!=mlv.v || l!=mlv.l;
}

template<typename M>
bool
MLVertex<M>::
operator>(
    const MLVertex<M>& mlv
) const
{
    return v>mlv.v || (v==mlv.v && l>mlv.l);
}

template<typename M>
std::string
MLVertex<M>::
to_string(
) const
{
    return v->to_string() + "@" + l->name;
}

template<typename M>
std::ostream&
operator<<(std::ostream& os, const MLVertex<M>& v)
{
    os << v.to_string();
    return os;
}


}
}

#endif
