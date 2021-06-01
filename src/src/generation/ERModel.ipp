
#include "core/exceptions/WrongParameterException.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

template <typename M>
ERModel<M>::
ERModel(
    size_t m0
)
{
    ERModel::m0 = m0;
}

template <typename M>
ERModel<M>::
~ERModel()
{
    //
}


template <typename M>
void
ERModel<M>::
internal_evolution_step(
    M* mnet,
    typename M::layer_type* layer,
    GenericObjectList<Vertex>& available_actors
)
{
    (void)mnet;
    (void)available_actors;
    // Randomly pick two nodes (uniform probability) and connect them
    auto v1 = layer->vertices()->get_at_random();
    auto v2 = layer->vertices()->get_at_random(); // this allows self-edges
    layer->edges()->add(v1,v2);
}


template <typename M>
void
ERModel<M>::
external_evolution_step(
    M* mnet,
    typename M::layer_type* target_layer,
    GenericObjectList<Vertex>& available_actors,
    const typename M::layer_type* ext_layer
)
{
    (void)mnet;
    (void)available_actors;
    // Randomly pick an edge (uniform probability) on the external layer and connect its ends on the target (if they are present)
    if (ext_layer->edges()->size()==0)
    {
        return;
    }

    auto e = ext_layer->edges()->get_at_random();

    if (!target_layer->vertices()->contains(e->v1))
    {
        return;
    }

    if (!target_layer->vertices()->contains(e->v2))
    {
        return;
    }

    target_layer->edges()->add(e->v1,e->v2);
}

template <typename M>
void
ERModel<M>::
init_step(
    M* mnet,
    typename M::layer_type* layer,
    GenericObjectList<Vertex>& available_actors
)
{
    (void)mnet;
    if (available_actors.size()<m0)
    {
        throw core::WrongParameterException("not enough actors available to initialize the layer (less than m0)");
    }

    std::set<const Vertex*> new_actors;

    // choosing the m0 actors
    for (size_t i=0; i<m0; i++)
    {
        auto new_actor = available_actors.get_at_random();
        new_actors.insert(new_actor);
        available_actors.erase(new_actor);
    }

    // adding the actors to the layer
    for (const Vertex* actor: new_actors)
    {
        layer->vertices()->add(actor);
    }
}

}
}
