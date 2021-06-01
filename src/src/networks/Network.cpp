#include "networks/Network.hpp"

namespace uu {
namespace net {

Network::
Network(
    const std::string& name,
    EdgeDir dir,
    LoopMode loops
)
    : name(name)
{

    vertices_ = std::make_unique<VCube>("V");
    edges_ = std::make_unique<ECube>("E", vertices_.get(), vertices_.get(), dir, loops);

}

Network::
Network(
    const std::string& name,
    std::unique_ptr<VCube> vertices,
    std::unique_ptr<ECube> edges
):
    name(name)
{
    core::assert_not_null(vertices.get(), "Network::Network2", "vertices");
    core::assert_not_null(edges.get(), "Network::Network2", "edges");

    if (edges->vcube1() != vertices.get() || edges->vcube2() != vertices.get())
    {
        std::string err = "edges must be defined on the vertices in the network";
        throw core::WrongParameterException(err);
    }

    vertices_ = std::move(vertices);
    edges_ = std::move(edges);

}

VCube*
Network::
vertices(
)
{
    return vertices_.get();
}



const VCube*
Network::
vertices(
) const
{
    return vertices_.get();
}


ECube*
Network::
edges(
)
{
    return edges_.get();
}


const ECube*
Network::
edges(
) const
{
    return edges_.get();
}


bool
Network::
is_directed(
) const
{
    return edges_->is_directed();
}

bool
Network::
allows_loops(
) const
{
    return edges_->allows_loops();
}

}
}

