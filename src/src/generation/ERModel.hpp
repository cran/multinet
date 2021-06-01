#ifndef UU_GENERATION_EREVOLUTIONMODEL_H_
#define UU_GENERATION_EREVOLUTIONMODEL_H_

#include "generation/EvolutionModel.hpp"

namespace uu {
namespace net {


/**
 * @brief Grows a network by first creating m0 nodes and then at every step choosing two nodes (uniform probability) to connect with an edge.
 */
template <typename M>
class ERModel :
    public EvolutionModel<M>
{
    size_t m0;
  public:

    ERModel(
        size_t m0
    );

    ~ERModel();

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

#include "ERModel.ipp"

#endif
