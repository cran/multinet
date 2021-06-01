#ifndef UU_OLAP_VCUBE_H_
#define UU_OLAP_VCUBE_H_

#include <memory>
#include <string>
#include <unordered_map>
#include "olap/MLCube.hpp"
#include "networks/_impl/stores/VertexStore.hpp"


namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vslice(
    const std::string& cube_name,
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
);

template <typename C, class D>
void
extend_dimension(
    const C* const cube,
    const std::string& dim_name,
    const std::vector<std::string>& members,
    const D& discretize
);

/**
 * A Vertex Cube (VCube) provides three types of functionality.
 * (1) First, a VCube works as a set of vertices.
 * This is all we need to define the vertices in a simple
 * or directed graph. Therefore, we can add new vertices, we can check if the cube contains
 * a vertex, we can get the n-th vertex from the cube, or by name, or uniformly at random,
 * we can check which position a vertex occupies and we can erase a vertex.
 * (2) Second, a VCube allows us to associate attributes to its vertices.
 * This allows us to define vertices in attributes graphs.
 * (3) Third, a VCube provides an internal organization for its vertices. This allows us,
 * for example, to separate partitions in multimode networks.
 * It allows the creation of dimensions, each of which has one or more members,
 * and to access the vertices in a specific dimension and member (cell).
 */
class
    VCube
{

  public:

    const std::string name;

    typedef const Vertex value_type;
    typedef VertexStore store_type;

    /**
     * Constructs an empty VCube with no dimensions (order 0).
     * @param name name of the cube
     */
    VCube(
        const std::string& name
    );

    VCube(
        const VCube& cube
    );

    virtual
    ~VCube()
    {
    }

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

    /** Returns an iterator to the first vertex in the cube */
    typename VertexStore::iterator
    begin(
    ) const;

    /** Returns an iterator after the last vertex in the cube */
    typename VertexStore::iterator
    end(
    ) const;

    /**
     * Inserts a new vertex in the cube.
     * @return a pointer to the vertex
     */
    const Vertex*
    add(
        const std::shared_ptr<const Vertex>& v
    );

    /**
     * Inserts an existing vertex in the cube.
     * @return a pointer to the vertex
     */
    const Vertex*
    add(
        const Vertex* v
    );

    /**
     * Creates a new vertex and adds it to the cube.
     * @return a pointer to the vertex
     */
    const Vertex*
    add(
        const std::string& key
    );

    /** Returns true if the input vertex is present in the cube. */
    bool
    contains(
        const Vertex* v
    ) const;

    /** Returns true if a vertex named key is present in the cube. */
    bool
    contains(
        const std::string& key
    ) const;

    /** Returns the vertex named key if it is present in the cube, or nullptr if it isn't. */
    const Vertex*
    get(
        const std::string& key
    ) const;

    /** Returns the vertex at the given position in the cube.
     * @throw ElementNotFoundException if the index is <0 or >size()-1
     */
    const Vertex*
    at(
        size_t pos
    ) const;

    /** Returns a random vertex, with uniform probability. */
    const Vertex*
    get_at_random(
    ) const;

    /** Returns the position of vertex v in the cube, or -1 if v is not present in the cube. */
    int
    index_of(
        const Vertex* v
    ) const;

    /**
     * Erases vertex v from the cube, if present.
     * @return true if the vertex has been erased
     */
    bool
    erase(
        const Vertex * v
    );

    /**
     * Erases obj from the cube, if present.
     * @return true if the object has been erased
     */
    bool
    erase(
        const std::string& key
    );

    /**
     * Returns the attribute store associated to this cube
     */
    core::AttributeStore<const Vertex>*
    attr(
    ) const;

    /**
     * Adds a new dimension.
     * If provided, the descretize function specifies for each vertex in which of the
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

    void
    erase_dimension(
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
    
    void
    erase_member(
        const std::string& dim_name
    );
    
    void
    erase_member(
        const std::string& dim_name,
        const std::string& memb_name
    );
    
    void
    sort(
        const std::string& dim_name,
        const std::vector<size_t>& f
    );
    
    void
    pivot(
        const std::vector<size_t>& f
    );
    
    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    VertexStore*
    cell(
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const VertexStore*
    cell(
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    VertexStore*
    cell(
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const VertexStore*
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
        core::Observer<const Vertex>* obs
    );

    /**
     * Returns a new store of the same type used in the cells of the cube.
     */
    std::shared_ptr<VertexStore>
    get_store(
    ) const;

    friend
    std::unique_ptr<VCube>
    vslice<VCube>
    (
        const std::string& cube_name,
        VCube* cube,
        const std::vector<std::vector<size_t>>& indexes
    );


    template <class D>
    friend
    void
    extend_dimension(
        const VCube* const cube,
        const std::string& dim_name,
        const std::vector<std::string>& members,
        const D& discretize
    );

  protected:

    template <class D>
    void
    add_dimension2(
        const std::string& name,
        const std::vector<std::string>& members,
        const D& discretize
    );

    /**
     * Constructs a non-initialized cube with the specified dimensions and members.
     */
    std::unique_ptr<VCube>
    skeleton(
        const std::string& name,
        const std::vector<std::string>& dimensions,
        const std::vector<std::vector<std::string>>& members
    )  const;

    /**
     * Initializes the store where all the vertices are kept.
     */
    VertexStore*
    init(
    );

    /**
     * Initializes the store where all the vertices are kept with the given store.
     */
    VertexStore*
    init(
        const std::shared_ptr<VertexStore>& store
    );

    /**
     * Initializes the cell at the given index with the given store.
     */
    VertexStore*
    init(
        const std::vector<size_t>& index,
        const std::shared_ptr<VertexStore>& store
    );

    /**
     * Initializes the cell at the given position with the given store.
     */
    VertexStore*
    init(
        size_t pos,
        const std::shared_ptr<VertexStore>& store
    );

    /**
     * Initializes the cell at the given index with an empty store.
     */
    VertexStore*
    init(
        const std::vector<size_t>& index
    );

    /**
     * Initializes the cell at the given position with an empty store.
     */
    VertexStore*
    init(
        size_t pos
    );

    /**
     * Creates an observer so that when vertices are inserted to or erased from cell to
     * which this observer has been attached, the set of vertices associated to the cube
     * is also updated.
     */
    core::UnionObserver<VertexStore>*
    register_obs(
    );

    /**
     * Makes sure that when an edge is inserted to or erased from the cell
     * at the given index, the set of edges associated to the cube is also updated.
     */
    void
    register_obs(
        const std::vector<size_t>& index
    );

    /**
     * Makes sure that when an edge is inserted to or erased from the cell
     * at the given position, the set of edges associated to the cube is also updated.
     */
    void
    register_obs(
        size_t pos
    );

  private:

    // A VCube is implemented as a specialization of a Multilayer Cube (MLCube)
    std::unique_ptr<MLCube<VertexStore>> data_;


};



}
}

#include "VCube.ipp"

#endif
