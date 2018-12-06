/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_MEASURES_BASIC_H_
#define UU_NET_MEASURES_BASIC_H_

#include "core/exceptions/assert_not_null.h"

namespace uu {
namespace net {

/**
 * Returns the order of the graph, that is, g->vertices()->size()
 */
template<typename G>
size_t
order(
    const G* g
)
{
    assert_not_null(g, "order", "g");
    return g->vertices()->size();
}


/**
 * Returns the size of the graph, that is, g->edges()->size()
 */
template<typename G>
size_t
size(
    const G* g
)
{
    assert_not_null(g, "size", "g");
    return g->edges()->size();
}


}
}

#endif
