#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {

template<typename G>
DFS<G>::
DFS(
    const G* g,
    const Vertex* v,
    EdgeMode mode
) : g(g), v(v), mode(mode)
{
    core::assert_not_null(g, "DFS", "g");
    core::assert_not_null(v, "DFS", "v");
}

template<typename G>
DFS<G>::iterator::
iterator(
    const G* _g,
    const Vertex* v,
    EdgeMode _mode
) : g(_g), mode(_mode)
{
    stack.push(v);
    processed.insert(v);
}

template<typename G>
DFS<G>::iterator::
iterator(
    const G* _g,
    EdgeMode _mode
) : g(_g), mode(_mode)
{
}

template<typename G>
const Vertex*
DFS<G>::iterator::
operator*(
) const
{
    if (stack.size() == 0)
    {
        return nullptr;
    }

    else
    {
        return stack.top();
    }
}

template<typename G>
typename DFS<G>::iterator
DFS<G>::iterator::
operator++( // PREFIX
)
{

    if (stack.size() == 0)
    {
        return *this;
    }

    auto v = stack.top();
    stack.pop();

    for (auto n: *g->edges()->neighbors(v, mode))
    {
        if (processed.find(n) == processed.end())
        {
            stack.push(n);
            processed.insert(n);
        }
    }

    return *this;
}

template<typename G>
typename DFS<G>::iterator
DFS<G>::iterator::
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
DFS<G>::iterator::
operator==(
    const DFS<G>::iterator& rhs
) const
{
    return g==rhs.g && *(*this)==*rhs;
}

template<typename G>
bool
DFS<G>::iterator::
operator!=(
    const typename DFS<G>::iterator& rhs
) const
{
    return !(*this==rhs);
}

template<typename G>
typename DFS<G>::iterator
DFS<G>::
begin(
) const
{
    return iterator(g, v, mode);
}

template<typename G>
typename DFS<G>::iterator
DFS<G>::
end(
) const
{
    return iterator(g, mode);
}

}
}

