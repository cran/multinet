#include "networks/_impl/stores/SimpleEdgeStore.hpp"

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/ElementNotFoundException.hpp"

namespace uu {
namespace net {


SimpleEdgeStore::
SimpleEdgeStore(
    VCube* cube1,
    VCube* cube2,
    EdgeDir dir,
    LoopMode loops
) : super(cube1, cube2, dir, loops) // super will check if they are null
{
    cidx_edge_by_vertexes[cube1][cube2];

    if (cube1 != cube2)
    {
        cidx_edge_by_vertexes[cube2][cube1];
    }

}

const Edge *
SimpleEdgeStore::
add(
    std::shared_ptr<const Edge> e
)
{
    core::assert_not_null(e.get(), "add", "e");

    for (auto obs: observers)
    {
        obs->notify_add(e.get());
    }

    // get() also checks if the layers are present in this store
    if (get(e->v1, e->c1, e->v2, e->c2))
    {
        return nullptr;
    }

    auto new_edge = super::add(e);

    if (!new_edge)
    {
        return nullptr;
    }

    cidx_edge_by_vertexes[e->c1][e->c2][e->v1][e->v2] = new_edge;

    /// DIR SPECIFIC.

    if (!is_directed())
    {
        cidx_edge_by_vertexes[e->c2][e->c1][e->v2][e->v1] = new_edge;
    }

    return new_edge;
}

const Edge *
SimpleEdgeStore::
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

bool
SimpleEdgeStore::
contains(
    const typename Edge::key_type& key
) const
{
    auto e = get(key);

    if (e)
    {
        return true;
    }

    else
    {
        return false;
    }
}

const Edge*
SimpleEdgeStore::
get(
    const typename Edge::key_type& key
) const
{
    return get(std::get<0>(key), std::get<1>(key), std::get<2>(key), std::get<3>(key));
}

const Edge*
SimpleEdgeStore::
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

    auto l1 = cidx_edge_by_vertexes.find(cube1);

    if (l1 == cidx_edge_by_vertexes.end())
    {
        throw core::ElementNotFoundException("Wrong pair of vertex stores");
    }

    auto l2 = l1->second.find(cube2);

    if (l2 == l1->second.end())
    {
        throw core::ElementNotFoundException("Wrong pair of vertex stores");
    }

    auto v1 = l2->second.find(vertex1);

    if (v1 == l2->second.end())
    {
        return nullptr;
    }

    auto v2 = v1->second.find(vertex2);

    if (v2 == v1->second.end())
    {
        return nullptr;
    }

    else
    {
        return v2->second;
    }
}

const Edge*
SimpleEdgeStore::
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
SimpleEdgeStore::
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

    cidx_edge_by_vertexes[edge->c1][edge->c2][edge->v1].erase(edge->v2);

    sidx_neighbors_in[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
    sidx_neighbors_out[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
    sidx_incident_in[edge->c2][edge->c1][edge->v2]->erase(edge);
    sidx_incident_out[edge->c1][edge->c2][edge->v1]->erase(edge);


    // if the edge is directed, we erase neighbors only if there isn't
    // an edge in the other direction keeping them neighbors
    if (is_directed())
    {

        if (!get(edge->v2,edge->c2,edge->v1,edge->c1))
        {
            sidx_neighbors_all[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
            sidx_neighbors_all[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
            sidx_incident_all[edge->c2][edge->c1][edge->v2]->erase(edge);
            sidx_incident_all[edge->c1][edge->c2][edge->v1]->erase(edge);
        }
    }

    else
    {

        cidx_edge_by_vertexes[edge->c2][edge->c1][edge->v2].erase(edge->v1);

        sidx_neighbors_in[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
        sidx_neighbors_out[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
        sidx_neighbors_all[edge->c1][edge->c2][edge->v1]->erase(edge->v2);
        sidx_neighbors_all[edge->c2][edge->c1][edge->v2]->erase(edge->v1);
        sidx_incident_in[edge->c1][edge->c2][edge->v1]->erase(edge);
        sidx_incident_out[edge->c2][edge->c1][edge->v2]->erase(edge);
        sidx_incident_all[edge->c1][edge->c2][edge->v1]->erase(edge);
        sidx_incident_all[edge->c2][edge->c1][edge->v2]->erase(edge);
    }


    return edges_->erase(edge);
}

bool
SimpleEdgeStore::
erase(
    const typename Edge::key_type& key
)
{
    auto edge = get(key);

    if (edge)
    {
        return erase(edge);
    }

    else
    {
        return false;
    }
}

/*
        void
    SimpleEdgeStore::
    erase(
          const Vertex* vertex,
          const VCube* layer
          )
    {
        super::erase(vertex, layer);
    }


    void
SimpleEdgeStore::
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
SimpleEdgeStore::
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
