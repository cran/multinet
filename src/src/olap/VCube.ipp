
namespace uu {
namespace net {

template <class D>
void
VCube::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members,
    const D& discretize
)
{
    return data_->add_dimension(name, members, this, discretize);
}

template <class D>
void
VCube::
add_dimension2(
    const std::string& name,
    const std::vector<std::string>& members,
    const D& discretize
)
{
    return data_->add_dimension(name, members, this, discretize);
}
}
}

