#ifndef UU_NETWORKS_IMPL_STORES_LAYERSTORE_H_
#define UU_NETWORKS_IMPL_STORES_LAYERSTORE_H_

#include <map>
#include <utility>
#include "networks/Network.hpp"
#include "olap/VCube.hpp"
#include "core/observers/Observer.hpp"
#include "core/observers/ObserverStore.hpp"
#include "core/observers/Subject.hpp"

namespace uu {
namespace net {


class LayerStore
:
   public core::Subject<const Network>,
   public core::ObserverStore
{
  private:

    core::LabeledUniquePtrSortedRandomSet<Network> store;

    VCube* actors_;

  public:

    LayerStore(
        VCube* actors
    );

    // @todo add const versions

    core::LabeledUniquePtrSortedRandomSet<Network>::iterator
    begin(
    ) const;

    core::LabeledUniquePtrSortedRandomSet<Network>::iterator
    end(
    ) const;

    Network *
    add(
        const std::string layer_name,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        LoopMode loops = LoopMode::ALLOWED
    );

    bool
    contains(
        const Network* layer
    ) const;

    bool
    erase(
        const Network* layer
    );

    size_t
    index_of(
        const Network* layer
    ) const;


    const Network*
    at(
        size_t pos
    ) const;

    Network*
    at(
        size_t pos
    );

    size_t
    size(
    ) const;

    const Network*
    get(
        const std::string& layer_name
    ) const;


    Network*
    get(
        const std::string& layer_name
    );
};

}
}

#endif
