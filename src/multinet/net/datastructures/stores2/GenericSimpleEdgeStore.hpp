/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_GENERICSIMPLEEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_GENERICSIMPLEEDGESTORE_H_

#include <unordered_map>
#include "net/datastructures/stores2/GenericEdgeStore.hpp"

namespace uu {
namespace net {

template<typename E, typename V>
class GenericSimpleEdgeStore :
    public GenericEdgeStore<E,V>
{

  private:
    typedef GenericEdgeStore<E,V> super;

  public:

    /**
     * Constructor.
     */
    GenericSimpleEdgeStore(
        EdgeDir dir
    ) :
        super(dir)
    {}

    /**
     * Adds a new edge.
     * @param e edge to be added.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     **/
    virtual
    const E*
    add(
        std::shared_ptr<const E>  e
    ) override;

    /**
     * Returns an edge.
     * This function can also be used to check if an edge is present.
     * @param vertex1 a pointer to the "from" actor if directed, or to one end
     * of the edge if undirected.
     * @param vertex2 a pointer to the "to" actor if directed, or one end
     * of the edge if undirected.
     * @return a pointer to the requested edge, or nullptr if it does not exist.
     **/
    const E*
    get(
        const V* vertex1,
        const V* vertex2
    ) const;


    using super::add;
    using super::neighbors;
    using super::is_directed;
    using super::attach;
    using super::size;
    using super::summary;

    using super::edge_directionality;
    using super::sidx_neighbors_out;
    using super::sidx_neighbors_in;
    using super::sidx_neighbors_all;
    using super::sidx_incident_out;
    using super::sidx_incident_in;
    using super::sidx_incident_all;
    using super::observers;

    virtual
    bool
    erase(
        const E* const e
    ) override;

    void
    erase(
        const V* const v
    ) override;

    std::string
    summary(
    ) const override;

  protected:

    // Indexes to objects (Component IDX):
    std::unordered_map<const V*, std::unordered_map<const V*, const E*> > cidx_edge_by_vertexes;

};


template<typename E, typename V>
const E *
GenericSimpleEdgeStore<E,V>::
add(
    std::shared_ptr<const E> e
)
{
    if (!e.get())
    {
        throw core::NullPtrException("edge in add(edge)");
    }

    for (auto obs: observers)
    {
        obs->notify_add(e.get());
    }

    if (get(e->v1, e->v2))
    {
        return nullptr;
    }

    const E* new_edge = super::add(e);

    if (!new_edge)
    {
        return nullptr;
    }

    cidx_edge_by_vertexes[e->v1][e->v2] = new_edge;


    /// DIR SPECIFIC.


    if (!is_directed())
    {
        cidx_edge_by_vertexes[e->v2][e->v1] = new_edge;

    }

    return new_edge;
}


template<typename E, typename V>
const E*
GenericSimpleEdgeStore<E,V>::
get(
    const V* vertex1,
    const V* vertex2
) const
{
    if (!vertex1)
    {
        throw core::NullPtrException("vertex1 in get(vertex1, vertex2)");
    }

    if (!vertex2)
    {
        throw core::NullPtrException("vertex2 in get(vertex1, vertex2)");
    }

    if (cidx_edge_by_vertexes.count(vertex1)>0 &&
            cidx_edge_by_vertexes.at(vertex1).count(vertex2)>0)
    {
        return cidx_edge_by_vertexes.at(vertex1).at(vertex2);
    }

    else
    {
        return nullptr;
    }
}



template<typename E, typename V>
bool
GenericSimpleEdgeStore<E,V>::
erase(
    const E* edge
)
{
    //std::cout << "SE " << edge << std::endl;
    if (!edge)
    {
        throw core::NullPtrException("edge in erase(edge)");
    }

    for (auto obs: observers)
    {
        obs->notify_erase(edge);
    }

    cidx_edge_by_vertexes[edge->v1].erase(edge->v2);

    sidx_neighbors_in[edge->v2]->erase(edge->v1);
    sidx_neighbors_out[edge->v1]->erase(edge->v2);
    sidx_incident_in[edge->v2]->erase(edge);
    sidx_incident_out[edge->v1]->erase(edge);


    // if the edge is directed, we erase neighbors only if there isn't
    // an edge in the other direction keeping them neighbors
    if (is_directed())
    {
        if (!get(edge->v2,edge->v1))
        {
            sidx_neighbors_all[edge->v2]->erase(edge->v1);
            sidx_neighbors_all[edge->v1]->erase(edge->v2);
            sidx_incident_all[edge->v2]->erase(edge);
            sidx_incident_all[edge->v1]->erase(edge);
        }
    }

    else
    {
        cidx_edge_by_vertexes[edge->v2].erase(edge->v1);

        sidx_neighbors_in[edge->v1]->erase(edge->v2);
        sidx_neighbors_out[edge->v2]->erase(edge->v1);
        sidx_neighbors_all[edge->v1]->erase(edge->v2);
        sidx_neighbors_all[edge->v2]->erase(edge->v1);
        sidx_incident_in[edge->v1]->erase(edge);
        sidx_incident_out[edge->v2]->erase(edge);
        sidx_incident_all[edge->v1]->erase(edge);
        sidx_incident_all[edge->v2]->erase(edge);
    }

    return core::SharedPtrSortedRandomSet<const E>::erase(edge);
}



template<typename E, typename V>
void
GenericSimpleEdgeStore<E,V>::
erase(
    const V* vertex
)
{

    if (!vertex)
    {
        throw core::NullPtrException("vertex in erase(vertex) from edge store");
    }

    std::unordered_set<const E*> to_erase;

    for (auto neighbor: *neighbors(vertex,EdgeMode::OUT))
    {
        const E* e = get(vertex,neighbor);

        to_erase.insert(e);
    }

    for (auto neighbor: *neighbors(vertex,EdgeMode::IN))
    {
        to_erase.insert(get(neighbor,vertex));
    }


    for (auto e: to_erase)
    {
        erase(e);
    }
}


template<typename E, typename V>
std::string
GenericSimpleEdgeStore<E,V>::
summary(
) const
{
    size_t s = size();
    std::string summary =
        std::to_string(s) +
        (s==1?" edge":" edges");
    return summary;
}

}
}

#endif
