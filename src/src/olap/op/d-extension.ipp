#include "core/exceptions/assert_not_null.hpp"
#include "olap/sel//IndexIterator.hpp"
#include "olap/indexing.hpp"

namespace uu {
namespace net {


template <typename C, class D>
void
extend_dimension(
    C* const cube,
    const std::string& name,
    const std::vector<std::string>& members,
    const D& discretize
)
{

    cube->add_dimension(name, members, discretize);
    /*
    // @todo see if it can be simplified

    if (members.size() == 0)
    {
        throw core::OperationNotSupportedException("new dimension must have at least one member");
    }

    core::IndexIterator old_indexes(cube->data_->size_);

    cube->data_->size_.push_back(members.size());
    cube->data_->dim_.push_back(name);
    cube->data_->dim_idx_[name] = 0;
    cube->data_->members_.resize(cube->data_->dim_.size());
    cube->data_->members_idx_.resize(cube->data_->dim_.size());

    for (auto m_name: members)
    {
        cube->data_->members_.back().push_back(m_name);
        cube->data_->members_idx_.back()[m_name] = cube->data_->members_.back().size() - 1;
    }

    if (cube->data_->data_.size() == 0 && members.size() == 1)
    {
        cube->data_->data_ = std::vector<std::shared_ptr<typename C::store_type>>(1);
        cube->data_->data_[0] = cube->data_->elements_;
        // If no discretization function is used, all the elements are preserved
        std::set<typename C::value_type*> to_erase;

        for (auto el: *cube->data_->elements_)
        {
            std::vector<bool> to_add = discretize(el);

            if (!to_add[0]) // warning - not checking size
            {
                to_erase.insert(el);
            }

            for (auto v: to_erase)
            {
                cube->data_->elements_->erase(v);
            }
        }
    }

    else if (cube->data_->data_.size() == 0 && members.size() > 1)
    {
        auto old_elements_ = cube->data_->elements_;

        size_t new_num_cells = members.size();
        cube->data_->data_ = std::vector<std::shared_ptr<typename C::store_type>>(new_num_cells);

        cube->data_->init(cube->get_store()); // initialize elements_
        cube->data_->union_obs = std::make_unique<core::UnionObserver<typename C::store_type, typename C::value_type>>(cube->data_->elements_.get());

        for (size_t p = 0; p < cube->data_->data_.size(); p++)
        {
            cube->data_->init(p, cube->get_store());
            cube->data_->register_obs(p);
        }

        // Copy elements from each cell in the previous cube to the new corresponding cells
        std::set<typename C::value_type*> to_erase;

        for (auto el: *old_elements_)
        {
            std::vector<bool> to_add = discretize(el);

            for (size_t i = 0; i < to_add.size(); i++)
            {
                if (to_add[i])
                {
                    cube->data_->data_[i]->add(el);
                }
            }
        }

        for (auto el: *old_elements_)
        {
            if (!cube->data_->elements_->contains(el))
            {
                cube->data_->attr_->notify_erase(el);
            }
        }

    }

    else
    {
        // Temporarily saving current data

        auto old_elements_ = cube->data_->elements_;
        std::vector<std::shared_ptr<typename C::store_type>> old_data_ = cube->data_->data_;

        // Create new data

        size_t new_num_cells = cube->data_->data_.size() * members.size();
        cube->data_->data_ = std::vector<std::shared_ptr<typename C::store_type>>(new_num_cells);

        init(cube->get_store()); // initialize elements_
        cube->data_->union_obs = std::make_unique<core::UnionObserver<typename C::store_type, typename C::value_type>>(cube->data_->elements_.get());

        for (size_t p = 0; p < cube->data_->data_.size(); p++)
        {
            cube->data_->init(p, cube->get_store());
            cube->data_->register_obs(p);
        }

        // Copy elements from each cell in the previous cube to the new corresponding cells

        size_t old_pos = 0;

        for (auto index: old_indexes)
        {
            for (auto el: *old_data_[old_pos++])
            {
                std::vector<bool> to_add = discretize(el);

                for (size_t i = 0; i < to_add.size(); i++)
                {
                    if (to_add[i])
                    {
                        index.push_back(i);
                        cube->data_->data_[pos(index, cube->dimensions())]->add(el);
                        index.pop_back();
                    }
                }

                for (auto el: *old_elements_)
                {
                    if (!cube->data_->elements_->contains(el))
                    {
                        cube->data_->attr_->notify_erase(el);
                    }
                }
            }
        }

    }
    */
}


/* OLD FUNCTION
template <typename C>
std::unique_ptr<C>
    extend_dimension(
                     const C* const cube,
                     const std::string& new_dimension_name,
                     const std::string& new_member_name
)
{
    core::assert_not_null(cube, "extend_dimension", "cube");

    // output cube

    auto dim_names = cube->dim();
    auto members = cube->members();
    std::vector<std::string> new_members = {new_member_name};

    dim_names.push_back(new_dimension_name);
    members.push_back(new_members);

    auto out_cube = cube->model(dim_names, members);

    // for each cell in the input cube compute the corresponding cell in the output cube and
    // copy its content.

    core::IndexIterator in_idx(cube->size());
    auto in_idx_iter = in_idx.begin();

    while (in_idx_iter != in_idx.end())
    {
        // we process the cell at in_index in the input cube
        auto in_index = *in_idx_iter;

        // init & fill the corresponding cell in the out cube
        in_index.push_back(0);
        out_cube->init(in_index);

        auto cell = cube->at(in_index);
        for (auto el: *cell)
        {
            out_cube->operator[](in_index)->add(el);
        }

        ++in_idx_iter;
    }

    return out_cube;
}

*/

}
}

