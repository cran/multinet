#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {


template<typename G>
BFS<G>::
BFS(
    const G* g,
    const Vertex* v,
    EdgeMode mode
) : g(g), v(v), mode(mode)
{
    core::assert_not_null(g, "BFS", "g");
    core::assert_not_null(v, "BFS", "v");
}

template<typename G>
BFS<G>::iterator::
iterator(
    const G* _g,
    const Vertex* v,
    EdgeMode _mode
) : g(_g), mode(_mode)
{
    queue.push(v);
    processed.insert(v);
}

template<typename G>
BFS<G>::iterator::
iterator(
    const G* _g,
    EdgeMode _mode
) : g(_g), mode(_mode)
{
}

template<typename G>
const Vertex*
BFS<G>::iterator::
operator*(
) const
{
    if (queue.size() == 0)
    {
        return nullptr;
    }

    else
    {
        return queue.front();
    }
}

template<typename G>
typename BFS<G>::iterator
BFS<G>::iterator::
operator++( // PREFIX
)
{

    if (queue.size() == 0)
    {
        return *this;
    }

    auto v = queue.front();
    queue.pop();

    for (auto n: *g->edges()->neighbors(v, mode))
    {
        if (processed.find(n) == processed.end())
        {
            queue.push(n);
            processed.insert(n);
        }
    }

    return *this;
}

template<typename G>
typename BFS<G>::iterator
BFS<G>::iterator::
operator++(
    int // POSTFIX
)
{
    auto tmp = *this;
    ++(*this);
    return tmp;
}

template<typename G>
bool
BFS<G>::iterator::
operator==(
    const BFS<G>::iterator& rhs
) const
{
    return g==rhs.g && *(*this)==*rhs;
}

template<typename G>
bool
BFS<G>::iterator::
operator!=(
    const typename BFS<G>::iterator& rhs
) const
{
    return !(*this==rhs);
}

template<typename G>
typename BFS<G>::iterator
BFS<G>::
begin(
) const
{
    return iterator(g, v, mode);
}

template<typename G>
typename BFS<G>::iterator
BFS<G>::
end(
) const
{
    return iterator(g, mode);
}

}
}

