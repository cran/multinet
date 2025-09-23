
namespace uu {
namespace core {


template <typename E>
void
move(
    std::vector<E>& vec,
    std::size_t from,
    std::size_t to
)
{
    E el = vec[from];

    if (from < to)
    {
        for (std::size_t j=from; j<to; j++)
        {
            vec[j] = vec[j+1];
        }
    }

    else
    {
        for (std::size_t j=from; j>to; j--)
        {
            vec[j] = vec[j-1];
        }
    }

    vec[to] = el;
}


std::vector<std::size_t>
seq(
    std::size_t from,
    std::size_t to
);

}
}

