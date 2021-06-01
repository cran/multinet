#include "networks/OrderedMultiplexNetwork.hpp"

#include "core/utils/pretty_printing.hpp"

namespace uu {
namespace net {

OrderedMultiplexNetwork::
OrderedMultiplexNetwork(
    const std::string& name
)
    : name(name)
{


    actors_ = std::make_unique<VCube>("A");
    //
    layers_ = std::make_unique<LayerStore>(actors_.get());

}


const VCube*
OrderedMultiplexNetwork::
actors(
) const
{
    return actors_.get();
}

VCube*
OrderedMultiplexNetwork::
actors(
)
{
    return actors_.get();
}

LayerStore*
OrderedMultiplexNetwork::
layers(
)
{
    return layers_.get();
}


const LayerStore*
OrderedMultiplexNetwork::
layers(
) const
{
    return layers_.get();
}


}
}

