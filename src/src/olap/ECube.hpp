#ifndef UU_OLAP_ECUBE_H_
#define UU_OLAP_ECUBE_H_

#include <memory>
#include <string>
#include <unordered_map>
#include "networks/_impl/stores/SimpleEdgeStore.hpp"
#include "olap/VCube.hpp"
#include "olap/MLCube.hpp"
#include "objects/Edge.hpp"

namespace uu {
namespace net {

/**
 * An Edge Cube (ECube) allows us to store edges between two VCubes (or, as a special case,
 * between a VCube and itself).
 * As a VCube, an ECube provides the functionality of a set of edges, allows edges attributes,
 * and provides an internal organization into cells (dimensions and members).
 */
class
    ECube
{

  public:

    const std::string name;

    typedef const Edge value_type;
    typedef SimpleEdgeStore store_type;

    /**
     * Constructs an empty ECube with no dimensions (order 0).
     * @param name name of the cube
     * @param cube1 cube where the first end of the edges must be found
     * @param cube2 cube where the first end of the edges must be found
     * @param dir edge directionality, either EdgeDir::UNDIRECTED (default) or EdgeDir::DIRECTED
     * @param loops loop mode, either LoopMode::ALLOWED (default) or LoopMode::DISALLOWED
     */
    ECube(
        const std::string& name,
        VCube* cube1,
        VCube* cube2,
        EdgeDir dir = EdgeDir::UNDIRECTED,
        LoopMode loops = LoopMode::ALLOWED
    );

    virtual
    ~ECube()
    {
    }

    /**
     * Returns the vertices with an edge from/to the input vertex.
     * @param vertex pointer to the vertex
     * @param cube pointer to the cube containing the vertex
     * @param mode EdgeMode::IN, EdgeMode::OUT or EdgeMode::INOUT (default)
     * @return the list of neighbors
     */
    const
    GenericObjectList<Vertex>*
    neighbors(
        const Vertex* vertex,
        const VCube* cube,
        EdgeMode mode = EdgeMode::INOUT
    ) const;


    /**
     * Returns the vertices with an edge from/to the input vertex.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCube to use if the vertex is present in both.
     * @param vertex pointer to the vertex
     * @param mode EdgeMode::IN, EdgeMode::OUT or EdgeMode::INOUT (default)
     * @throw OperationNotSupportedException if the two end VCubes are different
     * @return the list of neighbors
     */
    const
    GenericObjectList<Vertex>*
    neighbors(
        const Vertex* vertex,
        EdgeMode mode = EdgeMode::INOUT
    ) const;


    /**
     * Returns the edges incident to the input vertex.
     * @param vertex pointer to the vertex
     * @param cube pointer to the cube containing the vertex
     * @param mode EdgeMode::IN, EdgeMode::OUT or EdgeMode::INOUT (default)
     * @return the list of incident edges
     */
    const
    GenericObjectList<Edge>*
    incident(
        const Vertex* vertex,
        const VCube* cube,
        EdgeMode mode = EdgeMode::INOUT
    ) const;


    /**
     * Returns the edges incident to the input vertex.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCube to use if the vertex is present in both.
     * @param vertex pointer to the vertex
     * @param mode EdgeMode::IN, EdgeMode::OUT or EdgeMode::INOUT (default)
     * @throw OperationNotSupportedException if the two end VCubes are different
     * @return the list of incident edges
     */
    const
    GenericObjectList<Edge>*
    incident(
        const Vertex* vertex,
        EdgeMode mode = EdgeMode::INOUT
    ) const;

    /** Return the first end VCube. */
    const VCube*
    vcube1(
    ) const;


    /** Return the second end VCube. */
    const VCube*
    vcube2(
    ) const;


    /**
     * Returns the number of elements in the cube.
     */
    size_t
    size(
    ) const;

    /**
     * Returns the order (number of dimensions) of this cube.
     */
    size_t
    order(
    ) const;

    /**
     * Returns the number of members for each dimension.
     */
    std::vector<size_t>
    dsize(
    ) const;

    /**
     * Returns the names of the dimensions of this cube.
     */
    const std::vector<std::string>&
    dimensions(
    ) const;

    /**
     * Returns the members of all dimensions.
     */
    const std::vector<std::vector<std::string>>&
            members(
            ) const;

    /**
     * Returns the members of a dimension.
     */
    const std::vector<std::string>&
    members(
        const std::string& dim
    ) const;

    /**
     * Returns the members of a dimension.
     */
    const std::vector<std::string>&
    members(
        size_t dim_idx
    ) const;

    /** Returns an iterator to the first edge in the cube */
    typename SimpleEdgeStore::iterator
    begin(
    ) const;

    /** Returns an iterator after the last edge in the cube */
    typename SimpleEdgeStore::iterator
    end(
    ) const;

    /**
     * Inserts an existing edge in the cube.
     * @return a pointer to the edge
     */
    const Edge *
    add(
        std::shared_ptr<const Edge> edge
    );

    /**
     * Inserts an existing edge in the cube.
     * @return a pointer to the edge
     */
    const Edge *
    add(
        const Edge* edge
    );


    /**
     * Creates a new edge and inserts it in the cube.
     * @return a pointer to the edge
     */
    const Edge *
    add(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    );


    /**
     * Creates a new edge and adds it to the cube.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCube to use if the vertex is present in both.
     * @throw OperationNotSupportedException if the two end VCubes are different
     * @return a pointer to the edge
     */
    const Edge *
    add(
        const Vertex* vertex1,
        const Vertex* vertex2
    );

    /** Returns true if the input edge is present in the cube. */
    bool
    contains(
        const Edge* e
    ) const;

    /** Returns true if the edge is present in the cube. */
    bool
    contains(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    ) const;

    /**
     * Returns true if the edge is present in the cube.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCubes to use if the vertices are present in both.
     * @throw OperationNotSupportedException if the two end VCubes are different
     */
    bool
    contains(
        const Vertex* vertex1,
        const Vertex* vertex2
    ) const;


    /** Returns the edge if it is present in the cube, or nullptr if it isn't. */
    const Edge *
    get(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    ) const;

    /** Returns the edge if it is present in the cube, or nullptr if it isn't.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCubes to use if the vertices are present in both.
     * @throw OperationNotSupportedException if the two end VCubes are different
     */
    const Edge *
    get(
        const Vertex* vertex1,
        const Vertex* vertex2
    ) const;

    /** Returns the edge at the given position in the cube.
     * @throw ElementNotFoundException if the index is <0 or >size()-1
     */
    const Edge *
    at(
        size_t pos
    ) const;

    /** Returns a random edge, with uniform probability. */
    const Edge *
    get_at_random(
    ) const;

    /** Returns the position of edge e in the cube, or -1 if e is not present in the cube. */
    int
    index_of(
        const Edge * e
    ) const;

    /**
     * Erases edge e from the cube, if present.
     * @return true if the edge has been erased
     */
    bool
    erase(
        const Edge * e
    );

    /**
     * Erases the edge from the cube, if present.
     * @return true if the object has been erased
     */
    bool
    erase(
        const Vertex* vertex1,
        const VCube* cube1,
        const Vertex* vertex2,
        const VCube* cube2
    );

    /**
     * Erases the edge from the cube, if present.
     * This function can only be used when both end VCubes are the same,
     * otherwise it would be ambiguous which VCubes to use if the vertices are present in both.
     * @throw OperationNotSupportedException if the two end VCubes are different
     * @return true if the object has been erased
     */
    bool
    erase(
        const Vertex* vertex1,
        const Vertex* vertex2
    );

    /**
     * Returns the attribute store associated to this cube
     */
    core::AttributeStore<const Edge>*
    attr(
    ) const;

    /**
     * Adds a new dimension.
     * If provided, the discretize function specifies for each edge in which of the
     * new cells it should be inserted, depending on the member of the new dimension.
     */
    template <class D>
    void
    add_dimension(
        const std::string& name,
        const std::vector<std::string>& members,
        const D& discretize
    );


    void
    add_dimension(
        const std::string& name,
        const std::vector<std::string>& members
    );

    /**
     * Adds a member to an existing dimension.
     */
    void
    add_member(
        const std::string& name,
        const std::string& member//,
        //bool (*copy)(const Vertex*) = nullptr
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    SimpleEdgeStore*
    cell(
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const SimpleEdgeStore*
    cell(
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    SimpleEdgeStore*
    cell(
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const SimpleEdgeStore*
    cell(
        const std::vector<std::string>& index
    ) const;

    /** Returns the number of cells in the cube. */
    size_t
    num_cells(
    ) const;

    /**
     * Returns a string representation of the cube.
     */
    std::string
    to_string(
    ) const;

    /**
     * Attaches an observer to the cube.
     * Every time an edge is erased from or added to the cube,
     * the observer is notified so that the action can trigger a reaction (e.g., the
     * propagation of a deletion) or be prevented.
     */
    void
    attach(
        core::Observer<const Edge>* obs
    );

    /**
     * Returns true if edges in this cube are directed.
     */
    bool
    is_directed(
    ) const;

    /**
     * Returns true if edges in this cube can join the same vertex in the same cube.
     * This is only possible if the two end VCubes are the same.
     */
    bool
    allows_loops(
    ) const;

    /**
     * Returns a new store of the same type used in the cells of the cube.
     * This has the same EdgeDir and LoopMode.
     */
    std::shared_ptr<SimpleEdgeStore>
    get_store(
    ) const;

    /**
     * Notifies the cube that a vertex has been erased from one of its end cubes.
     * This triggers the deletion of all edges incident to it.
     */
    void
    erase(
        const VCube* vcube,
        const Vertex* vertex
    );

  protected:

    /**
     * Constructs a non-initialized cube with the specified dimensions and members.
     */
    std::unique_ptr<ECube>
    skeleton(
        const std::string& name,
        const std::vector<std::string>& dimensions,
        const std::vector<std::vector<std::string>>& members
    )  const;

    /**
     * Initializes the store where all the edges are kept.
     */
    SimpleEdgeStore*
    init(
    );

    /**
     * Initializes the store where all the edges are kept with the given store.
     */
    SimpleEdgeStore*
    init(
        const std::shared_ptr<SimpleEdgeStore>& store
    );

    /**
     * Initializes the cell at the given index with the given store.
     */
    SimpleEdgeStore*
    init(
        const std::vector<size_t>& index,
        const std::shared_ptr<SimpleEdgeStore>& store
    );

    /**
     * Initializes the cell at the given position with the given store.
     */
    SimpleEdgeStore*
    init(
        size_t pos,
        const std::shared_ptr<SimpleEdgeStore>& store
    );

    /**
     * Initializes the cell at the given index with an empty store.
     */
    SimpleEdgeStore*
    init(
        const std::vector<size_t>& index
    );

    /**
     * Initializes the cell at the given position with an empty store.
     */
    SimpleEdgeStore*
    init(
        size_t pos
    );

    /**
     * Creates an observer so that when edges are inserted to or erased from cell to
     * which this observer has been attached, the set of edges associated to the cube
     * is also updated.
     */
    core::UnionObserver<SimpleEdgeStore>*
    register_obs(
    );

    /**
     * Makes sure that when a vertex is inserted to or erased from the cell
     * at the given index, the set of vertices associated to the cube is also updated.
     */
    void
    register_obs(
        const std::vector<size_t>& index
    );

    /**
     * Makes sure that when a vertex is inserted to or erased from the cell
     * at the given position, the set of vertices associated to the cube is also updated.
     */
    void
    register_obs(
        size_t pos
    );

  private:

    // A VCube is implemented as a specialization of a Multilayer Cube (MLCube)
    std::unique_ptr<MLCube<SimpleEdgeStore>> data_;

    // End VCube's
    VCube* cube1_;
    VCube* cube2_;

    /** Edge directionality */
    EdgeDir dir_;

    /** Loop mode (ALLOWED or DISALLOWED) */
    LoopMode loops_;


};



}
}

#include "ECube.ipp"

#endif
