/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_GENERICEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_GENERICEDGESTORE_H_

#include <unordered_set>
#include <unordered_map>
#include "core/datastructures/containers/SharedPtrSortedRandomSet.hpp"
#include "core/datastructures/observers/Subject.hpp"
#include "objects/EdgeDir.hpp"
#include "objects/EdgeMode.hpp"
#include "net/datastructures/containers/GenericObjectList.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

/**
 * An Edge Store is a basic class to store edges. It provides functionality shared among
 * different types of edge stores.
 *
 * Once an edge store has been created with a given directionality (DIRECTED or UNDIRECTED),
 * only edges with the same directionality can be added to the store.
 *
 * E must be a class with members:
 * const V* v1, const V* v2, EdgeDir dir
 */
template<typename E, typename V>
class GenericEdgeStore :
    public core::SharedPtrSortedRandomSet<const E>,
    public core::Subject<const E>
{

  private:
    typedef core::SharedPtrSortedRandomSet<const E> super;

  protected:

    GenericEdgeStore(
        EdgeDir dir
    );

  public:

    using super::add;
    using super::erase;
    using super::size;

    virtual
    const E*
    add(
        std::shared_ptr<const E> e
    ) override;

    virtual
    bool
    erase(
        const E* e
    ) override = 0;

    /**
     * Deletes all edges incident to a vertex.
     **/
    virtual
    void
    erase(
        const V* v
    ) = 0;


    /**
     * @brief Returns the nodes with an edge from/to the input vertex.
     * @param node pointer to the node.
     * @param mode IN, OUT or INOUT.
     * @return the list of neighbors.
     **/
    const
    GenericObjectList<V>*
    neighbors(
        const V* vertex,
        EdgeMode mode
    ) const;

    /**
     * @brief Returns the nodes with an edge from/to the input vertex.
     * @param node pointer to the node.
     * @param mode IN, OUT or INOUT.
     * @return the list of neighbors.
     **/
    const
    GenericObjectList<E>*
    incident(
        const V* vertex,
        EdgeMode mode
    ) const;


    bool
    is_directed(
    );

    virtual
    std::string
    summary(
    ) const;


  protected:

    /** Edge directionality */
    EdgeDir edge_directionality;

    // Indexes to sets of objects (Set IDX):
    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<V>>> sidx_neighbors_out;
    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<V>>> sidx_neighbors_in;
    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<V>>> sidx_neighbors_all;

    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<E>>> sidx_incident_out;
    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<E>>> sidx_incident_in;
    std::unordered_map<const V*, std::unique_ptr<GenericObjectList<E>>> sidx_incident_all;

};



template<typename E, typename V>
GenericEdgeStore<E,V>::
GenericEdgeStore(
    EdgeDir dir
)
{
    edge_directionality = dir;
}


