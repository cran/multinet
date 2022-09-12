#ifndef UU_COMMUNITY_MLP_H_
#define UU_COMMUNITY_MLP_H_

#include <memory>
#include <unordered_set>
#include <vector>
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/math.hpp"
#include "core/utils/pretty_printing.hpp"
#include "community/CommunityStructure.hpp"
#include "measures/relevance.hpp"

namespace uu {
namespace net {

template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    mlp(
                                        const M* mnet
                                    );

/**
 * @brief calculates the sum of initial attraction weights among an actor and his neighbours given a set of layers L.
 * the neighbours considered in this calculation are just the neighbours that are his neighbours in all the layers in L.
 * @layers_set : set of layers.
 * @actr : an actor
 * @actor_neighbours : the actor neighbours in all layers.
 * attr_weights : the initial attraction weights w0.
 * @return : sum of attraction weights (Sum(w0)) between "actr" and his neighbours in "layers_set".
 **/

template <typename M>
double
get_sum_of_w0(
    const std::set<typename M::layer_type*>& layers_set,
    const Vertex*& actr,
    const std::unordered_map<const Vertex*, std::set<typename M::layer_type*>>& actor_neighbours,
    const std::unordered_map<const Vertex*, std::unordered_map<const Vertex*,double>>& attr_weights)
{


    double sum_of_w0=0;

    //find the set of actors that are neighbours with "actr" in all the layers given in "layers_set"
    //vector<const Vertex*> intersection = actor_neighbours.begin()->second;
    for (auto pair: actor_neighbours)
    {
        if (layers_set == pair.second)
        {
            sum_of_w0 += attr_weights.at(actr).at(pair.first);
        }
    }

    return sum_of_w0;
}


template <typename Obj>
std::set<Obj>
subset(
    const std::vector<Obj>& vec,
    unsigned long long int spec
)
{
    std::set<Obj> res;
    size_t idx = 0;

    while (spec > 0)
    {
        if (spec % 2)
        {
            res.insert(vec[idx]);
        }

        spec /= 2;
        idx++;
    }

    return res;
}


/**
* @brief find communities in a multiplex using the multi-layer label propagation algorithm.
* reference https://dl.acm.org/citation.cfm?id=3080574
* @mnet : the multi-layer network instance
* @return : actor communities
**/
template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    mlp(
                                        const M* mnet
                                    )
{

    core::assert_not_null(mnet, "mlp", "mnet");
    /*(1) calculate the initial attraction weights w0 for actors (affinity of actors to their neighbours)*/

    //initialization
    std::unordered_map<const Vertex*, std::unordered_map<const Vertex*, double>> initial_attraction_weights; //w0 in the article
    std::unordered_map<const Vertex*,std::unordered_map<const Vertex*,double>> updated_attraction_weights; //w in the article
    std::unordered_map<const Vertex*,std::unordered_map<const Vertex*, std::set<typename M::layer_type*>>> actors_shared_layers; //store the layers where the actors are neighbours (D(v,u) in the article)
    std::unordered_map<const Vertex*, std::set<typename M::layer_type*>> actors_relevant_dimensions; //Dv in the article
    std::unordered_map<const Vertex*,std::unordered_map<typename M::layer_type*,std::vector<const Vertex*>>> all_actors_neighbours; //to store the (actors & layers) references of an actor where the actor has neighbours

    //for each actor, calculate its affinity to each of its neighbours
    for (const Vertex* actor: *mnet->actors())
    {
        //std::cout << "Initial affinity of: " << (*actor) << std::endl;
        //for each actor, calculate its affinity to each of its neighbours
        for (const Vertex* neighbor: neighbors(mnet->layers()->begin(), mnet->layers()->end(), actor, EdgeMode::INOUT))
        {

            for (auto layer: *mnet->layers())
            {
                if (layer->edges()->get(actor, neighbor))
                {
                    actors_shared_layers[actor][neighbor].insert(layer);
                }
            }

            double affinity = xrelevance(mnet, actors_shared_layers[actor][neighbor].begin(), actors_shared_layers[actor][neighbor].end(), actor, EdgeMode::INOUT);
            initial_attraction_weights[actor][neighbor] = affinity;

            //std::cout << "   with: " << (*neighbor) << " " << affinity << std::endl;

        }
    }


// REPLACED BY THE FOLLOWING CODE - FROM OUALID
//    // (2) recover the relevant dimensions (layers) Dv for each actor using equation(8) in the reference
//    for (const Vertex* actor: *mnet->actors())
//    {
//        //retrieve the layers in which the actor has neighbours
//        std::vector<typename M::layer_type*> active_in_layers;
//
//        for (auto layer: *mnet->layers())
//        {
//            if (degree(layer, actor) > 0)
//            {
//                active_in_layers.push_back(layer);
//            }
//        }
//
//        //std::sort(active_in_layers.begin(), active_in_layers.end());
//
//        double max_sum_of_w0 = 0;
//        std::set<typename M::layer_type*> actor_relevant_dimensions;
//
//        //calculate the sum of w0 for neighbours within all subsets of layers in which the actor is active
//        for (unsigned long long int spec = 1; spec < std::pow(2, active_in_layers.size()); spec++)
//        {
//            auto sub = subset(active_in_layers, spec);
//
//            //get the sum of initial attraction weights within this subset of layers
//            double sum_of_w0 = get_sum_of_w0<M>(sub, actor, actors_shared_layers[actor], initial_attraction_weights);
//
//            if (sum_of_w0 > max_sum_of_w0)
//            {
//                max_sum_of_w0 = sum_of_w0;
//                actor_relevant_dimensions = sub;
//            }
//
//            else if (sum_of_w0 == max_sum_of_w0)
//            {
//                actor_relevant_dimensions.insert(actor_relevant_dimensions.begin(), actor_relevant_dimensions.end());
//
//                actor_relevant_dimensions.insert(sub.begin(), sub.end());
//            }
//        }
//
//        actors_relevant_dimensions[actor] = actor_relevant_dimensions;
//
//        /* std::cout << (*actor) << ": ";
//         for (auto l: actors_relevant_dimensions[actor])
//         {
//             std::cout << l->name << " ";
//
//         }
//         std::cout << std::endl;*/
//    }
        // (2) recover the relevant dimensions (layers) Dv for each actor using equation(8) in the reference
        for (const Vertex* actor: *mnet->actors())
        {
            double max_sum_of_w0 = 0;
            std::set<typename M::layer_type*> actor_relevant_dimensions;
     
            //calculate the sum of w0 for neighbours within all subsets of layers in which the actor is active
            for (auto sub: actors_shared_layers[actor])
            {
                //get the sum of initial attraction weights within this subset of layers
                double sum_of_w0 = get_sum_of_w0<M>(sub.second, actor, actors_shared_layers[actor], initial_attraction_weights);
     
                if (sum_of_w0 > max_sum_of_w0)
                {
                    max_sum_of_w0 = sum_of_w0;
                    actor_relevant_dimensions = sub.second;
                }
     
                else if (sum_of_w0 == max_sum_of_w0)
                {
                    //actor_relevant_dimensions.insert(actor_relevant_dimensions.begin(), actor_relevant_dimensions.end());
     
                    actor_relevant_dimensions.insert(sub.second.begin(), sub.second.end());
                }
            }
     
            actors_relevant_dimensions[actor] = actor_relevant_dimensions;
     
            /* std::cout << (*actor) << ": ";
             for (auto l: actors_relevant_dimensions[actor])
             {
                 std::cout << l->name << " ";
     
             }
             std::cout << std::endl;*/
        }
    
    // END OF REPLACEMENT
    
    // (3)  calculate the new attraction weights w for actors (equation (7) in the article)
    for (auto pair: initial_attraction_weights)
    {
        for (auto sub_pair: pair.second)
        {
            const Vertex* act1 = pair.first;
            const Vertex* act2 = sub_pair.first;

            // size of intersection
            size_t intersection = 0;

            for (auto l: actors_relevant_dimensions[act2])
            {
                if (actors_shared_layers[act1][act2].count(l)>0)
                {
                    intersection++;
                }
            }

            //vector<typename M::layer_type*> intersect  = get_intersection(actors_relevant_dimensions[act2], actors_shared_layers[act1][act2]);
            std::set<typename M::layer_type*> union_;
            union_.insert(actors_relevant_dimensions[act2].begin(), actors_relevant_dimensions[act2].end());
            union_.insert(actors_shared_layers[act1][act2].begin(), actors_shared_layers[act1][act2].end());
            updated_attraction_weights[act1][act2] = initial_attraction_weights[act1][act2]*((double)intersection/union_.size());

            //std::cout << (*act1) << " " << (*act2) << ": " << updated_attraction_weights[act1][act2] << std::endl;
        }
    }


    // (4)The labeling step
    //ActorListSharedPtr actors = mnet->get_actors();
    std::unordered_map<const Vertex*, size_t> membership; // community membership
    std::vector<const Vertex*> order; //order vector to decide in which order to process the actors

    //Initialize labels
    size_t label=0;

    for (const Vertex* actor: *mnet->actors())
    {
        membership[actor] = label;

        if (updated_attraction_weights.find(actor) != updated_attraction_weights.end())
        {
            order.push_back(actor);
        }

        label++;
    }

    /*
        for (auto pair: membership)
        {
            std::cout << (*pair.first) << " " << pair.second << std::endl;
        }*/

    //keep updating the labels as long as the stopping condition is not satisfied
    bool stop = false;

    while (!stop)
    {

        // shuffle the order of the actors
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(order.begin(), order.end(), std::default_random_engine(seed));

        // re-assign labels
        for (const Vertex* actor: order)
        {
            //group the neighbours according to their labels calculate the sum of w within each group
            std::unordered_map<int,double> neigh_groups_weights;

            for (auto pair: updated_attraction_weights[actor])
            {
                neigh_groups_weights[membership.at(pair.first)] += updated_attraction_weights[actor][pair.first];
            }

            //find the label in the group of neighbours that has the maximum sum of w
            size_t winning_label = neigh_groups_weights.begin()->first;
            double max = neigh_groups_weights.begin()->second;

            for (auto pair: neigh_groups_weights)
            {
                if (pair.second >max)
                {
                    winning_label=pair.first;
                    max=pair.second;
                }
            }

            //assign the winning label to the actor
            membership[actor]=winning_label;

            //update the relevant dimensions Dv for this actor according to equation (10) in the article
            std::set<typename M::layer_type*> union_Dvu;
            std::set<typename M::layer_type*> union_Du;

            for (auto pair: actors_shared_layers[actor])
            {
                if (membership[pair.first] == winning_label)
                {
                    union_Dvu.insert(pair.second.begin(), pair.second.end());
                    union_Du.insert(actors_relevant_dimensions[pair.first].begin(), actors_relevant_dimensions[pair.first].end());
                }
            }

            // intersection
            actors_relevant_dimensions[actor].clear();

            for (auto layer: union_Dvu)
            {
                if (union_Du.count(layer) > 0)
                {
                    actors_relevant_dimensions[actor].insert(layer);
                }
            }

            //update the attraction weights according to equation(9) in the article.
            for (auto pair: updated_attraction_weights[actor])
            {
                const Vertex* neighbour = pair.first;

                // size of intersection
                size_t intersection = 0;

                for (auto l: actors_relevant_dimensions[actor])
                {
                    if (actors_shared_layers[actor][neighbour].count(l)>0)
                    {
                        intersection++;
                    }
                }

                //vector<typename M::layer_type*> intersect  = get_intersection(actors_relevant_dimensions[act2], actors_shared_layers[act1][act2]);
                std::set<typename M::layer_type*> union_;
                union_.insert(actors_relevant_dimensions[actor].begin(), actors_relevant_dimensions[actor].end());
                union_.insert(actors_shared_layers[actor][neighbour].begin(), actors_shared_layers[actor][neighbour].end());
                updated_attraction_weights[neighbour][actor] = updated_attraction_weights[neighbour][actor]*((double)intersection/union_.size());
            }

        }

        /*
                  for (auto pair: membership)
                  {
                      std::cout << (*pair.first) << " " << pair.second << std::endl;

                  }*/

        //std::cout << "CHECK STOP" << std::endl;

        stop = true;

        //check the stopping condition
        for (const Vertex* actor: order)
        {
            //std::cout << (*actor) << ": " << std::endl;
            //group the neighbours according to their labels calculate the sum of w within each group
            std::unordered_map<size_t, double> neigh_groups_weights;

            for (auto pair:updated_attraction_weights[actor])
            {
                //std::cout << " neighbor " << (*pair.first) << " + " << updated_attraction_weights[actor][pair.first] << " -> " << membership.at(pair.first) << std::endl;
                neigh_groups_weights[membership.at(pair.first)] += updated_attraction_weights[actor][pair.first];
            }

            //find the label in the group of neighbours that has the maximum sum of w
            double max = 0;

            for (auto pair: neigh_groups_weights)
            {
                if (pair.second>max)
                {
                    max = pair.second;
                }
            }

            std::vector<size_t> winning_groups_labels;

            for (auto pair: neigh_groups_weights)
            {
                if (pair.second == max) // Correction
                {
                    //std::cout << " winning label: " << pair.first << std::endl;
                    winning_groups_labels.push_back(pair.first);

                }
            }

            if (std::find(winning_groups_labels.begin(), winning_groups_labels.end(), membership[actor])==winning_groups_labels.end())
            {
                stop = false;
            }
        }

        //break;
    }

    std::unordered_map<size_t, std::vector<const Vertex*>> group_by_community_id;

    for (auto pair: membership)
    {
        group_by_community_id[pair.second].push_back(pair.first);
    }

    auto res = std::make_unique<CommunityStructure<M>>();

    for (auto pair: group_by_community_id)
    {
        auto c = std::make_unique<Community<M>>();

        for (auto actor: pair.second)
        {

            for (auto layer: *mnet->layers())
            {
                if (layer->vertices()->contains(actor))
                {
                    c->add(MLVertex(actor, layer));
                }
            }
        }

        // @todo control needed?
        if (c->size() > 0)
        {
            res->add(std::move(c));
        }
    }

    return  res;
}

}
}


#endif
