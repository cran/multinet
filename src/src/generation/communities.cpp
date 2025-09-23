#include "generation/communities.hpp"

#include "core/exceptions/WrongParameterException.hpp"

namespace uu {
namespace net {


std::vector<std::size_t>
create_eq_seeds(
    std::size_t num_actors,
    std::size_t num_communities
)
{
    if (num_actors % num_communities != 0)
    {
        throw core::WrongParameterException("the number of actors must be a multiple of the number of communities");
    }

    std::vector<std::size_t> seeds;
    seeds.push_back(0);

    for (std::size_t i=1; i<=num_communities; i++)
    {
        seeds.push_back(seeds.at(i-1) + num_actors/num_communities);
    }

    return seeds;
}


std::pair<std::unique_ptr<MultilayerNetwork>, std::unique_ptr<CommunityStructure<MultilayerNetwork>>>
generate_pep(
    std::size_t num_layers,
    std::size_t num_actors,
    std::size_t num_communities,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
)
{
    return generate_peo(num_layers, num_actors, num_communities, 0, p_internal, p_external);
}


std::pair<std::unique_ptr<MultilayerNetwork>, std::unique_ptr<CommunityStructure<MultilayerNetwork>>>
generate_peo(
    std::size_t num_layers,
    std::size_t num_actors,
    std::size_t num_communities,
    std::size_t overlapping_size,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
)
{
    auto net = null_multiplex(num_actors, num_layers);

    // define communities
    auto com = std::make_unique<CommunityStructure<MultilayerNetwork>>();
    std::vector<std::size_t> seeds = create_eq_seeds(num_actors, num_communities);

    for (std::size_t i=0; i<seeds.size()-1; i++)
    {
        auto c = std::make_unique<Community<MultilayerNetwork>>();

        for (std::size_t l=0; l<num_layers; l++)
        {
            auto layer = net->layers()->at(l);

            for (std::size_t a = seeds[i]; a < seeds[i+1]+overlapping_size && a < net->actors()->size(); a++)
            {
                auto actor = net->actors()->at(a);
                c->add(MLVertex(actor, layer));
            }
        }

        com->add(std::move(c));
    }

    // sample edges
    sample(net.get(), com.get(), p_internal, p_external);

    return std::make_pair(std::move(net), std::move(com));
}


std::pair<std::unique_ptr<MultilayerNetwork>, std::unique_ptr<CommunityStructure<MultilayerNetwork>>>
generate_sep(
    std::size_t num_layers,
    std::size_t num_actors,
    std::size_t num_communities,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
)
{
    return generate_seo(num_layers, num_actors, num_communities, 0, p_internal, p_external);
}


std::pair<std::unique_ptr<MultilayerNetwork>, std::unique_ptr<CommunityStructure<MultilayerNetwork>>>
generate_seo(
    std::size_t num_layers,
    std::size_t num_actors,
    std::size_t num_communities,
    std::size_t overlapping_size,
    const std::vector<double>& p_internal,
    const std::vector<double>& p_external
)
{
    if (num_actors % 2 != 0)
    {
        throw core::WrongParameterException("the number of communities must be even");
    }

    auto net = null_multiplex(num_actors, num_layers);

    // define communities
    auto com = std::make_unique<CommunityStructure<MultilayerNetwork>>();
    std::vector<std::size_t> seeds = create_eq_seeds(num_actors, num_communities/2);

    for (std::size_t i=0; i<seeds.size()-1; i++)
    {
        auto c = std::make_unique<Community<MultilayerNetwork>>();

        for (std::size_t l=0; l<num_layers-1; l++)
        {
            auto layer = net->layers()->at(l);

            for (std::size_t a = seeds[i]; a < seeds[i+1]+overlapping_size && a < net->actors()->size(); a++)
            {
                auto actor = net->actors()->at(a);
                c->add(MLVertex(actor, layer));
            }
        }

        com->add(std::move(c));
    }

    //create communities on the last layer
    auto layer = net->layers()->at(num_layers-1);

    for (std::size_t s=0; s<num_communities/2; s++)
    {
        auto c = std::make_unique<Community<MultilayerNetwork>>();

        for (std::size_t a = s; a < net->actors()->size(); a += (num_actors/num_communities*2))
        {
            auto actor = net->actors()->at(a);
            c->add(MLVertex(actor, layer));
        }

        com->add(std::move(c));
    }

    // sample edges
    sample(net.get(), com.get(), p_internal, p_external);

    return std::make_pair(std::move(net), std::move(com));
}


}
}

