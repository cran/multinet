/**
 * This module defines a generic network co-evolution process.
 *
 * The function "evolve" takes a multilayer network as input and at every step
 * updates each of its layers taking one of the following actions:
 * 1) no action (the layer remains unchanged - used to set different evolution speeds)
 * 2) internal evolution (the layer evolves according to some internal dynamics, defined by an Model)
 * 3) external evolution (the layer imports nodes and edges from another layer)
 */

#ifndef UU_GENERATION_EVOLVE_H_
#define UU_GENERATION_EVOLVE_H_

#include <vector>
#include <string>
#include "generation/EvolutionModel.hpp"


namespace uu {
namespace net {

//typedef int evolution_strategy;

//const int EVOLUTION_DEGREE=0;

/**
 * @brief Grows the input multilayer network.
 * @param net MLNetwork to grow
 * @param num_actors number of available actors to populate the network
 * @param num_of_steps number of evolution steps
 * @param pr_no_event[] for each layer, the probability that during an evolution step the layer does not change
 * @param pr_internal_event[] for each layer, the probability that if something happens it is an internal evolution according to the evolution_model[] parameter
 * @param dependency[][] The (i,j) element of this matrix indicates the probability that, given an external evolution event, layer i will consider layer j as a potential candidate to import edges from
 * @param evolution_model[] for each layer, a specification of how the layer should evolve when an internal event happens
 **/
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
);


}
}

#include "evolve.ipp"

#endif
