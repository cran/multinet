#include "rcpp_utils.h"
#include <algorithm>

std::vector<uu::net::AttributedSimpleGraph*>
resolve_layers(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
)
{
    int result_size = names.size()?names.size():mnet->layers()->size();
    std::vector<uu::net::AttributedSimpleGraph*> res(result_size);

    if (names.size()==0)
    {
        int i=0;

        for (auto layer: *mnet->layers())
        {
            res[i] = layer;
            i++;
        }
    }

    else
    {
        for (int i=0; i<names.size(); ++i)
        {
            auto layer = mnet->layers()->get(std::string(names[i]));

            if (!layer)
            {
                Rcpp::stop("cannot find layer " + std::string(names[i]));
            }

            res[i] = layer;
        }
    }

    return res;
}

std::unordered_set<uu::net::AttributedSimpleGraph*>
resolve_layers_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
)
{
    std::unordered_set<uu::net::AttributedSimpleGraph*> res;

    if (names.size()==0)
    {
        for (auto layer: *mnet->layers())
        {
            res.insert(layer);
        }
    }

    else
    {
        for (int i=0; i<names.size(); ++i)
        {
            auto layer = mnet->layers()->get(std::string(names[i]));

            if (!layer)
            {
                Rcpp::stop("cannot find layer " + std::string(names[i]));
            }

            res.insert(layer);
        }
    }

    return res;
}



std::unordered_set<const uu::net::AttributedSimpleGraph*>
resolve_const_layers_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
)
{
    std::unordered_set<const uu::net::AttributedSimpleGraph*> res;

    if (names.size()==0)
    {
        for (auto layer: *mnet->layers())
        {
            res.insert(layer);
        }
    }

    else
    {
        for (int i=0; i<names.size(); ++i)
        {
            auto layer = mnet->layers()->get(std::string(names[i]));

            if (!layer)
            {
                Rcpp::stop("cannot find layer " + std::string(names[i]));
            }

            res.insert(layer);
        }
    }

    return res;
}


std::vector<const uu::net::Vertex*>
resolve_actors(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
)
{
    int result_size = names.size()?names.size():mnet->vertices()->size();
    std::vector<const uu::net::Vertex*> res(result_size);

    if (names.size()==0)
    {
        int i = 0;

        for (auto actor: *mnet->vertices())
        {
            res[i] = actor;
            i++;
        }
    }

    else
    {
        for (int i=0; i<names.size(); ++i)
        {
            auto actor = mnet->vertices()->get(std::string(names[i]));

            if (!actor)
            {
                Rcpp::stop("cannot find actor " + std::string(names[i]));
            }

            res[i] = actor;
        }
    }

    return res;
}

std::unordered_set<const uu::net::Vertex*>
resolve_actors_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
)
{
    std::unordered_set<const uu::net::Vertex*> res;

    if (names.size()==0)
    {
        for (auto actor: *mnet->vertices())
        {
            res.insert(actor);
        }
    }

    else
    {
        for (int i=0; i<names.size(); ++i)
        {
            auto actor = mnet->vertices()->get(std::string(names[i]));

            if (!actor)
            {
                Rcpp::stop("cannot find actor " + std::string(names[i]));
            }

            res.insert(actor);
        }
    }

    return res;
}

std::vector<std::pair<const uu::net::Vertex*, uu::net::AttributedSimpleGraph*>>
        resolve_vertices(
            const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
            const Rcpp::DataFrame& vertex_matrix
        )
{
    std::vector<std::pair<const uu::net::Vertex*, uu::net::AttributedSimpleGraph*>> res(vertex_matrix.nrow());
    CharacterVector a = vertex_matrix(0);
    CharacterVector l = vertex_matrix(1);

    for (int i=0; i<vertex_matrix.nrow(); i++)
    {
        auto actor = mnet->vertices()->get(std::string(a(i)));

        if (!actor)
        {
            Rcpp::stop("cannot find actor " + std::string(a(i)));
        }

        auto layer = mnet->layers()->get(std::string(l(i)));

        if (!layer)
        {
            Rcpp::stop("cannot find layer " + std::string(l(i)));
        }

        int vertex = layer->vertices()->get_index(actor);

        if (vertex == -1)
        {
            Rcpp::stop("cannot find actor " + actor->name + " on layer " + layer->name);
        }

        res[i] = std::make_pair(actor, layer);
    }

    return res;
}

