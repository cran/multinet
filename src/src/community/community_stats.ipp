namespace uu {
namespace net {


template <typename M>
size_t
size_largest_community(
    const CommunityStructure<M>* com
)
{
    size_t s = 0;

    for (auto c: *com)
    {
        int s_i = c->size();

        if (s_i > s)
        {
            s=s_i;
        }
    }

    return s;
}

template <typename M>
std::pair<size_t,size_t>
size_largest_communities(
    const CommunityStructure<M>* com
)
{
    size_t s1 = 0;
    size_t s2 = 0;

    for (auto c: *com)
    {
        size_t s_i = c->size();

        if (s_i > s1)
        {
            s2=s1;
            s1=s_i;
        }

        else if (s_i > s2)
        {
            s2=s_i;
        }
    }

    return std::make_pair(s1, s2);
}

template <typename M>
double
size_ratio_largest_communities(
    const CommunityStructure<M>* com
)
{
    std::pair<size_t,size_t> p = size_largest_communities(com);

    if (p.second == 0)
    {
        return 1.0;    // all communities are of the same size, as there is only one community
    }

    else
    {
        return double(p.second)/p.first;
    }
}

template <typename M>
double
ratio_vertices_in_communities(
    const CommunityStructure<M>* com,
    const M* net
)
{
    std::set<MLVertex> vertices;

    for (auto c: *com)
    {
        vertices.insert(c->begin(), c->end());
    }

    size_t num_vertices = 0;

    for (auto layer: *net->layers())
    {
        num_vertices += layer->vertices()->size();
    }

    return double(vertices.size())/num_vertices;
}

template <typename M>
double
ratio_actors_in_communities(
    const CommunityStructure<M>* com,
    const M* net
)
{
    std::set<const Vertex*> actors;

    for (auto c: *com)
    {
        for (auto vertex: *c)
        {
            actors.insert(vertex.v);
        }
    }

    return double(actors.size()) / net->actors()->size();
}

template <typename M>
double
ratio_actors_in_pillars(
    const CommunityStructure<M>* com,
    const M* net
)
{
    std::map<const Vertex*, std::map<Community<M>*, size_t>> actors;

    for (auto c: *com)
    {
        for (auto vertex: *c)
        {
            actors[vertex.v][c]++;
        }
    }

    size_t count = 0;

    for (auto pair: actors)
    {
        auto actor = pair.first;

        if (pair.second.size()>1)
        {
            continue;
        }

        size_t num_layers = 0;

        for (auto layer: *net->layers())
        {
            if (layer->vertices()->contains(actor))
            {
                num_layers++;
            }
        }

        if (num_layers > pair.second.begin()->second)
        {
            continue;
        }

        count++;
    }

    return double(count) / net->actors()->size();
}

template <typename M>
double
ratio_actors_overlapping(
    const CommunityStructure<M>* com,
    const M* net
)
{
    std::map<const Vertex*, std::map<Community<M>*, size_t>> actors;

    for (auto c: *com)
    {
        for (auto vertex: *c)
        {
            actors[vertex.v][c]++;
        }
    }

    size_t count = 0;

    for (auto pair: actors)
    {
        auto actor = pair.first;

        if (pair.second.size()>1)
        {
            count++;
        }
    }

    return double(count) / net->actors()->size();
}

template <typename M>
double
ratio_vertices_overlapping(
    const CommunityStructure<M>* com,
    const M* net
)
{
    std::map<MLVertex, std::map<Community<M>*, size_t>> vertices;

    for (auto c: *com)
    {
        for (auto vertex: *c)
        {
            vertices[vertex][c]++;
        }
    }

    size_t count = 0;

    for (auto pair: vertices)
    {
        auto vertex = pair.first;

        if (pair.second.size()>1)
        {
            count++;
        }
    }

    size_t num_vertices = 0;

    for (auto layer: *net->layers())
    {
        num_vertices += layer->vertices()->size();
    }

    return double(count) / num_vertices;
}

template <typename M>
double
ratio_singleton_communities(
    const CommunityStructure<M>* com
)
{
    size_t count = 0;

    for (auto c: *com)
    {
        std::set<const Vertex*> actors;

        for (auto vertex: *c)
        {
            actors.insert(vertex.v);
        }

        if (actors.size() == 1)
        {
            count++;
        }
    }

    return double(count) / com->size();
}


}
}

