#include "community/louvain.hpp"

namespace uu {
namespace net {


template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    abacus(
                                        const M* mnet,
                                        int min_actors,
                                        int min_layers
                                    )
{
    std::vector<std::unique_ptr<CommunityStructure<typename M::layer_type>>> coms;
    std::unordered_map<const typename M::layer_type*, CommunityStructure<typename M::layer_type>*> single_layer_communities;

    for (auto layer: *mnet->layers())
    {
        auto c = louvain(layer);
        single_layer_communities[layer] = c.get();
        coms.push_back(std::move(c));
    }

    auto com = eclat_merge(mnet, single_layer_communities, min_actors, min_layers);
    return to_vertex_layer_community_structure(com);
}

}
}