std::vector<std::pair<const uu::net::Edge*, uu::net::AttributedSimpleGraph*>>
        resolve_edges(
            const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
            const Rcpp::DataFrame& edges
        )
{
    std::vector<std::pair<const uu::net::Edge*, uu::net::AttributedSimpleGraph*>> res(edges.nrow());
    CharacterVector a_from = edges(0);
    CharacterVector l_from = edges(1);
    CharacterVector a_to = edges(2);
    CharacterVector l_to = edges(3);

    for (int i=0; i<edges.nrow(); i++)
    {
        auto actor1 = mnet->vertices()->get(std::string(a_from(i)));

        if (!actor1)
        {
            Rcpp::stop("cannot find actor " + std::string(a_from(i)));
        }

        auto actor2 = mnet->vertices()->get(std::string(a_to(i)));

        if (!actor2)
        {
            Rcpp::stop("cannot find actor " + std::string(a_to(i)));
        }

        auto layer1 = mnet->layers()->get(std::string(l_from(i)));

        if (!layer1)
        {
            Rcpp::stop("cannot find layer " + std::string(l_from(i)));
        }

        auto layer2 = mnet->layers()->get(std::string(l_to(i)));

        if (!layer2)
        {
            Rcpp::stop("cannot find layer " + std::string(l_to(i)));
        }

        if (layer1 == layer2)
        {
            auto edge = layer1->edges()->get(actor1, actor2);

            if (!edge)
            {
                Rcpp::stop("cannot find edge from " + actor1->to_string() + " to " + actor2->to_string());
            }

            res[i] = std::make_pair(edge, layer1);
        }

        else
        {
            // @todo
            Rcpp::stop("interlayer edges not currently supported");
        }
    }

    return res;
}



uu::net::EdgeMode
resolve_mode(
    std::string mode
)
{
    if (mode=="all")
    {
        return uu::net::EdgeMode::INOUT;
    }

    else if (mode=="in")
    {
        return uu::net::EdgeMode::IN;
    }

    else if (mode=="out")
    {
        return uu::net::EdgeMode::OUT;
    }

    Rcpp::stop("unexpected value: edge mode " + mode);

    return uu::net::EdgeMode::INOUT; // never reaches here
}

Rcpp::DataFrame
to_dataframe(
    uu::net::CommunityStructure<uu::net::VertexLayerCommunity<const uu::net::AttributedSimpleGraph>>* cs
)
{

    Rcpp::CharacterVector actor, layer;
    Rcpp::NumericVector community_id;

    int comm_id=0;

    for (auto com: *cs)
    {
        for (auto pair: *com)
        {
            actor.push_back(pair.first->name);
            layer.push_back(pair.second->name);
            community_id.push_back(comm_id);
        }

        comm_id++;
    }

    return Rcpp::DataFrame::create(
               _("actor")=actor,
               _("layer")=layer,
               _("cid")=community_id
           );
}

std::unique_ptr<uu::net::CommunityStructure<uu::net::VertexLayerCommunity<const uu::net::AttributedSimpleGraph>>>
to_communities(
               const DataFrame& com,
               const uu::net::AttributedHomogeneousMultilayerNetwork* mnet
               )
{
    CharacterVector cs_actor = com["actor"];
    CharacterVector cs_layer = com["layer"];
    NumericVector cs_cid = com["cid"];
    
    std::unordered_map<int, std::list<std::pair<const uu::net::Vertex*, const uu::net::AttributedSimpleGraph*>> > result;
    
    for (size_t i=0; i<com.nrow(); i++) {
        int comm_id = cs_cid[i];
        auto layer = mnet->layers()->get(std::string(cs_layer[i]));
        if (!layer) stop("cannot find layer " + std::string(cs_layer[i]) + " (community structure not compatible with this network?)");
        auto actor = mnet->vertices()->get(std::string(cs_actor[i]));
        if (!actor) stop("cannot find actor " + std::string(cs_actor[i]) + " (community structure not compatible with this network?)");
        
        auto iv = std::make_pair(actor, layer);
        result[comm_id].push_back(iv);
        
    }
    
    
        // build community structure
    
    auto communities = std::make_unique<uu::net::CommunityStructure<uu::net::VertexLayerCommunity<const uu::net::AttributedSimpleGraph>>>();
    
    for (auto pair: result)
    {
        auto c = std::make_unique<uu::net::VertexLayerCommunity<const uu::net::AttributedSimpleGraph>>();
        
        for (auto vertex_layer_pair: pair.second)
        {
            c->add(vertex_layer_pair);
        }
        
        communities->add(std::move(c));
    }
    
    return communities;
}

