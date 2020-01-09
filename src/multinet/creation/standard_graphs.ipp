/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/WrongParameterException.hpp"
#include "core/utils/names.hpp"
#include "objects/Vertex.hpp"
#include "measures/basic.hpp"

namespace uu {
namespace net {


template<typename G>
void
null_graph(
    G* g,
    size_t n
)
{
    core::assert_not_null(g, "null_graph", "g");

    if (order(g) > 0)
    {
        throw core::WrongParameterException("the input graph of the null_graph function must be empty");
    }

    core::NameIterator names("V", n);

    for (auto vertex_name: names)
    {
        g->vertices()->add(vertex_name);
    }

}


template<typename G, typename ForwardIterator>
void
null_graph(
    G* g,
    ForwardIterator first,
    ForwardIterator last
)
{
    core::assert_not_null(g, "null_graph", "g");

    if (order(g) > 0)
    {
        throw core::WrongParameterException("the input graph of the null_graph function must be empty");
    }

    auto current = first;

    while (current != last)
    {
        auto vertex = (*current);
        g->vertices()->add(vertex);
        current++;
    }

}


template<typename G>
void
complete_graph(
    G* g,
    size_t n
)
{

    null_graph(g, n);

    bool dir = g->is_directed();

    for (auto v1: *g->vertices())
    {
        for (auto v2: *g->vertices())
        {
            if (v1 == v2)
            {
                continue;
            }

            if (!dir && v1 > v2)
            {
                continue;
            }

            g->edges()->add(v1, v2);
        }
    }
}


template<typename G>
void
complete_bipartite_graph(
    G* g,
    size_t n1,
    size_t n2
)
{
    core::assert_not_null(g, "null_graph", "g");

    if (order(g) > 0)
    {
        throw core::WrongParameterException("the input graph of the null_graph function must be empty");
    }

    core::NameIterator namesV("V", n1);
    std::vector<std::shared_ptr<const Vertex>> vs1;

    for (auto vertex_name: namesV)
    {
        auto v = Vertex::create(vertex_name);
        vs1.push_back(v);
        g->vertices()->add(v.get());
    }

    core::NameIterator namesU("U", n2);
    std::vector<std::shared_ptr<const Vertex>> vs2;

    for (auto vertex_name: namesU)
    {
        auto v = Vertex::create(vertex_name);
        vs2.push_back(v);
        g->vertices()->add(v.get());
    }

    bool dir = g->is_directed();

    for (auto v1: vs1)
    {
        for (auto v2: vs2)
        {
            g->edges()->add(v1.get(), v2.get());

            if (dir)
            {
                g->edges()->add(v2.get(), v1.get());
            }
        }
    }
}



template<typename G>
void
path_graph(
    G* g,
    size_t n
)
{

    null_graph(g, n);

    for (size_t i = 0; i < n-1; i++)
    {
        auto v1 = g->vertices()->at(i);
        auto v2 = g->vertices()->at(i+1);
        g->edges()->add(v1, v2);
    }

}


template<typename G>
void
cycle_graph(
    G* g,
    size_t n
)
{

    null_graph(g, n);

    for (size_t i = 0; i < n-1; i++)
    {
        auto v1 = g->vertices()->at(i);
        auto v2 = g->vertices()->at(i+1);
        g->edges()->add(v1, v2);
    }

    auto v1 = g->vertices()->at(n-1);
    auto v2 = g->vertices()->at(0);
    g->edges()->add(v1, v2);

}


template<typename G>
void
wheel_graph(
    G* g,
    size_t n
)
{

    null_graph(g, n);

    auto vc = g->vertices()->at(0);

    for (size_t i = 1; i < n-1; i++)
    {
        auto v1 = g->vertices()->at(i);
        auto v2 = g->vertices()->at(i+1);
        g->edges()->add(v1, v2);
        g->edges()->add(vc, v1);
    }

    auto v1 = g->vertices()->at(n-1);
    auto v2 = g->vertices()->at(1);
    g->edges()->add(v1, v2);
    g->edges()->add(vc, v1);

}


}
}

