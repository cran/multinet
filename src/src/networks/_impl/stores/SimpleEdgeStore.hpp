#ifndef UU_NET_DATASTRUCTURES_STORES_MDSIMPLEEDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_MDSIMPLEEDGESTORE_H_

#include <unordered_set>
#include "networks/_impl/stores/EdgeStore.hpp"

namespace uu {
namespace net {


class
    SimpleEdgeStore final :
    public EdgeStore,
    public std::enable_shared_from_this<SimpleEdgeStore>
{

    typedef EdgeStore super;


  public:

    typedef const Edge* get_return_type;

    SimpleEdgeStore(
        VCube* cube1,
        VCube* cube2,
        EdgeDir dir,
        LoopMode loops
    );

    virtual
    ~SimpleEdgeStore() {}
    
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


    /**
     * Adds a new edge.
     * @param e edge to be added.
     * @return a pointer to the new edge, or nullptr if the edge already exists.
     **/
    virtual
    const Edge*
    add(
        std::shared_ptr<const Edge>  e
    ) override;

    const Edge *
    add(
        const Vertex* vertex1,
        const Vertex* vertex2
    );

    /**
     * Returns an edge.
     * This function can also be used to check if an edge is present.
     * @param vertex1 a pointer to the "from" actor if directed, or to one end
     * of the edge if undirected.
     * @param vertex2 a pointer to the "to" actor if directed, or one end
     * of the edge if undirected.
     * @return a pointer to the requested edge, or nullptr if it does not exist.
     **/
    const Edge*
    get(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    ) const;

    const Edge*
    get(
        const Vertex* vertex1,
        const Vertex* vertex2
    ) const;

    const Edge*
    get(
        const typename Edge::key_type& key
    ) const;

    bool
    contains(
        const typename Edge::key_type& key
    ) const;

    virtual
    bool
    erase(
        const Edge* e
    ) override;

    bool
    erase(
        const typename Edge::key_type& key
    );

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
    std::unordered_map<const VCube*, std::unordered_map<const VCube*, std::unordered_map<const Vertex*, std::unordered_map<const Vertex*, const Edge*>>>> cidx_edge_by_vertexes;
};


}
}

#endif
