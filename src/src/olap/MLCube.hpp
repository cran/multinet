#ifndef UU_NETWORKS_IMPL_OLAP_MLCUBE_H_
#define UU_NETWORKS_IMPL_OLAP_MLCUBE_H_

#include "core/stores/AttributeStore.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/datastructures/containers/UnionSortedRandomSet.hpp"
#include "core/olap/datastructures/NCube.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include "core/datastructures/observers/UnionObserver.hpp"
#include <string>
#include <unordered_map>
#include <vector>

namespace uu {
namespace net {

template <class STORE>
class MLCube
{

  private:

    core::NCube<std::shared_ptr<STORE>> data_;

    std::unique_ptr<core::UnionObserver<STORE, const typename STORE::value_type>> union_obs;

  public:

    typedef STORE* entry_type;
    typedef STORE container_type;
    typedef const typename STORE::value_type value_type;

    /**
     * Creates a cube specifying its dimensions and the members for each dimension.
     */
    //template <class Iterator>
    MLCube(
        std::unique_ptr<STORE> el,
        const std::vector<std::string>& dim,
        const std::vector<std::vector<std::string>>& members
        //Iterator begin,
        //Iterator end
    );


    ~MLCube()
    {
    }

    /**
     * Returns the order (number of dimensions) of this cube.
     */
    size_t
    order(
    ) const;

    /**
     * Returns the size of the cube, that is, the number of members for each dimension.
     */
    std::vector<size_t>
    size(
    ) const;

    /**
     * Returns the number of elements in the store.
     */
    size_t
    num_elements(
    ) const;

    const STORE*
    elements(
    ) const;

    core::AttributeStore<typename STORE::value_type>*
    attr(
    ) const;

    /** Returns a const iterator to the first object in the cube */
    typename std::vector<std::shared_ptr<const STORE>>::const_iterator
            begin(
            ) const;

    /** Returns a const iterator after the last object in the cube */
    typename std::vector<std::shared_ptr<const STORE>>::const_iterator
            end(
            ) const;

    /** Returns an iterator to the first object in the cube */
    typename std::vector<std::shared_ptr<STORE>>::iterator
            begin(
            );

    /** Returns an iterator after the last object in the cube */
    typename std::vector<std::shared_ptr<STORE>>::iterator
            end(
            );

    /**
     * Returns the dimensions of this cube.
     */
    const std::vector<std::string>&
    dim(
    ) const;

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
     * Returns the cell at the given position in the cube.
     */
    STORE*
    operator[](
        const std::vector<size_t>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    STORE*
    operator[](
        const std::vector<std::string>& index
    );

    /**
     * Returns the cell at the given position in the cube.
     */
    const STORE*
    operator[](
        const std::vector<size_t>& index
    ) const;

    /**
     * Returns the cell at the given position in the cube.
     */
    const STORE*
    operator[](
        const std::vector<std::string>& index
    ) const;


    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    STORE*
    at(
        const std::vector<size_t>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    STORE*
    at(
        const std::vector<std::string>& index
    );

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const STORE*
    at(
        const std::vector<size_t>& index
    ) const;

    /** Returns the cell at the given position in the cube.
     * @throw OutOfBoundsException if the index is outside the bounds on the cube
     */
    const STORE*
    at(
        const std::vector<std::string>& index
    ) const;

    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    STORE*
    init(
        const std::vector<size_t>& index,
        const std::shared_ptr<STORE>& store
    );

    /**
     * Creates a new container in the input cell.
     * @throw OutOfBoundsException if the index is outside the bounds of the cube
     * @throw OperationNotSupportedException
     */
    STORE*
    init(
        const std::vector<std::string>& index,
        const std::shared_ptr<STORE>& store
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
  private:

    // all the vertices in the cube
    std::unique_ptr<STORE> elements_;

    // element attributes
    std::unique_ptr<core::AttributeStore<typename STORE::value_type>> attr_;

};

}
}

#include "MLCube.ipp"

#endif

