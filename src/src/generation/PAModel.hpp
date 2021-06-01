#ifndef UU_GENERATION_PAEVOLUTIONMODEL_H_
#define UU_GENERATION_PAEVOLUTIONMODEL_H_

#include "generation/EvolutionModel.hpp"

namespace uu {
namespace net {


/**
 * @brief Grows a network by first creating a complete graph with m0 nodes, then adding a new node at a time and connecting it to m other nodes chosen with a probability proportional to their degree.
 **/
template <typename M>
class
    PAModel :
    public EvolutionModel<M>
{

    size_t m0;
    size_t m;

  public:

    PAModel(
        size_t m0,
        size_t m
    );

    ~PAModel();

    void
    init_step(
        M* mnet,
        typename M::layer_type* layer,
        GenericObjectList<Vertex>& available_actors
    );

    void
    internal_evolution_step(
        M* mnet,
        typename M::layer_type* layer,
        GenericObjectList<Vertex>& available_actors
    );

    void
    external_evolution_step(
        M* mnet,
        typename M::layer_type* target_layer,
        GenericObjectList<Vertex>& available_actors,
        const typename M::layer_type* ext_layer
    );
};


}
}

#include "PAModel.ipp"

#endif
