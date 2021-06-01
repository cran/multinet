namespace uu {
namespace net {

template <typename C>
std::unique_ptr<C>
vslice(
    const std::string& cube_name,
    C* cube,
    const std::vector<std::vector<size_t>>& indexes
)
{

    // checking the parameters

    core::assert_not_null(cube, "vslice", "cube");

    if (cube->order() != indexes.size())
    {
        std::string err = "a slice operator must have the same dimensionality of the input cube";
        throw core::WrongParameterException(err);
    }

    // create a new empty cube

    auto dimensions = cube->dimensions();
    auto members = filter_members(cube, indexes);
    std::unique_ptr<C> out_cube = cube->skeleton(cube_name, dimensions, members);

    // indexes in the new cube corresponding to the input indexes

    IndexIterator in_idx(indexes);
    IndexIterator out_idx(out_cube->dsize());

    auto in_idx_iter = in_idx.begin();
    auto out_idx_iter = out_idx.begin();

    if (out_cube->num_cells() == 1)
    {
        auto cell = cube->cell(*in_idx_iter)->shared_from_this();
        out_cube->init(cell);
        out_cube->init(*out_idx_iter, cell);
    }

    else
    {
        out_cube->init();
        auto obs = out_cube->register_obs();

        while (in_idx_iter != in_idx.end())
        {
            auto cell = cube->cell(*in_idx_iter)->shared_from_this();

            for (auto el: *cell)
            {
                obs->notify_add(el);
            }

            out_cube->init(*out_idx_iter, cell);
            out_cube->register_obs(*out_idx_iter);
            ++in_idx_iter;
            ++out_idx_iter;
        }
    }

    return out_cube;
}


template <typename C>
std::vector<std::vector<std::string>>
                                   filter_members(
                                       const C* cube,
                                       const std::vector<std::vector<size_t>>& indexes
                                   )
{
    std::vector<std::vector<std::string>> new_members;

    for (size_t i = 0; i < indexes.size(); i++)
    {
        auto member_names = cube->members(i);

        std::vector<std::string> members;

        for (auto idx: indexes[i])
        {
            members.push_back(member_names.at(idx));
        }

        new_members.push_back(members);
    }

    return new_members;
}

}
}

