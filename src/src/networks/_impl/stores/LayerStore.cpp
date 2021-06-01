#include "networks/_impl/stores/LayerStore.hpp"

#include "olap/ECube.hpp"
#include "olap/op/slicing.hpp"

namespace uu {
namespace net {

LayerStore::
LayerStore(
    VCube* actors
) : actors_(actors)
{}

core::LabeledUniquePtrSortedRandomSet<Network>::iterator
LayerStore::
begin(
) const
{
    return store.begin();
}

core::LabeledUniquePtrSortedRandomSet<Network>::iterator
LayerStore::
end(
) const
{
    return store.end();
}

Network *
LayerStore::
add(
    const std::string layer_name,
    EdgeDir dir,
    LoopMode loops
)
{

    if (store.get(layer_name))
    {
        return nullptr;
    }

    // Extend

    // @todo reason about semantics

    if (actors_->order() == 0)
    {
        if (actors_->size() > 0)
        {
            throw core::OperationNotSupportedException("layers must be added before adding actors");
        }

        actors_->add_dimension("L", {layer_name});
    }

    else
    {
        //actors_->add_member("L", layer_name, [](const uu::net::Vertex* v) {(void)v; return false;});
        actors_->add_member("L", layer_name);
    }

    // Slice

    std::vector<std::vector<size_t>> dim = {{store.size()}};
    std::unique_ptr<VCube> vertices = vslice(layer_name, actors_, dim);

    // Add egdes

    auto edges = std::make_unique<ECube>(layer_name, vertices.get(), vertices.get(),  dir, loops);

    // Package them inside a network to create a layer

    auto g = std::make_unique<Network>(layer_name, std::move(vertices), std::move(edges));


    return store.add(std::move(g));
}

bool
LayerStore::
contains(
    const Network* layer
) const
{
    return store.contains(layer);
}

bool
LayerStore::
erase(
    const Network* layer
)
{
    core::assert_not_null(layer, "LayerStore::erase", "layer");
    std::string layer_name = layer->name;
    auto res = store.erase(layer);
    if (store.size() == 0)
    {
        actors_->erase_dimension();
    }
    else actors_->erase_member("L", layer_name);
    return res;
}

size_t
LayerStore::
index_of(
    const Network* layer
) const
{
    //@todo assert_not_null
    return store.index_of(layer);
}

size_t
LayerStore::
size(
) const
{
    //@todo assert_not_null
    return store.size();
}

const Network*
LayerStore::
at(
    size_t pos
) const
{
    return store.at(pos);
}

Network*
LayerStore::
at(
    size_t pos
)
{
    return store.at(pos);
}

Network*
LayerStore::
get(
    const std::string& layer_name
)
{
    return store.get(layer_name);
}

const Network*
LayerStore::
get(
    const std::string& layer_name
) const
{
    return store.get(layer_name);
}

}
}

