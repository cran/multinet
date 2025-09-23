#include "generation/standard_graphs.hpp"

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/utils/NameIterator.hpp"
#include "operations/_impl/add_predefined_subgraphs.hpp"
#include "objects/Vertex.hpp"

namespace uu {
namespace net {


std::unique_ptr<Network>
null_graph(
    std::size_t n,
    EdgeDir dir,
    LoopMode allows_loops
)
{
    std::string name = "N_" + std::to_string(n);
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_vertices(g.get(), n);
    return g;
}


std::unique_ptr<MultilayerNetwork>
null_multiplex(
    std::size_t n,
    const std::vector<EdgeDir>& dir,
    const std::vector<LoopMode>& allows_loops
)
{
    std::string name = "N_" + std::to_string(n) + "_" + std::to_string(dir.size());
    auto g = std::make_unique<MultilayerNetwork>(name);

    if (dir.size() != allows_loops.size())
    {
        std::string err = "parameter lengths do not match";
        throw core::WrongParameterException(err);
    }

    // Adding layers
    core::NameIterator layer_names("l", dir.size());
    std::size_t l = 0;

    for (auto layer_name: layer_names)
    {
        g->layers()->add(layer_name, dir[l], allows_loops[l]);
        l++;
    }

    // Adding actors
    core::NameIterator actor_names("a", n);

    for (auto actor_name: actor_names)
    {
        g->actors()->add(actor_name);
    }

    // Adding vertices
    for (auto l: *g->layers())
    {
        for (auto a: *g->actors())
        {
            l->vertices()->add(a);
        }
    }

    return g;
}

std::unique_ptr<MultilayerNetwork>
null_multiplex(
    std::size_t n,
    std::size_t l
)
{
    std::vector<uu::net::EdgeDir> dir(l, uu::net::EdgeDir::UNDIRECTED);
    std::vector<LoopMode> loops(l, LoopMode::ALLOWED);
    return null_multiplex(n, dir, loops);
}




std::unique_ptr<Network>
complete_graph(
    std::size_t n,
    EdgeDir dir
)
{
    std::string name = "K_" + std::to_string(n);
    LoopMode allows_loops = LoopMode::DISALLOWED;
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_complete_subgraph(g.get(), n);
    return g;
}


std::unique_ptr<Network>
complete_bipartite_graph(
    std::size_t n1,
    std::size_t n2,
    EdgeDir dir
)
{
    std::string name = "K_" + std::to_string(n1) + "_" + std::to_string(n2);
    LoopMode allows_loops = LoopMode::DISALLOWED;
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_complete_bipartite_subgraph(g.get(), n1, n2);
    return g;
}


std::unique_ptr<Network>
path_graph(
    std::size_t n,
    EdgeDir dir
)
{
    std::string name = "P_" + std::to_string(n);
    LoopMode allows_loops = LoopMode::DISALLOWED;
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_path(g.get(), n);
    return g;
}

std::unique_ptr<Network>
cycle_graph(
    std::size_t n,
    EdgeDir dir
)
{
    std::string name = "C_" + std::to_string(n);
    LoopMode allows_loops = LoopMode::DISALLOWED;
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_cycle(g.get(), n);
    return g;
}


std::unique_ptr<Network>
wheel_graph(
    std::size_t n
)
{
    std::string name = "W_" + std::to_string(n);
    EdgeDir dir = EdgeDir::UNDIRECTED;
    LoopMode allows_loops = LoopMode::DISALLOWED;
    auto g = std::make_unique<Network>(name, dir, allows_loops);
    add_wheel(g.get(), n);
    return g;
}


}
}

