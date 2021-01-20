#include "core/stores/AttributeStore.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/datastructures/containers/UnionSortedRandomSet.hpp"
#include "core/olap/datastructures/NCube.hpp"
#include "core/olap/selection/IndexIterator.hpp"
#include <string>
#include <unordered_map>
#include <vector>

namespace uu {
namespace net {

template <class STORE>
MLCube<STORE>::
MLCube(
    std::unique_ptr<STORE> el,
    const std::vector<std::string>& dim,
    const std::vector<std::vector<std::string>>& members
) : data_(dim, members)
{

    // Elements in the cube
    elements_ = std::move(el);

    union_obs = std::make_unique<core::UnionObserver<STORE, const typename STORE::value_type>>(elements_.get());

    // Element attributes
    attr_ = std::make_unique<core::AttributeStore<typename STORE::value_type>>();

    elements_->attach(attr_.get());
}

/*
template <class STORE>
template <class Iterator>
MLCube<STORE>::
MLCube(
    const std::vector<std::string>& dim,
    const std::vector<std::vector<std::string>>& members,
    Iterator begin,
    Iterator end
) : data_(dim, members, begin, end)
{


    // Elements in the cube
    elements_ = std::make_unique<STORE>();

    union_obs = std::make_unique<core::UnionObserver<STORE, const typename STORE::value_type>>(elements_.get());

    // Element attributes
    attr_ = std::make_unique<core::AttributeStore<typename STORE::value_type>>();

    elements_->attach(attr_.get());

    for (auto cont = begin; cont != end; ++cont)
    {
        (*cont)->attach(union_obs.get());

        // Add all existing objects in the containers to the elements
        for (auto obj: *(*cont))
        {
            union_obs->notify_add(obj);
        }
    }
}
*/

template <class STORE>
size_t
MLCube<STORE>::
order(
) const
{
    return data_.order();
}


template <class STORE>
std::vector<size_t>
MLCube<STORE>::
size(
) const
{
    return data_.size();
}


template <class STORE>
const STORE*
MLCube<STORE>::
elements(
) const
{
    return elements_.get();
}


template <class STORE>
core::AttributeStore<typename STORE::value_type>*
MLCube<STORE>::
attr(
) const
{
    return attr_.get();
}

template <class STORE>
typename std::vector<std::shared_ptr<const STORE>>::const_iterator
        MLCube<STORE>::
        begin(
        ) const
{
    return data_.begin();
}

template <class STORE>
typename std::vector<std::shared_ptr<const STORE>>::const_iterator
        MLCube<STORE>::
        end(
        ) const
{
    return data_.end();
}

template <class STORE>
typename std::vector<std::shared_ptr<STORE>>::iterator
        MLCube<STORE>::
        begin(
        )
{
    return data_.begin();
}

template <class STORE>
typename std::vector<std::shared_ptr<STORE>>::iterator
        MLCube<STORE>::
        end(
        )
{
    return data_.end();
}

template <class STORE>
const std::vector<std::string>&
MLCube<STORE>::
dim(
) const
{
    return data_.dim();
}


template <class STORE>
const std::vector<std::vector<std::string>>&
        MLCube<STORE>::
        members(
        ) const
{
    return data_.members();
}

template <class STORE>
const std::vector<std::string>&
MLCube<STORE>::
members(
    const std::string& dim
) const
{
    return data_.members(dim);
}


template <class STORE>
STORE*
MLCube<STORE>::
operator[](
    const std::vector<size_t>& index
)
{
    return data_[index].get();
}


template <class STORE>
STORE*
MLCube<STORE>::
operator[](
    const std::vector<std::string>& index
)
{
    return data_[index].get();
}

template <class STORE>
const STORE*
MLCube<STORE>::
operator[](
    const std::vector<size_t>& index
) const
{
    return data_[index].get();
}


template <class STORE>
const STORE*
MLCube<STORE>::
operator[](
    const std::vector<std::string>& index
) const
{
    return data_[index].get();
}

template <class STORE>
STORE*
MLCube<STORE>::
at(
    const std::vector<size_t>& index
)
{
    return data_.at(index).get();
}


template <class STORE>
STORE*
MLCube<STORE>::
at(
    const std::vector<std::string>& index
)
{
    return data_.at(index).get();
}

template <class STORE>
const STORE*
MLCube<STORE>::
at(
    const std::vector<size_t>& index
) const
{
    return data_.at(index).get();
}


template <class STORE>
const STORE*
MLCube<STORE>::
at(
    const std::vector<std::string>& index
) const
{
    return data_.at(index).get();
}

/*
template <class STORE>
void
MLCube<STORE>::
init(
     )
{
    for (auto idx: sel::IndexIterator(size()))
    {
        init(idx);
    }
}


template <class STORE>
STORE*
MLCube<STORE>::
init(
     const std::vector<size_t>& index
     )
{
    if (at(index) != nullptr)
    {
        throw core::OperationNotSupportedException("cell already initialized");
    }
    auto cell = std::make_shared<STORE>();
    insert(cell, index);
    return cell.get();
}
*/

/* index of a dimension
template <class STORE>
size_t
MLCube<STORE>::
index_of(
    const std::string& dim
) const
{
    return data_.index_of(dim);
}

index of a member given a dimension
template <class STORE>
size_t
MLCube<STORE>::
index_of(
    const std::string& dim,
    const std::string& member
) const
{
    return data_.index_of(dim, member);
}


template <class STORE>
void
MLCube<STORE>::
insert(
       STORE* value,
       const std::vector<size_t>& index
       )
{
    value->attach(elements_.get());
    super::insert(value, index);
}

template <class STORE>
void
MLCube<STORE>::
insert(
       STORE* value,
       const std::vector<std::string>& index
       )
{
    value->attach(elements_.get());
    super::insert(value, index);
}

 */

template <class STORE>
STORE*
MLCube<STORE>::
init(
    const std::vector<size_t>& index,
    const std::shared_ptr<STORE>& store
)
{
    if (at(index) != nullptr)
    {
        throw core::OperationNotSupportedException("cell already initialized");
    }

    for (auto el: *store)
    {
        union_obs->notify_add(el);
    }

    store->attach(union_obs.get());
    data_[index] = store;
    return store.get();
}

template <class STORE>
STORE*
MLCube<STORE>::
init(
    const std::vector<std::string>& index,
    const std::shared_ptr<STORE>& store
)
{
    // @todo reuse the index-based version of this instead of replicating the code
    if (at(index) != nullptr)
    {
        throw core::OperationNotSupportedException("cell already initialized");
    }

    //value->attach(elements_->get());
    for (auto el: *store)
    {
        union_obs->notify_add(el);
    }

    store->attach(union_obs.get());
    data_[index] = store;
    return store.get();
}

/*
template <typename STORE>
template <typename Iterator>
void
MLCube<STORE>::
resize(
const std::string& dimension,
const std::string& new_member,
Iterator begin,
Iterator end
)
{
size_t dim_idx = index_of(dimension);

std::vector<std::vector<std::string>> new_members;

for (auto d: dim())
{
    new_members.push_back(std::vector<std::string>());

    for (auto m: members(d))
    {
        new_members.back().push_back(m);
    }
}

new_members.at(dim_idx).push_back(new_member);
size_t member_idx = new_members.at(dim_idx).size()-1;

auto new_size = size();
new_size.at(dim_idx)++;

uu::core::sel::IndexIterator idx(new_size);

std::vector<std::shared_ptr<STORE>> cells;

auto it = begin;

for (auto index: idx)
{
    if (index.at(dim_idx) == member_idx)
    {
        if (it==end)
        {
            throw core::OutOfBoundsException("too few new containers");
        }

        cells.push_back(*it);
        ++it;
    }

    else
    {
        auto container = at(index)->shared_from_this();
        cells.push_back(container);
    }
}

for (auto cont = begin; cont != end; ++cont)
{
    (*cont)->attach(union_obs.get());

    // Add all existing objects in the containers to the elements
    for (auto obj: *(*cont))
    {
        elements_->add(obj);
    }
}

data_ =
    NCube<std::shared_ptr<STORE>>(dim(), new_members, cells.begin(), cells.end());
}
*/

}
}

