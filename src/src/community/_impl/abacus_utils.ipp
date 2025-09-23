#include "core/arules/eclat.hpp"

namespace uu {
namespace net {

template <typename M>
std::set<std::unique_ptr<PillarCommunity<M>>>
eclat_merge(
    const M* mnet,
    const std::unordered_map<const typename M::layer_type*, CommunityStructure<Network>*>& single_layer_communities,
    int min_actors,
    int min_layers
)
{

    // transform communities into  transactions
    // eclat format: list of tids ( = community+layer) per actor
    
    // actor id to item id
    std::unordered_map<std::size_t, std::size_t> items_id;
    // transaction id to layer id
    std::unordered_map<std::size_t, std::size_t> trans;
    // item id to actor id
    std::unordered_map<std::size_t, std::size_t> items;
    // transactions
    std::vector<std::vector<std::size_t>> data;
    
    std::size_t tid = 0;
    std::size_t iid = 0;
    
    // Layers
    for (auto pair: single_layer_communities)
    {
        std::size_t layer_id = mnet->layers()->index_of(pair.first);
        // Communities
        for (auto c: *pair.second)
        {
            // Actors
            for (auto node: *c)
            {
                std::size_t actor = mnet->actors()->index_of(node);
                
                if (items_id.find(actor) == items_id.end())
                {
                    items_id[actor] = iid;
                    items[iid] = actor;
                    iid++;
                    std::vector<std::size_t> tids;
                    data.push_back(tids);
                }
                data[items_id[actor]].push_back(tid);
            }
            trans[tid] = layer_id;
            tid++;
        }
    }

    std::set<std::unique_ptr<PillarCommunity<M>>> result;
    
    // This works because single-layer communities are partitions
    if ((min_layers <= 0) || (min_actors <= 0))
    {
        return std::set<std::unique_ptr<PillarCommunity<M>>>();
    }

    std::vector<core::freq_itemset> freq;
    std::vector<core::freq_itemset> closed;
    
    core::eclat(data, freq, closed, min_layers, min_actors);
    
    for (auto itemset: closed)
    {
        auto current = std::make_unique<PillarCommunity<M>>();
        for (auto actor: itemset.items)
        {
            std::size_t actor_id = items[actor];
            current->add_actor(mnet->actors()->at(actor_id));
        }
        for (auto tid: itemset.tids)
        {
            std::size_t layer_id = trans[tid];
            current->add_layer(mnet->layers()->at(layer_id));
        }
        result.insert(std::move(current));
    }
    
    return result;
}


}
}

