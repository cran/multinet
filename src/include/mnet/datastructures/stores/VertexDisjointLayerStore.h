/**

 */

#ifndef UU_NET_DATASTRUCTURES_STORES_VERTEXDISJOINTLAYERSTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_VERTEXDISJOINTLAYERSTORE_H_

#include <array>
#include <unordered_map>
#include <utility> // for std::pair
#include <tuple>
//#include "mnet/datastructures/LayerObserver.h"
//#include "mnet/datastructures/ForwardLayerObserver.h"

namespace uu {
namespace net {

template <typename... GraphTypes>
class VertexDisjointLayerStore
{

  public:

    VertexDisjointLayerStore(
        std::unique_ptr<GraphTypes>... init
    );

    template <int N>
    typename std::tuple_element< N, std::tuple<GraphTypes*...>>::type
            get(
            )
    {
        return std::get<N>(layers).get();
    }

    template <int N>
    typename std::tuple_element< N, std::tuple<GraphTypes*...>>::type
            get(
            ) const
    {
        return std::get<N>(layers).get();
    }

    size_t
    pos(
        const std::string& layer_name
    )
    {
        // @todo check
        return cidx_layerposition_by_name.at(layer_name);
    }

    /*void
    attach(
        const std::shared_ptr<LayerObserver<Vertex> >& observer
    );*/

    virtual
    std::string
    summary(
    ) const;

  private:
    template <std::size_t ... Is>
    void
    assign(std::index_sequence<Is...> const &);


    template <int N>
    void
    assign();

  protected:

    std::tuple<std::unique_ptr<GraphTypes>...> layers;

    /*std::array<std::shared_ptr<ForwardLayerObserver<Vertex> >,2> layer_observers  = {{ForwardLayerObserver<Vertex>::create(0), ForwardLayerObserver<Vertex>::create(1)}};
    */

    //EdgeDir edge_directionality;

    std::unordered_map<std::string, size_t> cidx_layerposition_by_name;
};


template <typename... GraphTypes>
VertexDisjointLayerStore<GraphTypes...>::
VertexDisjointLayerStore(
    std::unique_ptr<GraphTypes>... init
)
{


    layers = std::make_tuple(std::move(init)...);

    //assign(std::make_index_sequence<2>());

    //for (size_t i=0; i<size_of...(init); i++)
    //{
    //std::cout << get<i>() <<
    // @todo cidx_layerposition_by_name[init.at(0)] = 0;
    // @todo get<0>()->vertices()->attach(layer_observers.at(0));
    //}
}


/*
template <typename... GraphTypes>
template <std::size_t ... Is>
void
VertexDisjointLayerStore<GraphTypes...>::
assign(std::index_sequence<Is...> const &)
{
    (assign<Is>()),...);
    //cidx_layerposition_by_name[name] = pos;
}

template <typename... GraphTypes>
template <int N>
void
VertexDisjointLayerStore<GraphTypes...>::
assign()
{
    cidx_layerposition_by_name[get<N>()->name] = N;
}*/

/*
template <typename Graph1, typename Graph2>
void
VertexDisjointLayerStore<Graph1,Graph2>::
attach(
    const std::shared_ptr<LayerObserver<Vertex> >& obs
)
{
    layer_observers.at(0)->attach(obs);
    layer_observers.at(1)->attach(obs);
}*/



template <typename... GraphTypes>
std::string
VertexDisjointLayerStore<GraphTypes...>::
summary(
) const
{
    // @todo
    size_t s = 2;
    std::string summary = std::to_string(s) + (s==1?" layer":" layers");
    return summary;
}


} // namespace net
} // namespace uu

#endif

