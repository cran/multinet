namespace uu {
namespace net {


template <class D>
void
MECube::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members,
    const D& discretize
)
{
    return cube_->add_dimension(name, members, this, discretize);
}


}
}

