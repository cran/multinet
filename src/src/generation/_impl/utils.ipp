
namespace uu {
namespace net {

template <typename G>
std::pair<const Vertex*, const Vertex*>
get_vertex_pair(
    G* g,
    LoopMode allow_loops
)
{
    auto v1 = g->vertices()->get_at_random();
    auto v2 = g->vertices()->get_at_random();

    if (allow_loops == LoopMode::DISALLOWED)
    {
        while (v1 == v2)
        {
            v2 = g->vertices()->get_at_random();
        }
    }

    return std::make_pair(v1, v2);
}

}
}

