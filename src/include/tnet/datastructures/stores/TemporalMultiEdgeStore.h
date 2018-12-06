/**
 * History:
 * - 2018.03.19 file created, with code taken from other existing files.
 */

#ifndef UU_TNET_DATASTRUCTURES_STORES_TEMPORALMULTIEDGESTORE_H_
#define UU_TNET_DATASTRUCTURES_STORES_TEMPORALMULTIEDGESTORE_H_

#include <memory>
#include "net/datastructures/stores/AttributedMultiEdgeStore.h"
#include "net/datastructures/stores/Attributes.h"
#include "tnet/datastructures/stores/Times.h"

namespace uu {
namespace net {

using TemporalMultiEdgeStore = AttributedMultiEdgeStore<Attributes<Edge, Times<Edge>>>;

}
}

#endif
