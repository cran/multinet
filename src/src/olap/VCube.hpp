#ifndef UU_MNET_OLAP_VCUBE_H_
#define UU_MNET_OLAP_VCUBE_H_

#include <memory>
#include <string>
#include <unordered_map>
#include "olap/MLCube.hpp"
#include "networks/_impl/stores/VertexStore.hpp"

namespace uu {
namespace net {

/**
 * Similar to a vertex store, but updates happen at cell level
 */
class
    VCube
{

  private:

    std::unique_ptr<MLCube<VertexStore>> cube_;

    std::string name_;

  public:

    typedef VertexStore* entry_type;
    typedef const Vertex* element_type;
    // VCube(const std::vector<size_t>& dim);

    VCube(
        //const std::string& name,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );

    std::unique_ptr<VCube>
    model(
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    ) const;

    /*
    template <typename Iterator>
    VCube(
        //const std::string& name,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members,
        //Iterator begin,
        //Iterator end
    );
     */

    /** Returns a const iterator to the first object in the cube
     @todo should this be const_iterator?
    VertexStore::iterator
    begin(
    ) const;

    ** Returns a const iterator after the last object in the cube
     @todo should this be const_iterator?
    VertexStore::iterator
    end(
    ) const;*/

    const VertexStore*
    vertices(
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     */
    VertexStore*
    operator[](
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    VertexStore*
    operator[](
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    const VertexStore*
    operator[](
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     */
    const VertexStore*
    operator[](
        const std::vector<std::string>& index
    ) const;


    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    VertexStore*
    at(
        const std::vector<size_t>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    VertexStore*
    at(
        const std::vector<std::string>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const VertexStore*
    at(
        const std::vector<size_t>& index
    ) const;

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const VertexStore*
    at(
        const std::vector<std::string>& index
    ) const;

    /**
     * Returns the size of the cube, that is, the number of members for each dimension.
     */
    std::vector<size_t>
    size(
    ) const;

    /*const core::UnionSortedRandomSet<typename CONTAINER_TYPE::value_type>*
    elements(
    ) const;*/

    /** Returns true if an object with the input id is present in the collection
    bool
    contains(
        const Vertex* v
    ) const;

    const Vertex*
    get(
        const std::string& key
    ) const;

    ** Returns the object at the given position in the collection.
     * @throw ElementNotFoundException if the index is outside the bounds on the set
     *
    const Vertex*
    at(
        size_t pos
    ) const;

    ** Returns a random object, uniform probability *
    const Vertex*
    get_at_random(
    ) const;


    ** Returns the position of the input value in the collection, or -1 *
    int
    index_of(
        const Vertex* v
    ) const;
    */

    core::AttributeStore<Vertex>*
    attr(
    );


    const core::AttributeStore<Vertex>*
    attr(
    ) const;


    /**
     * Returns the order (number of dimensions) of this cube.
     */
    size_t
    order(
    ) const;


    /**
     * Returns the dimensions of this cube.
     */
    const std::vector<std::string>&
    dim(
    ) const;

    /**
     * Returns the members of all dimension.
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
     * Creates a new container in the input cell.
     * @throw OperationNotSupportedException
     */
    void
    init(
    );

    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    VertexStore*
    init(
        const std::vector<size_t>& index
    );


    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    VertexStore*
    init(
        const std::vector<size_t>& index,
        std::shared_ptr<VertexStore> cell
    );

    /*
    friend
    std::unique_ptr<CCube<CONTAINER_TYPE>>
    vslice(
           CCube<CONTAINER_TYPE>* cube,
           const std::vector<std::vector<size_t>>& indexes
           );
    */

    std::string
    to_string(
    ) const;

    void
    attach(
        core::Observer<const Vertex>* obs
    );

    /*
    static
    std::unique_ptr<VCube>
    create(
        const std::string& name,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );*/

    friend
    void
    resize(
        VCube* cube,
        const std::string& dim,
        const std::string& member
    );

    friend
    std::unique_ptr<VCube>
    vslice(
        VCube* cube,
        const std::vector<std::vector<size_t>>& indexes,
        const std::string& name
    );

  protected:

    /*std::vector<size_t>
    index_of(
        const std::vector<std::string>& pos
    ) const;
    void
    resize(
        const std::string& dim,
        const std::string& member
    );

    std::unique_ptr<VCube>
    vslice(
        const std::string& name,
        const std::vector<std::vector<size_t>>& indexes
    );

     */
};



}
}

#endif