template<typename E, typename V>
const E*
GenericEdgeStore<E,V>::
add(
    std::shared_ptr<const E> e
)
{
    core::assert_not_null(e.get(), "add", "e");

    if (e->dir != edge_directionality)
    {
        throw core::OperationNotSupportedException("wrong edge directionality");
    }

    const E* new_edge = core::SharedPtrSortedRandomSet<const E>::add(e);

    if (!new_edge) // edge already existing
    {
        return nullptr;
    }

    if (sidx_neighbors_out.count(e->v1)==0)
    {
        sidx_neighbors_out[e->v1] = std::make_unique<GenericObjectList<V>>();
        sidx_incident_out[e->v1] = std::make_unique<GenericObjectList<E>>();
    }

    sidx_neighbors_out[e->v1]->add(e->v2);
    sidx_incident_out[e->v1]->add(new_edge);

    if (sidx_neighbors_in.count(e->v2)==0)
    {
        sidx_neighbors_in[e->v2] = std::make_unique<GenericObjectList<V>>();
        sidx_incident_in[e->v2] = std::make_unique<GenericObjectList<E>>();
    }

    sidx_neighbors_in[e->v2]->add(e->v1);
    sidx_incident_in[e->v2]->add(new_edge);

    if (sidx_neighbors_all.count(e->v1)==0)
    {
        sidx_neighbors_all[e->v1] = std::make_unique<GenericObjectList<V>>();
        sidx_incident_all[e->v1] = std::make_unique<GenericObjectList<E>>();
    }

    sidx_neighbors_all[e->v1]->add(e->v2);
    sidx_incident_all[e->v1]->add(new_edge);

    if (sidx_neighbors_all.count(e->v2)==0)
    {
        sidx_neighbors_all[e->v2] = std::make_unique<GenericObjectList<V>>();
        sidx_incident_all[e->v2] = std::make_unique<GenericObjectList<E>>();
    }

    sidx_neighbors_all[e->v2]->add(e->v1);
    sidx_incident_all[e->v2]->add(new_edge);

    if (!is_directed())
    {

        if (sidx_neighbors_out.count(e->v2)==0)
        {
            sidx_neighbors_out[e->v2] = std::make_unique<GenericObjectList<V>>();
            sidx_incident_out[e->v2] = std::make_unique<GenericObjectList<E>>();
        }

        sidx_neighbors_out[e->v2]->add(e->v1);
        sidx_incident_out[e->v2]->add(new_edge);

        if (sidx_neighbors_in.count(e->v1)==0)
        {
            sidx_neighbors_in[e->v1] = std::make_unique<GenericObjectList<V>>();
            sidx_incident_in[e->v1] = std::make_unique<GenericObjectList<E>>();
        }

        sidx_neighbors_in[e->v1]->add(e->v2);
        sidx_incident_in[e->v1]->add(new_edge);
    }

    return new_edge;
}



template<typename E, typename V>
const
GenericObjectList<V>*
GenericEdgeStore<E,V>::
neighbors(
    const V* vertex,
    EdgeMode mode
) const
{

    core::assert_not_null(vertex, "neighbors", "vertex");

    if (mode==EdgeMode::IN)
    {
        if (sidx_neighbors_in.count(vertex)==0)
        {
            return GenericObjectList<V>::empty.get();
        }

        return sidx_neighbors_in.at(vertex).get();
    }

    else if (mode==EdgeMode::OUT)
    {
        if (sidx_neighbors_out.count(vertex)==0)
        {
            return GenericObjectList<V>::empty.get();
        }

        return sidx_neighbors_out.at(vertex).get();
    }

    else if (mode==EdgeMode::INOUT)
    {
        if (sidx_neighbors_all.count(vertex)==0)
        {
            return GenericObjectList<V>::empty.get();
        }

        return sidx_neighbors_all.at(vertex).get();
    }

    else
    {
        throw core::WrongParameterException("neighborhood mode");
    }
}


template<typename E, typename V>
const
GenericObjectList<E>*
GenericEdgeStore<E,V>::
incident(
    const V* vertex,
    EdgeMode mode
) const
{

    core::assert_not_null(vertex, "incident", "vertex");

    if (mode==EdgeMode::IN)
    {
        if (sidx_incident_in.count(vertex)==0)
        {
            return GenericObjectList<E>::empty.get();
        }

        return sidx_incident_in.at(vertex).get();
    }

    else if (mode==EdgeMode::OUT)
    {
        if (sidx_incident_out.count(vertex)==0)
        {
            return GenericObjectList<E>::empty.get();
        }

        return sidx_incident_out.at(vertex).get();
    }

    else if (mode==EdgeMode::INOUT)
    {
        if (sidx_incident_all.count(vertex)==0)
        {
            return GenericObjectList<E>::empty.get();
        }

        return sidx_incident_all.at(vertex).get();
    }

    else
    {
        throw core::WrongParameterException("neighborhood mode");
    }
}


template<typename E, typename V>
bool
GenericEdgeStore<E,V>::
is_directed(
)
{
    return edge_directionality==EdgeDir::DIRECTED?true:false;
}


template<typename E, typename V>
std::string
GenericEdgeStore<E,V>::
summary(
) const
{
    size_t s = size();

    std::string summary = std::to_string(s) +
                          (s==1?" edge":" edges");
    return summary;
}

}
}

#endif
