#include "core/exceptions/OutOfBoundsException.hpp"

namespace uu {
namespace net {

template <typename CUBE>
EntryIterator<CUBE>::
EntryIterator(
    CUBE* c,
    const std::vector<std::vector<size_t>>& indexes
)
    : c_(c), idx_(IndexIterator(indexes))
{
    // @todo check null

}


template <typename CUBE>
EntryIterator<CUBE>::
EntryIterator(
    CUBE* c,
    std::vector<Indexes>& indexes
)
{
    // @todo check null
    c_ = c;

    size_t num_dimensions = c->dim().size();

    if (num_dimensions != indexes.size())
    {
        throw core::OutOfBoundsException("cube dimensions and indexes not matching in size");
    }

    std::vector<std::vector<size_t>> indexes2;

    auto size = c->size();

    for (size_t i = 0; i < num_dimensions; i++)
    {
        indexes[i].eval(size[i]);
        indexes2.push_back(std::vector<size_t>());

        while (indexes[i].has_next())
        {
            indexes2[i].push_back(indexes[i].next());
        }
    }

    idx_ = IndexIterator(indexes2);

}


template <typename CUBE>
typename EntryIterator<CUBE>::iterator
EntryIterator<CUBE>::
begin(
) const
{
    return iterator(c_, idx_.begin());
}


template <typename CUBE>
typename EntryIterator<CUBE>::iterator
EntryIterator<CUBE>::
end(
) const
{
    return iterator(c_, idx_.end());
}


template <typename CUBE>
EntryIterator<CUBE>::iterator::
iterator(
    CUBE* c,
    const IndexIterator::iterator& current
) :
    c_(c), current_(current)
{
}


template <typename CUBE>
typename EntryIterator<CUBE>::iterator
EntryIterator<CUBE>::iterator::
operator++(
)
{
    // PREFIX
    ++current_;

    return *this;
}


template <typename CUBE>
typename EntryIterator<CUBE>::iterator
EntryIterator<CUBE>::iterator::
operator++(
    int
)
{
    // POSTFIX
    auto tmp = *this;

    ++(*this);

    return tmp;
}


template <typename CUBE>
typename CUBE::entry_type
EntryIterator<CUBE>::iterator::
operator*(
)
{
    return c_->at(*current_);
}


template <typename CUBE>
bool
EntryIterator<CUBE>::iterator::
operator==(
    const EntryIterator<CUBE>::iterator& rhs
)
{
    return current_ == rhs.current_;
}


template <typename CUBE>
bool
EntryIterator<CUBE>::iterator::
operator!=(
    const EntryIterator<CUBE>::iterator& rhs
)
{
    return current_ != rhs.current_;
}

}
}
