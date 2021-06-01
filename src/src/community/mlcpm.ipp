#include "community/_impl/mlcpm_utils.hpp"

namespace uu {
namespace net {


template <typename M>
std::unique_ptr<CommunityStructure<M>>
mlcpm(
    const M* mnet,
    size_t k,
    size_t m
)
{
    // Step 1: find max-cliques
    auto cliques = find_max_cliques(mnet,k,m);

    if (cliques.size()==0)
    {
        return std::make_unique<CommunityStructure<M>>();
    }

    // Step 2: bluid adjacency graph
    auto adjacency = build_max_adjacency_graph(cliques,k,m);
    // @todo use a Network instead?

    // Step 3: extract communities
    auto comm = find_max_communities(adjacency,m);

    // Translate the result, so that it is compatible with the other clustering algorithms
    auto result = std::make_unique<CommunityStructure<M>>();

    for (auto c: comm)
    {
        result->add(std::move(c->to_community()));
    }

    return result;
}

}
}

