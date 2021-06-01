#include "networks/MultilayerNetwork.hpp"
#include "networks/_impl/observers/PropagateObserver.hpp"

namespace uu {
namespace net {

MultilayerNetwork::
MultilayerNetwork(
    const std::string& name
)
    : name(name)
{

    actors_ = std::make_unique<VCube>("A");

    layers_ = std::make_unique<LayerStore>(actors_.get());

    interlayer_edges_ = std::make_unique<MLECubeStore>(layers_.get());
    
    auto obs = std::make_unique<PropagateObserver<MLECubeStore, const Network>>(interlayer_edges_.get());
    layers_->attach(obs.get());
    layers_->register_observer(std::move(obs));

}


const VCube*
MultilayerNetwork::
actors(
) const
{
    return actors_.get();
}

VCube*
MultilayerNetwork::
actors(
)
{
    return actors_.get();
}

LayerStore*
MultilayerNetwork::
layers(
)
{
    return layers_.get();
}


const LayerStore*
MultilayerNetwork::
layers(
) const
{
    return layers_.get();
}


const MLECubeStore*
MultilayerNetwork::
interlayer_edges(
) const
{

    return interlayer_edges_.get();
}

MLECubeStore*
MultilayerNetwork::
interlayer_edges(
)
{
    return interlayer_edges_.get();
}


}
}

