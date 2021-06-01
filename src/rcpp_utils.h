#ifndef UU_R_MULTINET_RCPP_UTILS_H_
#define UU_R_MULTINET_RCPP_UTILS_H_

#include "Rcpp.h"
#include <unordered_set>
#include <vector>
#include "community/CommunityStructure.hpp"
#include "objects/Vertex.hpp"
#include "objects/Edge.hpp"
#include "networks/Network.hpp"
#include "community/Community.hpp"
#include "networks/MultilayerNetwork.hpp"
#include "r_functions.h"

std::vector<const uu::net::Network*>
resolve_const_layers(
    const uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::vector<uu::net::Network*>
resolve_layers(
    uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<uu::net::Network*>
resolve_layers_unordered(
    uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<const uu::net::Network*>
resolve_const_layers_unordered(
    const uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::vector<const uu::net::Vertex*>
resolve_actors(
    const uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<const uu::net::Vertex*>
resolve_actors_unordered(
    const uu::net::MultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::vector<std::pair<const uu::net::Vertex*, const uu::net::Network*>>
        resolve_const_vertices(
            const uu::net::MultilayerNetwork* mnet,
            const Rcpp::DataFrame& vertex_matrix
        );

std::vector<std::pair<const uu::net::Vertex*, uu::net::Network*>>
resolve_vertices(
    uu::net::MultilayerNetwork* mnet,
    const Rcpp::DataFrame& vertex_matrix
);

std::vector<std::tuple<const uu::net::Vertex*, const uu::net::Network*, const uu::net::Vertex*, const uu::net::Network*>>
        resolve_const_edges(
            const uu::net::MultilayerNetwork* mnet,
            const Rcpp::DataFrame& edge_matrix
        );

std::vector<std::tuple<const uu::net::Vertex*, uu::net::Network*, const uu::net::Vertex*,  uu::net::Network*>>
resolve_edges(
    uu::net::MultilayerNetwork* mnet,
    const Rcpp::DataFrame& edge_matrix
);


uu::net::EdgeMode
resolve_mode(
    std::string mode
);

Rcpp::DataFrame
to_dataframe(
    uu::net::CommunityStructure<uu::net::MultilayerNetwork>* cs
);

std::unique_ptr<uu::net::CommunityStructure<uu::net::MultilayerNetwork>>
to_communities(
               const DataFrame& com,
               const uu::net::MultilayerNetwork* mnet
               );

#endif
