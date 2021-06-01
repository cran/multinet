#ifndef UU_NET_DATASTRUCTURES_STORES_MDEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_MDEDGESTORE_H_

#include <memory>
#include <unordered_set>
#include <unordered_map>
#include "core/stores/_impl/SharedPtrSortedRandomSet.hpp"
#include "core/stores/ObjectStore.hpp"
#include "core/observers/ObserverStore.hpp"
#include "core/observers/Subject.hpp"
#include "olap/VCube.hpp"
#include "objects/Edge.hpp"
#include "objects/EdgeDir.hpp"
#include "objects/EdgeMode.hpp"
#include "objects/LoopMode.hpp"
#include "networks/_impl/containers/GenericObjectList.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

class
    EdgeStore
    :
//public core::SharedPtrSortedRandomSet<const Edge>,
// This makes the store allowing observers which can trigger reactions when the store is updated
    public core::Subject<const Edge>,
// This allows the edge store to store its own observers
    public core::ObserverStore
{

    // private:

    // core::SharedPtrSortedRandomSet<const Edge> store_;

  protected:

    /** Cube from where vertices at one end of the edges must come from */
    VCube* cube1_;
    /** Cube from where vertices at the other end of the edges must come from */
    VCube* cube2_;
    /** Edge directionality (DIRECTED or UNDIRECTED) */
    EdgeDir dir_;
    /** Loop mode (ALLOWED or DISALLOWED) */
    LoopMode loops_;

  public:

    typedef const Edge value_type;
    typedef std::tuple<const Vertex*, const VCube*, const Vertex*, const VCube*> key_type;
    typedef core::ObjectStore<Edge>::iterator iterator;

    EdgeStore(
        VCube* cube1,
        VCube* cube2,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        LoopMode loops = LoopMode::ALLOWED
    );

    virtual
    ~EdgeStore() {}

    /** Returns an iterator to the first object in the collection */
    iterator
    begin(
    ) const;

    /** Returns an iterator after the last object in the collection */
    iterator
    end(
    ) const;

    /** Returns the number of objects in the collection */
    size_t
    size(
    ) const;

    virtual
    const Edge*
    add(
        std::shared_ptr<const Edge> e
    );

    virtual
    const Edge*
    add(
        const Edge* e
    );

    /**
     * Adds a new edge.
     * Multiple edges between the same pair of vertices are not allowed.
     * @param vertex1 a pointer to the "from" vertex if directed, or to one end of
     * the edge if undirected.
     * @param vertex2 a pointer to the "to" vertex if directed, or one end of the
     * edge if undirected.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     **/
    virtual
    const Edge *
    add(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    );

    virtual
    const Edge*
    add(
        const typename Edge::key_type& key
    );

    /** Returns true if an object with the input id is present in the collection */
    bool
    contains(
        const Edge* v
    ) const;

    /** Returns true if an object with the input id is present in the collection */
    bool
    contains(
        const typename Edge::key_type& key
    ) const;

    /** Returns the object at the given position in the collection.
     * @throw ElementNotFoundException if the index is outside the bounds on the set
     */
    const Edge*
    at(
        size_t pos
    ) const;

    /** Returns a random object, uniform probability */
    const Edge*
    get_at_random(
    ) const;


    /** Returns the position of the input value in the collection, or -1 */
    int
    index_of(
        const Edge* v
    ) const;


    virtual
    bool
    erase(
        const Edge* e
    ) = 0;

    /**
     * @brief Returns the nodes with an edge from/to the input vertex.
     * @param node pointer to the node.
     * @param mode IN, OUT or INOUT.
     * @return the list of neighbors.
     */
    const
    GenericObjectList<Vertex>*
    neighbors(
        const Vertex* vertex,
        const VCube* cube,
        EdgeMode mode
    ) const;

    /**
     * @brief Returns the nodes with an edge from/to the input vertex.
     * @param node pointer to the node.
     * @param mode IN, OUT or INOUT.
     * @return the list of neighbors.
     **/
    const
    GenericObjectList<Edge>*
    incident(
        const Vertex* vertex,
        const VCube* cube,
        EdgeMode mode
    ) const;


    bool
    is_directed(
    ) const;

    virtual
    void
    erase(
        const VCube* vcube,
        const Vertex* vertex
    );

  protected:


    /** Edges */
    //std::unique_ptr<core::ObjectStore<Edge>> edges_;
    std::unique_ptr<core::SharedPtrSortedRandomSet<const Edge>> edges_;

    // Indexes to sets of objects (Set IDX):
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Vertex>>>>> sidx_neighbors_out;
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Vertex>>>>> sidx_neighbors_in;
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Vertex>>>>> sidx_neighbors_all;

    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Edge>>>>> sidx_incident_out;
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Edge>>>>> sidx_incident_in;
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unique_ptr<GenericObjectList<Edge>>>>> sidx_incident_all;
};

}
}

#endif
