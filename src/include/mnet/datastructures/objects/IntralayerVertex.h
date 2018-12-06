/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURES_OBJECTS_INTRALAYERVERTEX_H_
#define UU_MNET_DATASTRUCTURES_OBJECTS_INTRALAYERVERTEX_H_

#include <utility>
#include <string>
#include <memory>
#include <iostream>

namespace uu {
namespace net {

/**
 * An edge between two vertices in two layers.
 */
template <typename V, typename L>
class
    IntralayerVertex :
    public core::Object,
    public std::enable_shared_from_this<IntralayerVertex<V,L>>
{

  public:

    typedef std::pair<const V*,const L*> key_type;

    /** Constructor. */
    IntralayerVertex(
        const V* v,
        const L* l
    );

    static
    std::shared_ptr<IntralayerVertex<V,L>>
                                        create(
                                            const key_type& key
                                        );

    /** Output function, presenting a complete description of the edge. */

    std::string
    to_string(
    ) const;

    /** The vertex. */
    const V* v;

    /** The layer where the vertex is present. */
    const L* l;

    const key_type key;

};


template <typename V, typename L>
IntralayerVertex<V,L>::
IntralayerVertex(
    const V* v,
    const L* l
) :
    v(v),
    l(l),
    key(v,l)
{
    assert_not_null(v, "constructor", "v");
    assert_not_null(l, "constructor", "l");
}

template <typename V, typename L>
std::shared_ptr<IntralayerVertex<V,L>>
                                    IntralayerVertex<V,L>::
                                    create(
                                        const key_type& key
                                    )
{
    return std::make_shared<IntralayerVertex<V,L>>(key.first, key.second);
}


template <typename V, typename L>
std::string
IntralayerVertex<V,L>::
to_string(
) const
{
    return v->to_string() + "@" + l->to_string();
}


template <typename V, typename L>
std::ostream&
operator<<(std::ostream& os, const IntralayerVertex<V,L>& e)
{
    os << e.to_string();
    return os;
}

}
}

#endif
