#ifndef UU_MNET_COMMUNITY_PILLARCOMMUNITY_H_
#define UU_MNET_COMMUNITY_PILLARCOMMUNITY_H_

#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <utility>
#include "objects/EdgeMode.hpp"
#include "objects/MLVertex.hpp"

namespace uu {
namespace net {

template <typename M>
class
    PillarCommunity
{
  public:

    std::string
    to_string(
    ) const;

    void
    add_actor(
        const Vertex*
    );

    const std::unordered_set<const Vertex*>&
    get_actors(
    ) const;

    size_t
    num_actors(
    ) const;

    void
    add_layer(
        const typename M::layer_type*
    );

    const std::unordered_set<const typename M::layer_type*>&
    get_layers(
    ) const;

    size_t
    num_layers(
    ) const;

  private:
    std::unordered_set<const Vertex*> actors;
    std::unordered_set<const typename M::layer_type*> layers;
};

template <typename M>
std::unique_ptr<Community<M>>
                           to_vertex_layer_community(
                               PillarCommunity<M>* com
                           );


template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    to_vertex_layer_community_structure(
                                        const std::set<std::unique_ptr<PillarCommunity<M>>>& com
                                    );
// Definitions


template <typename M>
std::unique_ptr<Community<M>>
                           to_vertex_layer_community(
                               PillarCommunity<M>* com
                           )
{
    auto res = std::make_unique<Community<M>>();

    for (auto a: com->get_actors())
    {
        for (auto l: com->get_layers())
        {
            res->add(MLVertex(a,l));
        }
    }

    return res;
}

template <typename M>
std::unique_ptr<CommunityStructure<M>>
                                    to_vertex_layer_community_structure(
                                        const std::set<std::unique_ptr<PillarCommunity<M>>>& com
                                    )
{
    auto res = std::make_unique<CommunityStructure<M>>();

    for (auto&& c: com)
    {
        res->add(std::move(to_vertex_layer_community(c.get())));
    }

    return res;
}

template <typename M>
std::string
PillarCommunity<M>::
to_string(
) const
{
    std::string result = "";
    size_t idx = 0;

    for (auto actor: actors)
    {
        if (idx==0)
        {
            result += "[";
        }

        result += actor->to_string();

        if (idx!=actors.size()-1)
        {
            result += ", ";
        }

        else
        {
            result += "]";
        }

        idx++;
    }

    for (auto layer: layers)
    {
        if (idx==0)
        {
            result += "::[";
        }

        result += layer->to_string();

        if (idx!=layers.size()-1)
        {
            result += ", ";
        }

        else
        {
            result += "]";
        }

        idx++;
    }

    return result;
}


template <typename M>
void PillarCommunity<M>::
add_actor(
    const Vertex* actor
)
{
    actors.insert(actor);
}


template <typename M>
const std::unordered_set<const Vertex*>&
PillarCommunity<M>::
get_actors(
) const
{
    return actors;
}


template <typename M>
void
PillarCommunity<M>::
add_layer(
    const typename M::layer_type* layer
)
{
    layers.insert(layer);
}


template <typename M>
const std::unordered_set<const typename M::layer_type*>&
PillarCommunity<M>::
get_layers(
) const
{
    return layers;
}

}
}


#endif
