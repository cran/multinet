#include <unordered_map>
#include "core/utils/NameIterator.hpp"
#include "core/utils/random.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"
#include "networks/_impl/containers/GenericObjectList.hpp"
#include "objects/Vertex.hpp"
#include "utils/summary.hpp"

namespace uu {
namespace net {

template <typename M>
void
evolve(
    M* net,
    size_t num_actors,
    const std::vector<std::string>& layer_names,
    const std::vector<double>& pr_internal_event,
    const std::vector<double>& pr_external_event,
    const std::vector<std::vector<double>>& dependency,
    const std::vector<EvolutionModel<M>*>& evolution_model,
    size_t num_of_steps
)
{
    std::unordered_map<std::string, size_t> layer_idx;

    for (size_t n=0; n<net->layers()->size(); n++)
    {
        layer_idx[net->layers()->at(n)->name] = n;
    }

    for (auto layer_name: layer_names)
    {
        if (layer_idx.find(layer_name) == layer_idx.end())
        {
            throw core::ElementNotFoundException("Layer " + layer_name);
        }
    }

    std::vector<double> pr_no_event;

    for (size_t i=0; i<pr_internal_event.size(); i++)
    {
        pr_no_event.push_back(1.0 - pr_internal_event.at(i) - pr_external_event.at(i));
    }


    // Initialization
    std::vector<std::shared_ptr<const Vertex>> actors(num_actors);
    size_t pos = 0;
    for (auto actor: uu::core::NameIterator("A", num_actors))
    {
        actors[pos++] = std::make_shared<const Vertex>(actor);
    }
    
    std::vector<GenericObjectList<Vertex>> available_actors(net->layers()->size());

    for (size_t idx=0; idx<net->layers()->size(); idx++)
    {
        size_t n = layer_idx.at(layer_names.at(idx));
        available_actors[n] = GenericObjectList<Vertex>();

        for (auto actor: actors)
        {
            available_actors[n].add(actor.get());
        }

        evolution_model[n]->init_step(net, net->layers()->at(n), available_actors[n]);
        
    }


    // Evolution
    for (size_t i=0; i<num_of_steps; i++)
    {
        for (size_t idx=0; idx<net->layers()->size(); idx++)
        {

            size_t n = layer_idx.at(layer_names.at(idx));

            auto target_layer = net->layers()->at(n);

            double dice = core::drand();

            if (dice < pr_no_event[n])
            {
                // DO NOTHING;
            }
            else if (dice < pr_internal_event[n]+pr_no_event[n] || pr_external_event[n]==0)
            {
                // INTERNAL EVOLUTION
                evolution_model[n]->internal_evolution_step(net, target_layer, available_actors[n]);
            }

            else
            {
                // EXTERNAL EVOLUTION
                // choose a layer from which to import edges.
                size_t layer_index = core::test(dependency[n]);
                auto external_layer = net->layers()->get(layer_names.at(layer_index));

                evolution_model[n]->external_evolution_step(net, target_layer, available_actors[n], external_layer);
            }
        }
    }
}

}
}
