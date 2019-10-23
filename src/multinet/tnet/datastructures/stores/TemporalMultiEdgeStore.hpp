/**
 * History:
 * - 2018.03.19 file created, with code taken from other existing files.
 */

#ifndef UU_TNET_DATASTRUCTURES_STORES_TEMPORALMULTIEDGESTORE_H_
#define UU_TNET_DATASTRUCTURES_STORES_TEMPORALMULTIEDGESTORE_H_

#include <memory>
#include "net/datastructures/stores2/AttributedMultiEdgeStore.hpp"
#include "net/datastructures/stores2/Attributes.hpp"
#include "tnet/datastructures/stores/Times.hpp"

namespace uu {
namespace net {

using TemporalMultiEdgeStore = AttributedMultiEdgeStore<Attributes<Edge, Times<Edge>>>;

}
}

#endif
