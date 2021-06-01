#ifndef UU_NET_DATASTRUCTURES_STORES_MDMULTIEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_MDMULTIEDGESTORE_H_

#include <unordered_set>
#include "networks/_impl/stores/EdgeStore.hpp"

namespace uu {
namespace net {


class
    MultiEdgeStore final :
    public EdgeStore,
    public std::enable_shared_from_this<MultiEdgeStore>
{

  private:

    typedef EdgeStore super;

  public:

    typedef core::SortedRandomSet<const Edge*> get_return_type;

    MultiEdgeStore(
        VCube* cube1,
        VCube* cube2,
        EdgeDir dir,
        LoopMode loops
    );

    virtual
    ~MultiEdgeStore() {}

    /**
     * Adds a new edge.
     * Multiple edges between the same pair of vertices are allowed.
     * @param node1 a pointer to the "from" vertex if directed, or to one end of
     * the edge if undirected.
     * @param node2 a pointer to the "to" vertex if directed, or one end of the
     * edge if undirected.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     **/
    virtual
    const Edge*
    add(
        std::shared_ptr<const Edge>  e
    ) override;

    /**
     * Adds a new edge.
     * Multiple edges between the same pair of vertices are allowed.
     * @param node1 a pointer to the "from" vertex if directed, or to one end of
     * the edge if undirected.
     * @param node2 a pointer to the "to" vertex if directed, or one end of the
     * edge if undirected.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     * @throw OperationNotSupportedException if this->cube1() != this->cube2()
     **/
    const Edge *
    add(
        const Vertex* vertex1,
        const Vertex* vertex2
    );

    bool
    contains(
        const typename Edge::key_type& key
    ) const;

    /**
     * Returns an edge.
     * This function can also be used to check if an edge is present.
     * @param vertex1 a pointer to the "from" actor if directed, or to one end
     * of the edge if undirected.
     * @param vertex2 a pointer to the "to" actor if directed, or one end
     * of the edge if undirected.
     * @return a pointer to the requested edge, or nullptr if it does not exist.
     **/
    core::SortedRandomSet<const Edge*>
    get(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    ) const;


    core::SortedRandomSet<const Edge*>
    get(
        const Vertex* vertex1,
        const Vertex* vertex2
    ) const;


    core::SortedRandomSet<const Edge*>
    get(
        const typename Edge::key_type& key
    ) const;

    /**
     * @brief Deletes an existing edge.
     * @param edge a pointer to the edge to be deleted
     * @return true if the object has been erased, false if it was not present.
     **/
    virtual
    bool
    erase(
        const Edge* edge
    ) override;


    bool
    erase(
        const typename Edge::key_type& key
    );

    using super::super;

    //using super::value_type;

    using super::cube1_;
    using super::cube2_;

    using super::add;
    //using super::get;
    using super::contains;
    using super::neighbors;
    using super::incident;
    using super::is_directed;
    using super::attach;
    using super::erase;
    using super::size;
    //using super::summary;

    using super::edges_;
    using super::dir_;
    using super::sidx_neighbors_out;
    using super::sidx_neighbors_in;
    using super::sidx_neighbors_all;
    using super::sidx_incident_out;
    using super::sidx_incident_in;
    using super::sidx_incident_all;
    using super::observers;



    /*
    virtual
    void
    add(
        const VCube* layer
    ) override;

    virtual
    void
    erase(
        const VCube* layer
    ) override;



    virtual
    void
    erase(
          const Vertex* vertex,
          const VCube* layer
    );*/


  protected:

    // Indexes to objects (Component IDX):
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unordered_map<const Vertex*, std::unordered_set<const Edge*>>>>> cidx_edges_by_vertices;

};


}
}

#endif
