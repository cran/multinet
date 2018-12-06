/**
 *
 *
 * History:
 * - 2018.09.12 updated to version 2.0 C++ uunet library API.
 * - 2014.07.29 file created.
 */

#ifndef UU_R_MULTINET_RCPP_UTILS_H_
#define UU_R_MULTINET_RCPP_UTILS_H_

#include "Rcpp.h"
#include <unordered_set>
#include <vector>
#include "net/community/CommunityStructure.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/Edge.h"
#include "net/datastructures/graphs/AttributedSimpleGraph.h"
#include "mnet/community/VertexLayerCommunity.h"
#include "mnet/datastructures/graphs/AttributedHomogeneousMultilayerNetwork.h"
#include "r_functions.h"

std::vector<uu::net::AttributedSimpleGraph*>
resolve_layers(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<uu::net::AttributedSimpleGraph*>
resolve_layers_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<const uu::net::AttributedSimpleGraph*>
resolve_const_layers_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::vector<const uu::net::Vertex*>
resolve_actors(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::unordered_set<const uu::net::Vertex*>
resolve_actors_unordered(
    const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
    const Rcpp::CharacterVector& names
);

std::vector<std::pair<const uu::net::Vertex*, uu::net::AttributedSimpleGraph*>>
        resolve_vertices(
            const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
            const Rcpp::DataFrame& vertex_matrix
        );

std::vector<std::pair<const uu::net::Edge*, uu::net::AttributedSimpleGraph*>>
        resolve_edges(
            const uu::net::AttributedHomogeneousMultilayerNetwork* mnet,
            const Rcpp::DataFrame& edge_matrix
        );


uu::net::EdgeMode
resolve_mode(
    std::string mode
);

Rcpp::DataFrame
to_dataframe(
    uu::net::CommunityStructure<uu::net::VertexLayerCommunity<const uu::net::AttributedSimpleGraph>>* cs
);


#endif
