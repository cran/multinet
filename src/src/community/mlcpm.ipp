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

    //std::cout << "num max cliques: " << cliques.size() << std::endl;
    /*
    for (auto clique: cliques)
    {
        std::cout << clique->to_string();
        std::cout << " ";
    }
    std::cout << std::endl;
    */
    
    // Step 2: build adjacency graph
    auto adjacency = build_max_adjacency_graph(cliques,k,m);
    // @todo use a Network instead?

    //
    size_t num_adj_edges = 0;
    for (auto el: adjacency)
        num_adj_edges += el.second.size();
    //std::cout << "size adjacency: " << num_adj_edges << std::endl;
    
    // Step 3: extract communities
    auto comm = find_max_communities(adjacency,m);
    
    /*
    std::cout << "num comm: " << comm.size() << std::endl;
    for (auto cmt: comm)
    {
        std::cout << cmt->to_string();
        std::cout << " ** ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    */

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

