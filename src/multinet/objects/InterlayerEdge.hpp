/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURES_OBJECTS_INTERLAYEREDGE_H_
#define UU_MNET_DATASTRUCTURES_OBJECTS_INTERLAYEREDGE_H_

#include <string>
#include <memory>
#include <iostream>
#include "core/exceptions/assert_not_null.hpp"
#include "objects/EdgeDir.hpp"

namespace uu {
namespace net {

//template<typename V, typename L>
//using InterlayerEdge = GenericEdge<IntralayerVertex<V,L>>;


template<typename V, typename L>
class
    InterlayerEdge :
    public core::Object,
    public std::enable_shared_from_this<InterlayerEdge<V,L>>
{

  public:

    typedef std::tuple<const V*, const L*, const V*, const L*> key_type;
    
    /** Constructor. */
    InterlayerEdge(
        const V* v1,
        const L* l1,
        const V* v2,
        const L* l2,
        EdgeDir dir
    );

    static
    std::shared_ptr<InterlayerEdge<V,L>>
                                      create(
                                          const V* v1,
                                          const L* l1,
                                          const V* v2,
                                          const L* l2,
                                          EdgeDir dir
                                      );

    /** Output function, presenting a complete description of the edge. */
    std::string
    to_string(
    ) const;

    /** The vertex at the first end of this edge. */
    const V* v1;

    /** The vertex at the first end of this edge. */
    const L* l1;

    /** The vertex at the second end of this edge. */
    const V* v2;

    /** The vertex at the second end of this edge. */
    const L* l2;

    const key_type key;
    
    /** Edge directionality. */
    const EdgeDir dir;

};


template<typename V, typename L>
std::ostream&
operator<<(std::ostream& os, const InterlayerEdge<V,L>& e);


template<typename V, typename L>
InterlayerEdge<V,L>::
InterlayerEdge(
    const V* v1,
    const L* l1,
    const V* v2,
    const L* l2,
    EdgeDir dir
) :
    v1(v1),
    l1(l1),
    v2(v2),
    l2(l2),
    key(v1,l1,v2,l2),
    dir(dir)
{
    core::assert_not_null(v1, "constructor", "v1");
    core::assert_not_null(l1, "constructor", "l1");
    core::assert_not_null(v2, "constructor", "v2");
    core::assert_not_null(l2, "constructor", "l2");
}

template<typename V, typename L>
std::shared_ptr<InterlayerEdge<V,L>>
                                  InterlayerEdge<V,L>::
                                  create(
                                      const V* v1,
                                      const L* l1,
                                      const V* v2,
                                      const L* l2,
                                      EdgeDir dir
                                  )
{
    return std::make_shared<InterlayerEdge<V,L>>(v1,l1,v2,l2,dir);
}


template<typename V, typename L>
std::string
InterlayerEdge<V,L>::
to_string(
) const
{
    switch (dir)
    {
    case EdgeDir::DIRECTED:
        return "(" + v1->to_string() +
               "@" + l1->to_string() +
               " -> " + v2->to_string() +
               "@" + l2->to_string() + ")";

    case EdgeDir::UNDIRECTED:
        return "(" + v1->to_string() +
               "@" + l1->to_string() +
               " -- " + v2->to_string() +
               "@" + l2->to_string() + ")";
    }
}


template<typename V, typename L>
std::ostream&
operator<<(std::ostream& os, const InterlayerEdge<V,L>& e)
{
    os << e.to_string();
    return os;
}


}
}

#endif
