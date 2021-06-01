#include "community/_impl/common.hpp"

namespace uu {
namespace net {

std::unique_ptr<CommunityStructure<Network>>
        to_community_structure(
            std::unordered_map<const Vertex*, size_t> membership
        )
{
    auto result = std::make_unique<CommunityStructure<Network>>();
    std::unordered_map<int, std::vector<const Vertex*>> communities;

    for (auto pair: membership)
    {
        communities[pair.second].push_back(pair.first);
    }

    for (auto pair: communities)
    {
        auto community = std::make_unique<Community<Network>>();

        for (auto n: pair.second)
        {
            community->add(n);
        }

        result->add(std::move(community));
    }

    return result;
}


}
}
