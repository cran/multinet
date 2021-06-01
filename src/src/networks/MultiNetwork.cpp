#include "networks/MultiNetwork.hpp"

namespace uu {
namespace net {

MultiNetwork::
MultiNetwork(
    const std::string& name,
    EdgeDir dir,
    LoopMode loops
)
    : name(name)
{
    vertices_ = std::make_unique<VCube>("V");
    edges_ = std::make_unique<MECube>("E", vertices_.get(), vertices_.get(), dir, loops);

}



VCube*
MultiNetwork::
vertices(
)
{
    return vertices_.get();
}


const VCube*
MultiNetwork::
vertices(
) const
{
    return vertices_.get();
}


MECube*
MultiNetwork::
edges(
)
{
    return edges_.get();
}


const MECube*
MultiNetwork::
edges(
) const
{
    return edges_.get();
}


bool
MultiNetwork::
is_directed(
) const
{
    return edges_->is_directed();
}


bool
MultiNetwork::
allows_loops(
) const
{
    return edges_->allows_loops();
}

}
}

