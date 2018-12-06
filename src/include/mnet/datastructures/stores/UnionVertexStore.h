/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_DATASTRUCTURES_STORES_UNIONVERTEXSTORE_H_
#define UU_MNET_DATASTRUCTURES_STORES_UNIONVERTEXSTORE_H_

#include <memory>
#include "net/datastructures/stores/VertexStore.h"
#include "mnet/datastructures/observers/UnionObserver.h"

namespace uu {
namespace net {

/**
 * A UnionVertexStore allows to create, store, retrieve and erase a set of vertices.
 *
 * A must be an attribute store, itself templatized to work with vertices.
 */
class
    UnionVertexStore :
    private VertexStore
{
  private:
    typedef VertexStore super;

  public:
    UnionVertexStore() : super() {};

    using super::attach;
    using super::begin;
    using super::end;
    using super::contains;
    using super::get;
    using super::get_at_random;
    using super::get_at_index;
    using super::summary;

  private:

    using super::add;
    using super::erase;

    friend UnionObserver<const Vertex, UnionVertexStore>;

};

}
}

#endif
