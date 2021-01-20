#ifndef UU_GENERATION_COMMUNITIES_H_
#define UU_GENERATION_COMMUNITIES_H_

#include "community/CommunityStructure.hpp"
#include "generation/sample.hpp"
#include "generation/standard_graphs.hpp"
#include "networks/MultilayerNetwork.hpp"

namespace uu {
namespace net {


/**
 *
 **/
std::pair<std::unique_ptr<uu::net::MultilayerNetwork>, std::unique_ptr<CommunityStructure<uu::net::MultilayerNetwork>>>
generate_pep(
    size_t num_of_layers,
    size_t num_of_actors,
    size_t num_of_seeds,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
);


/**
 *
 **/
std::pair<std::unique_ptr<uu::net::MultilayerNetwork>, std::unique_ptr<CommunityStructure<uu::net::MultilayerNetwork>>>
generate_peo(
    size_t num_of_layers,
    size_t num_of_actors,
    size_t num_of_seeds,
    size_t overlapping_size,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
);


/**
 *
 **/
std::pair<std::unique_ptr<uu::net::MultilayerNetwork>, std::unique_ptr<CommunityStructure<uu::net::MultilayerNetwork>>>
generate_sep(
    size_t num_of_layers,
    size_t num_of_actors,
    size_t num_of_seeds,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
);


/**
 *
 **/
std::pair<std::unique_ptr<uu::net::MultilayerNetwork>, std::unique_ptr<CommunityStructure<uu::net::MultilayerNetwork>>>
generate_seo(
    size_t num_of_layers,
    size_t num_of_actors,
    size_t num_of_seeds,
    size_t overlapping_size,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
);

}
}

#endif
