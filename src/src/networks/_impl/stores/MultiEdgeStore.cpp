#include "networks/_impl/stores/MultiEdgeStore.hpp"

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"

namespace uu {
namespace net {


MultiEdgeStore::
MultiEdgeStore(
    VCube* cube1,
    VCube* cube2,
    EdgeDir dir,
    LoopMode loops
) : super(cube1, cube2, dir, loops) // super will check if they are null
{
    cidx_edges_by_vertices[cube1][cube2];

    if (cube1 != cube2)
    {
        cidx_edges_by_vertices[cube2][cube1];
    }

}

const Edge *
MultiEdgeStore::
add(
    std::shared_ptr<const Edge> e
)
{
    core::assert_not_null(e.get(), "MultiEdgeStore::add", "e");

    for (auto obs: observers)
    {
        obs->notify_add(e.get());
    }

    // No need to check for edge existence

    auto new_edge = super::add(e);

    if (!new_edge)
    {
        return nullptr;
    }


    /// MULTI SPEC.
    cidx_edges_by_vertices[e->c1][e->c2][e->v1][e->v2].insert(new_edge);

    /// DIR SPECIFIC.

    if (!is_directed())
    {
        cidx_edges_by_vertices[e->c2][e->c1][e->v2][e->v1].insert(new_edge);
    }

    return new_edge;
}

const Edge *
MultiEdgeStore::
add(
    const Vertex* vertex1,
    const Vertex* vertex2
)
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    return add(vertex1, cube1_, vertex2, cube2_);
}

core::SortedRandomSet<const Edge*>
MultiEdgeStore::
get(
    const typename Edge::key_type& key
) const
{
    return get(std::get<0>(key), std::get<1>(key), std::get<2>(key), std::get<3>(key));
}

core::SortedRandomSet<const Edge*>
MultiEdgeStore::
get(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
) const
{

    core::assert_not_null(vertex1, "get", "vertex1");
    core::assert_not_null(cube1, "get", "cube1");
    core::assert_not_null(vertex2, "get", "vertex2");
    core::assert_not_null(cube2, "get", "cube2");

    auto l1 = cidx_edges_by_vertices.find(cube1);

    if (l1 == cidx_edges_by_vertices.end())
    {
        throw core::ElementNotFoundException("Wrong pair of vertex stores");
    }

    auto l2 = l1->second.find(cube2);

    if (l2 == l1->second.end())
    {
        throw core::ElementNotFoundException("Wrong pair of vertex stores");
    }

    core::SortedRandomSet<const Edge*> result;

    auto v1 = l2->second.find(vertex1);

    if (v1 == l2->second.end())
    {
        return result;
    }

    auto v2 = v1->second.find(vertex2);

    if (v2 == v1->second.end())
    {
        return result;
    }

    else
    {
        for (auto edge: v2->second)
        {
            result.add(edge);
        }
    }

    return result;
}


bool
MultiEdgeStore::
contains(
    const typename Edge::key_type& key
) const
{
    auto e = get(key);

    if (e.size()>0)
    {
        return true;
    }

    else
    {
        return false;
    }
}


core::SortedRandomSet<const Edge*>
MultiEdgeStore::
get(
    const Vertex* vertex1,
    const Vertex* vertex2
) const
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    return get(vertex1, cube1_, vertex2, cube2_);
}


bool
MultiEdgeStore::
erase(
    const Edge* edge
)
{
    core::assert_not_null(edge, "erase", "edge");

    for (auto obs: observers)
    {
        obs->notify_erase(edge);
    }

    //edges_->erase(edge);

    cidx_edges_by_vertices[edge->c1][edge->c2][edge->v1][edge->v2].erase(edge);

    if (cidx_edges_by_vertices[edge->c1][edge->c2][edge->v1][edge->v2].size() ==0)
    {
        sidx_neighbors_in[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
        sidx_neighbors_out[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
        sidx_incident_in[edge->c2][edge->c1][edge->v2]->erase(edge);
        sidx_incident_out[edge->c1][edge->c2][edge->v1]->erase(edge);
    }

    // if the edge is directed, we erase neighbors only if there isn't
    // an edge in the other direction keeping them neighbors
    if (is_directed())
    {

        if (cidx_edges_by_vertices[edge->c2][edge->c1][edge->v2][edge->v1].size() == 0)
        {
            sidx_neighbors_all[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
            sidx_neighbors_all[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
            sidx_incident_all[edge->c2][edge->c1][edge->v2]->erase(edge);
            sidx_incident_all[edge->c1][edge->c2][edge->v1]->erase(edge);
        }
    }

    else
    {

        cidx_edges_by_vertices[edge->c2][edge->c1][edge->v2][edge->v1].erase(edge);

        if (cidx_edges_by_vertices[edge->c1][edge->c2][edge->v1][edge->v2].size()==0)
        {
            sidx_neighbors_in[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
            sidx_neighbors_out[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
            sidx_neighbors_all[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
            sidx_neighbors_all[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
            sidx_incident_in[edge->c1][edge->c2][edge->v1]->erase(edge);
            sidx_incident_out[edge->c2][edge->c1][edge->v2]->erase(edge);
            sidx_incident_all[edge->c1][edge->c2][edge->v1]->erase(edge);
            sidx_incident_all[edge->c2][edge->c1][edge->v2]->erase(edge);
        }
    }


    return edges_->erase(edge);
}

bool
MultiEdgeStore::
erase(
    const typename Edge::key_type& key
)
{
    auto edges = get(key);
    bool res = (bool)edges.size();

    for (auto e: edges)
    {
        erase(e);
    }

    return res;
}

/*
        void
    MultiEdgeStore::
    erase(
          const Vertex* vertex,
          const VCube* layer
          )
    {
        super::erase(vertex, layer);
    }


    void
MultiEdgeStore::
erase(
const MLVertex* vertex
)
{

    core::assert_not_null(layer, "erase", "layer");
    core::assert_not_null(vertex, "erase", "vertex");

    std::unordered_set<const Edge*> to_erase;

    std::vector<const VCube*> layers = {cube1, cube2};

    for (auto l: layers)
    {
        for (auto neighbor: *neighbors(layer,l,vertex,EdgeMode::OUT))
        {

            auto e = get(vertex,layer,neighbor,l);

            to_erase.insert(e);
        }
    }

    for (auto l: layers)
    {
        for (auto neighbor: *neighbors(layer,l,vertex,EdgeMode::IN))
        {
            auto e = get(neighbor,l,vertex,layer);

            to_erase.insert(e);
        }
    }


    for (auto e: to_erase)
    {
        erase(e);
    }
}*/

/*
void
MultiEdgeStore::
erase(
    const VCube* layer
)
{
    super::erase(layer);


    std::vector<const VCube*> layers;

    for (auto&& p: edges_)
    {
        layers.push_back(p.first);
    }

    for (auto l: layers)
    {
        cidx_edge_by_vertexes[l].erase(layer);
    }

    cidx_edge_by_vertexes.erase(layer);
}
*/

}
}
