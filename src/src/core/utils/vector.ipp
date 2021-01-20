
namespace uu {
namespace core {


template <typename E>
void
move(
    std::vector<E>& vec,
    size_t from,
    size_t to
)
{
    E el = vec[from];

    if (from < to)
    {
        for (size_t j=from; j<to; j++)
        {
            vec[j] = vec[j+1];
        }
    }

    else
    {
        for (size_t j=from; j>to; j--)
        {
            vec[j] = vec[j-1];
        }
    }

    vec[to] = el;
}


std::vector<size_t>
seq(
    size_t from,
    size_t to
);

}
}

