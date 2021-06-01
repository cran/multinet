#include "core/stores/AttributeStore.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/exceptions/OutOfBoundsException.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/stores/_impl/UnionSortedRandomSet.hpp"
#include "olap/sel//IndexIterator.hpp"
#include "olap/indexing.hpp"
#include <string>
#include <unordered_map>

namespace uu {
namespace net {

template <class STORE>
MLCube<STORE>::
MLCube(
    const std::shared_ptr<STORE>& el
)
{
    elements_ = el;

    size_ = {};

    // Element attributes
    attr_ = std::make_unique<core::AttributeStore<typename STORE::value_type>>();
    elements_->attach(attr_.get());
}

/*
template <class STORE>
template <class SF>
std::unique_ptr<MLCube<STORE>>
MLCube<STORE>::
copy(
       const SF& store_factory
)
{
    auto res = std::make_unique<MLCube<STORE>>(dimensions(), members());

}
*/

template <class STORE>
MLCube<STORE>::
MLCube(
    //const std::string& name,
    const std::vector<std::string>& dimensions,
    const std::vector<std::vector<std::string>>& members
)
{
    size_t length = 1;

    for (size_t d_idx = 0; d_idx < members.size(); d_idx++)
    {
        length *= members[d_idx].size();
        dim_.push_back(dimensions[d_idx]);
        dim_idx_[dimensions[d_idx]] = d_idx;
        size_.push_back(members[d_idx].size());
        members_.push_back(std::vector<std::string>());
        members_idx_.push_back(std::unordered_map<std::string, size_t>());

        for (size_t m_idx = 0; m_idx < members[d_idx].size(); m_idx++)
        {
            members_[d_idx].push_back(members[d_idx][m_idx]);
            members_idx_[d_idx][members[d_idx][m_idx]] = m_idx;
        }
    }

    data_ = std::vector<std::shared_ptr<STORE>>(length);

    attr_ = std::make_unique<core::AttributeStore<typename STORE::value_type>>();
}


template <class STORE>
size_t
MLCube<STORE>::
size(
) const
{
    return elements_->size();
}


template <class STORE>
size_t
MLCube<STORE>::
order(
) const
{
    return size_.size();
}


template <class STORE>
std::vector<size_t>
MLCube<STORE>::
dsize(
) const
{
    return size_;
}


template <class STORE>
const std::vector<std::string>&
MLCube<STORE>::
dimensions(
) const
{
    return dim_;
}


template <class STORE>
const std::vector<std::vector<std::string>>&
        MLCube<STORE>::
        members(
        ) const
{
    return members_;
}


template <class STORE>
const std::vector<std::string>&
MLCube<STORE>::
members(
    const std::string& dimension_name
) const
{
    auto f = dim_idx_.find(dimension_name);

    if (f != dim_idx_.end())
    {
        // no need to check bounds
        return members_[f->second];
    }

    else
    {
        throw core::ElementNotFoundException("dimension " + dimension_name);
    }
}

template <class STORE>
const std::vector<std::string>&
MLCube<STORE>::
members(
    size_t dim_idx
) const
{
    return members_.at(dim_idx);
}

template <class STORE>
typename STORE::iterator
MLCube<STORE>::
begin(
) const
{
    return elements_->begin();
}

template <class STORE>
typename STORE::iterator
MLCube<STORE>::
end(
) const
{
    return elements_->end();
}

template <class STORE>
typename STORE::value_type*
MLCube<STORE>::
add(
    std::shared_ptr<typename STORE::value_type> v
)
{
    return add(v.get());
}


template <class STORE>
typename STORE::value_type*
MLCube<STORE>::
add(
    typename STORE::value_type* v
)
{
    if (data_.size() > 1)
    {
        for (size_t i = 0; i < data_.size(); i++)
        {
            data_[i]->add(v);
        }

        return v;
    }

    return elements_->add(v);
}


template <class STORE>
typename STORE::value_type*
MLCube<STORE>::
add(
    const typename STORE::key_type& key
)
{
    if (data_.size() > 1)
    {
        auto v = data_[0]->add(key);

        for (size_t i = 1; i < data_.size(); i++)
        {
            data_[i]->add(v);
        }

        return v;
    }

    return elements_->add(key);
}

template <class STORE>
bool
MLCube<STORE>::
contains(
    typename STORE::value_type* v
) const
{
    return elements_->contains(v);
}

template <class STORE>
bool
MLCube<STORE>::
contains(
    const typename STORE::key_type& key
) const
{
    return elements_->contains(key);
}



template <class STORE>
typename STORE::get_return_type
MLCube<STORE>::
get(
    const typename STORE::key_type& key
) const
{
    return elements_->get(key);
}

template <class STORE>
typename STORE::value_type*
MLCube<STORE>::
at(
    size_t pos
) const
{
    return elements_->at(pos);
}

template <class STORE>
typename STORE::value_type*
MLCube<STORE>::
get_at_random(
) const
{
    return elements_->get_at_random();
}


template <class STORE>
int
MLCube<STORE>::
index_of(
    typename STORE::value_type* v
) const
{
    return elements_->index_of(v);
}


template <class STORE>
bool
MLCube<STORE>::
erase(
    typename STORE::value_type * v
)
{
    if (data_.size() > 1)
    {
        bool erased = false;

        for (size_t i = 0; i < data_.size(); i++)
        {
            if (data_[i]->erase(v))
            {
                erased = true;
            }
        }

        return erased;
    }

    return elements_->erase(v);
}

template <class STORE>
bool
MLCube<STORE>::
erase(
    const typename STORE::key_type& key
)
{
    if (data_.size() > 1)
    {
        bool erased = false;

        for (size_t i = 0; i < data_.size(); i++)
        {
            if (data_[i]->erase(key))
            {
                erased = true;
            }
        }

        return erased;
    }

    return elements_->erase(key);
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
STORE*
MLCube<STORE>::
cell(
    const std::vector<size_t>& index
)
{
    size_t idx = pos(index);
    return data_[idx].get();
}


template <class STORE>
STORE*
MLCube<STORE>::
cell(
    const std::vector<std::string>& index
)
{
    size_t idx = pos(index);
    return data_[idx].get();
}

template <class STORE>
const STORE*
MLCube<STORE>::
cell(
    const std::vector<size_t>& index
) const
{
    size_t idx = pos(index);
    return data_[idx].get();
}


template <class STORE>
const STORE*
MLCube<STORE>::
cell(
    const std::vector<std::string>& index
) const
{
    size_t idx = pos(index);
    return data_[idx].get();
}

template <class STORE>
size_t
MLCube<STORE>::
num_cells(
) const
{
    return data_.size();
}


template <class STORE>
STORE*
MLCube<STORE>::
init(
    const std::shared_ptr<STORE>& store
)
{
    elements_ = store;
    elements_->attach(attr_.get());
    return elements_.get();
}


template <class STORE>
STORE*
MLCube<STORE>::
init(
    size_t pos,
    const std::shared_ptr<STORE>& store
)
{
    if (data_[pos] != nullptr)
    {
        throw core::OperationNotSupportedException("cell already initialized");
    }

    for (auto el: *store)
    {
        union_obs->notify_add(el);
    }

    data_[pos] = store;
    return store.get();
}

template <class STORE>
STORE*
MLCube<STORE>::
init(
    const std::vector<size_t>& index,
    const std::shared_ptr<STORE>& store
)
{
    return init(pos(index), store);
}


template <class STORE>
core::UnionObserver<STORE>*
MLCube<STORE>::
register_obs(
)
{
    union_obs = std::make_unique<core::UnionObserver<STORE>>(elements_.get());
    return union_obs.get();
}

template <class STORE>
void
MLCube<STORE>::
register_obs(
    size_t pos
)
{
    data_[pos]->attach(union_obs.get());
}

template <class STORE>
void
MLCube<STORE>::
register_obs(
    const std::vector<size_t>& index
)
{
    register_obs(pos(index));
}


// SF is an object with a function get_store(), returning a new store
// D is an object with an operator (), returning a discretization vector (vector of boolean) for
// each input element, and a function order(), returning the size of the discretization vector
template <class STORE>
template <class SF, class D>
void
MLCube<STORE>::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members,
    const SF& store_factory,
    const D& f
)
{
    // @todo check f order
    //if (f.order() != members.size())
    //{
    //    std::string err = "order of discretization function != number new members";
    //    throw core::WrongParameterException(err);
    //}

    // @todo see if it can be simplified

    if (members.size() == 0)
    {
        throw core::OperationNotSupportedException("new dimension must have at least one member");
    }

    IndexIterator old_indexes(size_);

    // Updating the cube's metadata (dimensions, size, ...)
    size_.push_back(members.size());
    dim_.push_back(name);
    dim_idx_[name] = dim_.size() - 1;
    members_.resize(dim_.size());
    members_idx_.resize(dim_.size());
    for (auto m_name: members)
    {
        members_.back().push_back(m_name);
        members_idx_.back()[m_name] = members_.back().size() - 1;
    }

    // A -> B: from no dimensions to single cell
    if (data_.size() == 0 && members.size() == 1)
    {
        // creating the 1-cell cube
        data_ = std::vector<std::shared_ptr<STORE>>(1);
        data_[0] = elements_;
        
        // remove elements not assigned to the new cell
        filter(f);
        
    }
    // A -> C:
    else if (data_.size() == 0 && members.size() > 1)
    {
        auto old_elements = elements_;

        // resize the cube
        resize(store_factory);

        // Copy elements from each cell in the previous cube to the new corresponding cells
        discretize(old_elements, f);
    }
    // B -> B:
    else if (data_.size() == 1 && members.size() == 1)
    {
        // remove elements not assigned to the new cell
        filter(f);
    }
    // B -> C or C -> C
    else
    {
        auto old_data = data_;

        // resize the cube
        resize(store_factory);

        // Copy elements from each cell in the previous cube to the new corresponding cells
        discretize(old_data, old_indexes, f);
    }
}


template <class STORE>
template <class SF>
void
MLCube<STORE>::
erase_dimension(
    const SF& store_factory
)
{
    if (order() == 0)
    {
        throw core::OperationNotSupportedException("no dimension to erase");
    }

    IndexIterator old_indexes(size_);
    

    // Updating the cube's metadata (dimensions, size, ...)
    std::string dim_to_erase = dim_.back();
    size_.pop_back();
    dim_.pop_back();
    dim_idx_.erase(dim_to_erase);
    members_.pop_back();
    members_idx_.pop_back();
    
    // number of cells in the new cube (only true/used if order>0)
    size_t num_cells = 1;
    for (size_t s: size_) num_cells *= s;
    
    //  -> A: to order 0
    if (dim_.size() == 0)
    {
        data_ = std::vector<std::shared_ptr<STORE>>(0);
    }
    // B -> B
    else if (data_.size() == 1 && num_cells == 1)
    {
        // no action needed, only one cell
    }
    // C -> B
    else if (num_cells == 1)
    {
        data_ = std::vector<std::shared_ptr<STORE>>(1);
        data_[0] = elements_;
    }
    // C -> C
    else
    {
        auto old_data = data_;
        
        // resize the cube
        resize(store_factory);

        // Copy elements from each cell in the previous cube to the new corresponding cells
        compact(old_data, old_indexes);
    }
}


template <class STORE>
template <class SF>
void
MLCube<STORE>::
add_member(
    const std::string& dim_name,
    const std::string& memb_name,
    const SF& store_factory
    //bool (*copy)(typename STORE::value_type*)
)
{

    // Temporarily saving current data

    std::vector<std::shared_ptr<STORE>> old_data = data_;
    auto old_size = size_;


    auto dim = dim_idx_.find(dim_name);

    if (dim == dim_idx_.end())
    {
        throw core::ElementNotFoundException("dimension " + dim_name);
    }

    size_t d_idx = dim->second;

    size_[d_idx] += 1;
    members_[d_idx].push_back(memb_name);
    members_idx_[d_idx][memb_name] = members_[d_idx].size() - 1;


    if (data_.size() == 1)
    {
        data_ = std::vector<std::shared_ptr<STORE>>(2);
        init(store_factory->get_store()); // initialize elements_
        union_obs = std::make_unique<core::UnionObserver<STORE>>(elements_.get());

        init(0, old_data[0]);
        register_obs(0);
        init(1, store_factory->get_store());
        register_obs(1);
    }

    else
    {
        // Create new data

        size_t new_num_cells = data_.size() / (size_[d_idx]-1) * (size_[d_idx]);
        data_ = std::vector<std::shared_ptr<STORE>>(new_num_cells);

        // Copy cells and elements

        IndexIterator old_indexes(old_size);

        for (auto index: old_indexes)
        {
            size_t pos_old_data = idx_to_pos(index, old_size);
            init(index, old_data[pos_old_data]);
            register_obs(index);

            // @todo make more efficient

            std::vector<size_t> index_new_cell = index;
            index_new_cell[d_idx] = size_[d_idx] - 1;

            auto new_cell = cell(index_new_cell);

            if (!new_cell)
            {
                new_cell = init(index_new_cell, store_factory->get_store());
                register_obs(index_new_cell);
            }

        }
    }
}

template <class STORE>
void
MLCube<STORE>::
erase_member(
    const std::string& dim_name
)
{
    auto dim = dim_idx_.find(dim_name);
    if (dim == dim_idx_.end())
    {
        throw core::ElementNotFoundException("dimension " + dim_name);
    }
    size_t d_idx = dim->second;
    
    erase_member(dim_name, members_[d_idx].back());
}
    
template <class STORE>
void
MLCube<STORE>::
erase_member(
    const std::string& dim_name,
    const std::string& memb_name
)
{

    // Temporarily saving current data

    std::vector<std::shared_ptr<STORE>> old_data = data_;
    auto old_size = size_;

    // finding the target dimension

    auto dim = dim_idx_.find(dim_name);
    if (dim == dim_idx_.end())
    {
        throw core::ElementNotFoundException("dimension " + dim_name);
    }
    size_t d_idx = dim->second;
    
    auto mem = members_idx_[d_idx].find(memb_name);
    if (mem == members_idx_[d_idx].end())
    {
        throw core::ElementNotFoundException("member " + memb_name);
    }
    size_t m_idx = mem->second;

    // updating metadata
    
    size_[d_idx] -= 1;
    members_[d_idx].erase(members_[d_idx].begin() + m_idx);
    members_idx_[d_idx].erase(memb_name);
    
    for (size_t i = 0; i < members_[d_idx].size(); i++)
    {
        std::string name = members_[d_idx][i];
        members_idx_[d_idx][name] = i;
    }

    size_t new_num_cells = data_.size() * size_[d_idx] / (size_[d_idx] + 1);

    // C -> C
    if (new_num_cells > 1)
    {
        // Create new data

        data_ = std::vector<std::shared_ptr<STORE>>(new_num_cells);

        // Copy cells and elements

        IndexIterator old_indexes(old_size);

        for (auto index: old_indexes)
        {
            if (index[d_idx] < m_idx)
            {
                size_t pos_old_data = idx_to_pos(index, old_size);
                data_[pos(index)] = old_data[pos_old_data];
            }
            else if (index[d_idx] > m_idx)
            {
                auto new_index = index;
                new_index[d_idx] -= 1;
                size_t pos_old_data = idx_to_pos(index, old_size);
                data_[pos(new_index)] = old_data[pos_old_data];
            }
            else
            {
                size_t pos_old_data = idx_to_pos(index, old_size);
                for (auto el: *old_data[pos_old_data])
                {
                    union_obs->notify_erase(el);
                }
            }
        }
    }
    else
    // C -> B
    {
        for (auto el: *data_[1])
        {
            union_obs->notify_erase(el);
        }
        data_ = std::vector<std::shared_ptr<STORE>>(1);
        data_[0] = elements_;
    }
}

template <class STORE>
void
MLCube<STORE>::
sort(
    const std::string& dim_name,
    const std::vector<size_t>& f
)
{
    // Temporarily saving current data

    std::vector<std::shared_ptr<STORE>> old_data = data_;
    
    // finding the target dimension
    
    auto dim = dim_idx_.find(dim_name);
    if (dim == dim_idx_.end())
    {
        throw core::ElementNotFoundException("dimension " + dim_name);
    }
    size_t d_idx = dim->second;
    
    // Updating the cube's metadata (dimensions, size, ...)
    
    auto old_members = members_[d_idx];
    
    for (size_t i = 0; i < size_[d_idx]; i++)
    {
        std::string memb_name_at_i = old_members[f[i]];
        members_[d_idx][i] = memb_name_at_i;
        members_idx_[d_idx][memb_name_at_i] = i;
    }
    
    // moving the stores
    
    data_ = std::vector<std::shared_ptr<STORE>>(old_data.size());

    IndexIterator old_indexes(size_);

    for (auto index: old_indexes)
    {
        auto new_index = index;
        new_index[d_idx] = f[index[d_idx]];
        data_[pos(new_index)] = old_data[pos(index)];
    }
}

template <class STORE>
void
MLCube<STORE>::
pivot(
    const std::vector<size_t>& f
)
{
    // Temporarily saving current data

    std::vector<std::shared_ptr<STORE>> old_data = data_;

    // Updating the cube's metadata (dimensions, size, ...)
    auto old_size = size_;
    auto old_dim = dim_;
    auto old_members = members_;
    auto old_members_idx = members_idx_;
    for (size_t i = 0; i < size_.size(); i++)
    {
        size_[i] = old_size[f[i]];
        dim_[i] = old_dim[f[i]];
        dim_idx_[dim_[i]] = i;
        members_[i] = old_members[f[i]];
        members_idx_[i] = old_members_idx[f[i]];
    }
    
    // moving the stores
    
    data_ = std::vector<std::shared_ptr<STORE>>(old_data.size());

    IndexIterator old_indexes(old_size);

    for (auto index: old_indexes)
    {
        auto new_index = std::vector<size_t>(size_.size());
        for (size_t i = 0; i < size_.size(); i++)
        {
            new_index[i] = index[f[i]];
        }
        size_t pos_old_data = idx_to_pos(index, old_size);
        data_[pos(new_index)] = old_data[pos_old_data];
    }
}

template <class STORE>
size_t
MLCube<STORE>::
pos(
    const std::vector<size_t>& index
) const
{
    return idx_to_pos(index, size_);
}


template <class STORE>
size_t
MLCube<STORE>::
pos(
    const std::vector<std::string>& members
) const
{
    return pos(index_of(members));
}


template <class STORE>
std::vector<size_t>
MLCube<STORE>::
index_of(
    const std::vector<std::string>& members
) const
{

    if (dim_.size() != members.size())
    {
        throw core::WrongParameterException("parameter must have the same size as the cube order");
    }

    std::vector<size_t> res;

    for (size_t i = 0; i < members.size(); i++)
    {
        auto member = members[i];
        auto f = members_idx_[i].find(member);

        if (f != members_idx_[i].end())
        {
            res.push_back(f->second);
        }

        else
        {
            throw core::ElementNotFoundException("member " + member);
        }
    }

    return res;
}

template <class STORE>
template <class SF>
void
MLCube<STORE>::
resize(
    const SF& store_factory
)
{
    // new cube cells (data_)
    size_t num_cells = 1;
    for (size_t s: size_) num_cells *= s;
    data_ = std::vector<std::shared_ptr<STORE>>(num_cells);

    // new union set of all elements in the cube (elements_)
    init(store_factory->get_store());
    
    // registering the observers to keep the union set correct
    union_obs = std::make_unique<core::UnionObserver<STORE>>(elements_.get());
    for (size_t p = 0; p < data_.size(); p++)
    {
        init(p, store_factory->get_store());
        register_obs(p);
    }
}

template <class STORE>
template <class D>
void
MLCube<STORE>::
discretize(
    const std::vector<std::shared_ptr<STORE>>& old_data,
    const IndexIterator& old_indexes,
    const D& f
)
{
    std::set<const typename STORE::value_type*> candidate_to_erase;
    
    // iterate over previous stores
    size_t old_pos = 0;
    for (auto index: old_indexes)
    {
        // adding one dimension to the index
        index.push_back(0);
        
        // distribute all the elements in this store to the new stores, based on f()
        for (auto el: *old_data[old_pos++])
        {
            std::vector<bool> to_add = f(el);

            bool added = false;
            for (size_t i = 0; i < to_add.size(); i++)
            {
                if (to_add[i])
                {
                    index.back() = i;
                    data_[pos(index)]->add(el);
                    added = true;
                    //index.pop_back();
                }
            }
            if (!added) candidate_to_erase.insert(el);
        }
    }
    
    // update attributes if elements have been erased
    for (auto el: candidate_to_erase)
    {
        if (!elements_->contains(el))
        {
            attr_->notify_erase(el);
        }
    }
}

template <class STORE>
template <class D>
void
MLCube<STORE>::
discretize(
    const std::shared_ptr<STORE>& old_elements,
    const D& f
)
{
    std::vector<size_t> index = {0};
        
    // distribute all the previous  elements to the new stores, based on f()
    std::set<const typename STORE::value_type*> candidate_to_erase;
    for (auto el: *old_elements)
    {
        std::vector<bool> to_add = f(el);

        bool added = false;
        for (size_t i = 0; i < to_add.size(); i++)
        {
            if (to_add[i])
            {
                index.back() = i;
                data_[pos(index)]->add(el);
                added = true;
                //index.pop_back();
            }
        }
        if (!added) candidate_to_erase.insert(el);
    }
    
    // update attributes if elements have been erased
    for (auto el: candidate_to_erase)
    {
        if (!elements_->contains(el))
        {
            attr_->notify_erase(el);
        }
    }
}

template <class STORE>
template <class D>
void
MLCube<STORE>::
filter(
    const D& f
)
{
    std::set<const typename STORE::value_type*> to_erase;
    for (auto el: *elements_)
    {
        std::vector<bool> to_add = f(el);
        if (!to_add[0])
        {
            to_erase.insert(el);
        }
    }
    for (auto v: to_erase)
    {
        elements_->erase(v);
    }
}

template <class STORE>
void
MLCube<STORE>::
compact(
    const std::vector<std::shared_ptr<STORE>>& old_data,
    const IndexIterator& old_indexes
)
{
    // iterate over previous stores
    size_t old_pos = 0;
    for (auto index: old_indexes)
    {
        // adding one dimension to the index
        std::vector<size_t> new_index(index.begin(), index.end() - 1);
        
        // distribute all the elements in this store to the new store
        for (auto el: *old_data[old_pos++])
        {
            data_[pos(new_index)]->add(el);
        }
    }
}

}
}

