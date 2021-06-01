#ifndef UU_NETWORKS_IMPL_OLAP_MLCUBE_H_
#define UU_NETWORKS_IMPL_OLAP_MLCUBE_H_

#include "core/stores/AttributeStore.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/stores/_impl/UnionSortedRandomSet.hpp"
#include "olap/sel//IndexIterator.hpp"
#include "core/observers/ObserverStore.hpp"
#include "core/observers/UnionObserver.hpp"
#include "olap/op/UniformDiscretization.hpp"
#include <string>
#include <unordered_map>
#include <vector>

namespace uu {
namespace net {

class VCube;
class ECube;
class MECube;

template <class STORE>
class MLCube
    : public core::ObserverStore,
      public core::Subject<const typename STORE::value_type>
{

    friend class VCube;
    friend class ECube;
    friend class MECube;

  public:

    typedef STORE* entry_type;
    typedef STORE container_type;
    typedef const typename STORE::value_type value_type;

    // Name of the cube
    // const std::string name;

    /**
     * Creates a cube of order 0
     */
    MLCube(
        //const std::string& name,
        const std::shared_ptr<STORE>& el
    );

    // skeleton
    MLCube(
        const std::vector<std::string>& dimensions,
        const std::vector<std::vector<std::string>>& members
    );

    /*
    MLCube(
        const MLCube& cube
    );
    */

    ~MLCube()
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

    /** Returns an iterator to the first object in the collection */
    typename STORE::iterator
    begin(
    ) const;

    /** Returns an iterator after the last object in the collection */
    typename STORE::iterator
    end(
    ) const;

    /**
     * Inserts a new object in the collection.
     * @return a pointer to the object
     */
    typename STORE::value_type*
    add(
        std::shared_ptr<typename STORE::value_type> v
    );

    /**
     * Inserts a new object in the collection.
     * @return a pointer to the object
     */
    typename STORE::value_type*
    add(
        typename STORE::value_type* v
    );

    /**
     * Creates a new object and adds it to the store.
     * @return a pointer to the object
     */
    typename STORE::value_type*
    add(
        const typename STORE::key_type& key
    );

    /** Returns true if an object with the input id is present in the collection */
    bool
    contains(
        typename STORE::value_type* v
    ) const;

    /** Returns true if an object with the input key is present in the collection */
    bool
    contains(
        const typename STORE::key_type& key
    ) const;

    /** Returns the object with the input key if present in the collection, or nullptr */
    typename STORE::get_return_type
    get(
        const typename STORE::key_type& key
    ) const;

    /** Returns the object at the given position in the collection.
     * @throw ElementNotFoundException if the index is outside the bounds on the set
     */
    typename STORE::value_type*
    at(
        size_t pos
    ) const;

    /** Returns a random object, uniform probability */
    typename STORE::value_type*
    get_at_random(
    ) const;

    /** Returns the position of the input value in the collection, or -1 */
    int
    index_of(
        typename STORE::value_type* v
    ) const;

    /**
     * Erases obj from the cube, if present.
     * @return true if the object has been erased
     */
    bool
    erase(
        typename STORE::value_type * obj
    );

    /**
     * Erases obj from the cube, if present.
     * @return true if the object has been erased
     */
    bool
    erase(
        const typename STORE::key_type& key
    );

    core::AttributeStore<typename STORE::value_type>*
    attr(
    ) const;

    /**
     * Adds a new dimension.
     */
    template <class SF, class D>
    void
    add_dimension(
        const std::string& name,
        const std::vector<std::string>& members,
        const SF& store_factory,
        const D& discretize
    );


    template <class SF>
    void
    erase_dimension(
        const SF& store_factory
    );
    
    /**
     * Adds a member to an existing dimension.
     */
    template <class SF>
    void
    add_member(
        const std::string& name,
        const std::string& member,
        const SF& store_factory
        //bool (*copy)(typename STORE::value_type*) = nullptr
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
    STORE*
    cell(
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const STORE*
    cell(
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    STORE*
    cell(
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const STORE*
    cell(
        const std::vector<std::string>& index
    ) const;

    size_t
    num_cells(
    ) const;

  protected:

    /**
     * Creates a skeleton cube

    MLCube(
        const std::string& name,
        const std::shared_ptr<STORE>& el,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );*/


    STORE*
    init(
        const std::shared_ptr<STORE>& store
    );

    /**
     * Adds a new container to the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    STORE*
    init(
        const std::vector<size_t>& index,
        const std::shared_ptr<STORE>& store
    );

    STORE*
    init(
        size_t pos,
        const std::shared_ptr<STORE>& store
    );

    /**
     * Adds a new container to the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    STORE*
    init(
        const std::vector<std::string>& index,
        const std::shared_ptr<STORE>& store
    );

    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException

    STORE*
    init(
        const std::vector<size_t>& index
    );
       */
    /*
    virtual
    STORE*
    init(
        size_t pos
    ) = 0;


    virtual
    void
    init(
    ) = 0;
     */

    core::UnionObserver<STORE>*
    register_obs(
    );

    void
    register_obs(
        size_t pos
    );

    void
    register_obs(
        const std::vector<size_t>& index
    );

    /* index of a dimension
    size_t
    index_of(
        const std::string& dim
    ) const;

     index of a member given a dimension
    size_t
    index_of(
        const std::string& dim,
        const std::string& member
    ) const;

     computes a numerical index from a label-based index
    std::vector<size_t>
    index_of(
        const std::vector<std::string>& index
    ) const;

    // OPERATORS

    template <typename Iterator>
    void
    resize(
        const std::string& dimension,
        const std::string& member,
        Iterator begin,
        Iterator end
    );

    MLCube(
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    );

    void
    insert(
        const std::shared_ptr<STORE>& value,
        const std::vector<size_t>& index
    );

    void
    insert(
        const std::shared_ptr<STORE>& value,
        const std::vector<std::string>& index
    );
    */
  protected:


    /*std::unique_ptr<MLCube<STORE>>
    virtual
    model(
    const std::string& cube_name,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
    ) const = 0;


    size_t
    pos(
        const std::vector<size_t>& index,
        const std::vector<size_t>& dimensions
    ) const;
    */

    size_t
    pos(
        const std::vector<size_t>& index
    ) const;


    std::vector<size_t>
    index_of(
        const std::vector<std::string>& members
    ) const;



    size_t
    pos(
        const std::vector<std::string>& index
    ) const;

    /**
     *  Creates new storage for the cube based on the current metadata
     *  (dimensions, size, ...)
     */
    template <class SF>
    void
    resize(
        const SF& store_factory
    );
    
    
    /**
     *  Distribute elements from each previous cell to the new cells
     *  based on the discretization function f().
     *  Also updates the attributes if some elements are not assigned to
     *  any new cell.
     */
    template <class D>
    void
    discretize(
        const std::vector<std::shared_ptr<STORE>>& old_data,
        const IndexIterator& old_indexes,
        const D& f
    );
    
    template <class D>
    void
    discretize(
        const std::shared_ptr<STORE>& old_elements,
        const D& f
    );
    
    template <class D>
    void
    filter(
        const D& f
    );
    
    void
    compact(
        const std::vector<std::shared_ptr<STORE>>& old_data,
        const IndexIterator& old_indexes
    );
    
    /*
        virtual
        void
        reset(
        ) = 0;
        */

    /*void
    init(
        size_t pos
    );*/

  protected:

    // A STORE containing all the elements in the cube.
    // If the cube has order 0, this is the only STORE.
    // If the cube has order > 0, this store cannot be directly modified but is automatically
    // updated to mirror all the elements contained in the cube's cells.
    std::shared_ptr<STORE> elements_;

    // The cells of the cube.
    std::vector<std::shared_ptr<STORE>> data_;

    // When the cube has order > 0, this observer makes sure that the STORE elements_
    // contains all the elements contained in the cube's cells.
    std::unique_ptr<core::UnionObserver<STORE>> union_obs;

    // Dimensions (that is, number of members for each dimension)
    std::vector<size_t> size_;

    // Offsets
    //std::vector<size_t> off_;

    // Dimension names
    std::vector<std::string> dim_;

    // Index of each dimension (by name)
    std::unordered_map<std::string,size_t> dim_idx_;

    // Members, for each dimension
    std::vector<std::vector<std::string>> members_;

    // Index of each member (by name), for each dimension
    std::vector<std::unordered_map<std::string, size_t>> members_idx_;

    // Element attributes
    std::unique_ptr<core::AttributeStore<typename STORE::value_type>> attr_;


};

}
}

#include "MLCube.ipp"

#endif

