/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_OBJECTS_GENERICEDGE_H_
#define UU_NET_DATASTRUCTURES_OBJECTS_GENERICEDGE_H_

#include <string>
#include <memory>
#include <iostream>
#include "objects/EdgeDir.hpp"
#include "core/datastructures/objects/Object.hpp"
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

/**
 * An edge between two actors.
 */
template<typename V>
class
    GenericEdge :
    public core::Object,
    public std::enable_shared_from_this<GenericEdge<V>>
{

  public:

    /** Constructor. */
    GenericEdge(
        const V* v1,
        const V* v2,
        EdgeDir dir
    );

    static
    std::shared_ptr<GenericEdge>
    create(
        const V* v1,
        const V* v2,
        EdgeDir dir
    );

    /** Output function, presenting a complete description of the edge. */
    std::string
    to_string(
    ) const;

    /** The vertex at the first end of this edge. */
    const V* v1;

    /** The vertex at the second end of this edge. */
    const V* v2;

    /** Edge directionality. */
    const EdgeDir dir;

};


template<typename V>
std::ostream&
operator<<(std::ostream& os, const GenericEdge<V>& e);


template<typename V>
GenericEdge<V>::
GenericEdge(
    const V* v1,
    const V* v2,
    EdgeDir dir
) :
    v1(v1),
    v2(v2),
    dir(dir)
{
    assert_not_null(v1, "constructor", "v1");
    assert_not_null(v2, "constructor", "v2");
}

template<typename V>
std::shared_ptr<GenericEdge<V>>
                             GenericEdge<V>::
                             create(
                                 const V* v1,
                                 const V* v2,
                                 EdgeDir dir
                             )
{
    return std::make_shared<GenericEdge<V>>(v1,v2,dir);
}


template<typename V>
std::string
GenericEdge<V>::
to_string(
) const
{
    switch (dir)
    {
    case EdgeDir::DIRECTED:
        return "(" + v1->to_string() + " -> " + v2->to_string() + ")";

    case EdgeDir::UNDIRECTED:
        return "(" + v1->to_string() + " -- " + v2->to_string() + ")";
    }

    return "()"; // never here, added to avoid CRAN warning
}


template<typename V>
std::ostream&
operator<<(std::ostream& os, const GenericEdge<V>& e)
{
    os << e.to_string();
    return os;
}



}
}

#endif
