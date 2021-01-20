/**
 * History:
 * - 2019.07.21 File created
 */

#ifndef UU_MNET_OLAP_ECUBE_H_
#define UU_MNET_OLAP_ECUBE_H_

#include <memory>
#include <string>
#include <unordered_map>
#include "networks/_impl/stores/MDSimpleEdgeStore.hpp"
#include "networks/_impl/stores/VertexStore.hpp"
#include "olap/MLCube.hpp"
#include "objects/MLEdge.hpp"

namespace uu {
namespace net {

/**
 * Similar to an edge store, but updates happen at cell level
 */
class
    ECube
{

  private:

    std::unique_ptr<MLCube<MDSimpleEdgeStore<VertexStore>>> cube_;
    const VertexStore* vc1;
    const VertexStore* vc2;

    std::string name_;

    typedef MLEdge<Vertex, VertexStore> IEdge;
    typedef MDSimpleEdgeStore<VertexStore>* entry_type;
    typedef const IEdge* element_type;

  public:

    // ECube(const std::vector<size_t>& dim);

    ECube(
        //const std::string& name,
        const VertexStore* vc1,
        const VertexStore* vc2,
        EdgeDir dir,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );

    std::unique_ptr<ECube>
    model(
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    ) const;


    const VertexStore*
    vcube1(
    ) const;


    const VertexStore*
    vcube2(
    ) const;

    const MDSimpleEdgeStore<VertexStore>*
    edges(
    ) const;

    /** Returns a const iterator to the first object in the cube
     @todo should this be const_iterator?
    MDSimpleEdgeStore<VertexStore>::iterator
    begin(
    ) const;

    ** Returns a const iterator after the last object in the cube
     @todo should this be const_iterator?
    MDSimpleEdgeStore<VertexStore>::iterator
    end(
    ) const;*/

    /**
     * Returns the size of the cube, that is, the number of members for each dimension.
     */
    std::vector<size_t>
    size(
    ) const;

    /*const core::UnionSortedRandomSet<typename CONTAINER_TYPE::value_type>*
    elements(
    ) const;*

    ** Returns true if an object with the input id is present in the collection
    bool
    contains(
        const IEdge* v
    ) const;

    const IEdge*
    get(
        const Vertex* v1,
        const VertexStore* l1,
        const Vertex* v2,
        const VertexStore* l2
    ) const;*/

    /**
    * Returns the cell at the given position in the cube.
    */
    MDSimpleEdgeStore<VertexStore>*
    operator[](
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    MDSimpleEdgeStore<VertexStore>*
    operator[](
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    const MDSimpleEdgeStore<VertexStore>*
    operator[](
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     */
    const MDSimpleEdgeStore<VertexStore>*
    operator[](
        const std::vector<std::string>& index
    ) const;


    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    MDSimpleEdgeStore<VertexStore>*
    at(
        const std::vector<size_t>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    MDSimpleEdgeStore<VertexStore>*
    at(
        const std::vector<std::string>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const MDSimpleEdgeStore<VertexStore>*
    at(
        const std::vector<size_t>& index
    ) const;

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const MDSimpleEdgeStore<VertexStore>*
    at(
        const std::vector<std::string>& index
    ) const;

    core::AttributeStore<IEdge>*
    attr(
    );


    const core::AttributeStore<IEdge>*
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
    MDSimpleEdgeStore<VertexStore>*
    init(
        const std::vector<size_t>& index
    );


    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    MDSimpleEdgeStore<VertexStore>*
    init(
        const std::vector<size_t>& index,
        const std::shared_ptr<MDSimpleEdgeStore<VertexStore>> cell
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
        core::Observer<const IEdge>* obs
    );

    /*
    static
    std::unique_ptr<ECube>
    create(
        const std::string& name,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );*/


    bool
    is_directed(
    ) const;


  private:

    /** Edge directionality */
    EdgeDir edge_directionality;

    std::vector<size_t>
    index_of(
        const std::vector<std::string>& pos
    ) const;

};



}
}

#endif
