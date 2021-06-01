#ifndef UU_OLAP_SEL_ENTRYITERATOR_H_
#define UU_OLAP_SEL_ENTRYITERATOR_H_

#include <cstddef>
#include <stddef.h>
#include <vector>

#include "olap/sel//Indexes.hpp"
#include "olap/sel//IndexIterator.hpp"

namespace uu {
namespace net {

// @todo add const version

template <typename CUBE>
class EntryIterator
{
  private:

    CUBE* c_;

    IndexIterator idx_;

  public:

    /**
     * Creates a selector.
     * @throw OutOfBoundsException
     */
    EntryIterator(
        CUBE* c,
        const std::vector<std::vector<size_t>>& indexes
    );

    /**
     * Creates a selector.
     * @throw OutOfBoundsException
     */
    EntryIterator(
        CUBE* c,
        std::vector<Indexes>& indexes
    );

    /** Iterator over the objects in this collection. */
    class
        iterator
    {

      public:

        typedef ptrdiff_t difference_type; //almost always ptrdiff_t
        typedef typename CUBE::entry_type value_type; //almost always T
        typedef const typename CUBE::entry_type& reference; //almost always T& or const T&
        typedef typename CUBE::entry_type* pointer; //almost always T* or const T*
        typedef std::forward_iterator_tag iterator_category;

        iterator(
            CUBE* c,
            const IndexIterator::iterator& current
        );

        /*
        iterator(
            typename CUBE::container_type*
        );*/

        /** Return the object pointed by this iterator */
        typename CUBE::entry_type
        operator*(
        );

        /** Moves the iterator to the next object in the collection (prefix) */
        iterator
        operator++(
        );

        /** Moves the iterator to the next object in the collection (postfix) */
        iterator
        operator++(
            int
        );

        /** Checks if this iterator equals the input one */
        bool
        operator==(
            const EntryIterator<CUBE>::iterator& rhs
        );

        /** Checks if this iterator differs from the input one */
        bool
        operator!=(
            const EntryIterator<CUBE>::iterator& rhs
        );

      private:

        CUBE* c_;

        /** Entry currently pointed to by this iterator */
        IndexIterator::iterator current_;

    };

    /** Returns an iterator to the first object in the collection */
    EntryIterator<CUBE>::iterator
    begin(
    ) const;

    /** Returns an iterator after the last object in the collection */
    EntryIterator<CUBE>::iterator
    end(
    ) const;

};

}
}

#include "EntryIterator.ipp"

#endif
