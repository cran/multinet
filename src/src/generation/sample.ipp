#include <map>
#include "core/stores/ObjectStore.hpp"
#include "core/utils/random.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "objects/Vertex.hpp"

namespace uu {
namespace net {


template <typename M>
void
sample(
    M* net,
    const CommunityStructure<M>* communities,
    const std::vector<double>& pr_internal_connectivity,
    const std::vector<double>& pr_external_connectivity
)
{

    core::assert_not_null(net, "sample", "net");
    size_t num_layers = net->layers()->size();
    if (num_layers != pr_internal_connectivity.size())
    {
        throw core::WrongParameterException("pr_internal_connectivity size does not match number of layers");
    }
    if (num_layers != pr_external_connectivity.size())
    {
        throw core::WrongParameterException("pr_external_connectivity size does not match number of layers");
    }

    std::vector<std::map<Community<M>*, std::unique_ptr<core::ObjectStore<Vertex>>>> layer_communities(num_layers);

    for (auto com: *communities)
    {
        for (size_t layer_id=0; layer_id<net->layers()->size(); layer_id++)
        {

        }

        for (auto n: *com)
        {
            size_t layer_id = net->layers()->index_of(n.c);
            auto&& it = layer_communities[layer_id].find(com);

            if (it == layer_communities[layer_id].end())
            {
                layer_communities[layer_id][com] = std::make_unique<core::ObjectStore<Vertex>>();
                layer_communities[layer_id][com]->add(n.v);
            }

            else
            {
                it->second->add(n.v);
            }
        }
    }

    for (auto layer: *net->layers())
    {
        size_t l = net->layers()->index_of(layer);

        for (auto&& pair: layer_communities[l])
        {
            auto&& community = pair.second;

            for (auto n1: *community)
            {
                for (auto n2: *community)
                {
                    if (n1 < n2)
                    {
                        continue;
                    }

                    if (core::test(pr_internal_connectivity.at(l)))
                    {
                        layer->edges()->add(n1, n2);
                    }
                }
            }
        }

        double prob = pr_external_connectivity.at(l);

        for (auto it1 = layer_communities[l].begin(); it1!=layer_communities[l].end();)
        {
            auto&& community1 = it1->second;

            for (auto it2 = ++it1; it2!=layer_communities[l].end(); ++it2)
            {

                auto&& community2 = it2->second;
                size_t n1 = community1->size();
                size_t n2 = community2->size();
                size_t num_trials = std::ceil(std::log(1.0 - prob)/std::log((n1*n2-1.0)/(n1*n2)));

                for (size_t i=0; i<num_trials; i++)
                {
                    auto v1 = community1->get_at_random();
                    auto v2 = community2->get_at_random();
                    layer->edges()->add(v1, v2);
                }
            }
        }
    }
}

}
}
