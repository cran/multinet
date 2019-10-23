/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#include "net/community/cutils.hpp"

namespace uu {
namespace net {

std::unique_ptr<CommunityStructure<Community<const Vertex*>>>
to_community_structure(
    std::unordered_map<const Vertex*, size_t> membership
)
{
    auto result = std::make_unique<CommunityStructure<Community<const Vertex*>>>();
    std::unordered_map<int, std::vector<const Vertex*>> communities;

    for (auto pair: membership)
    {
        communities[pair.second].push_back(pair.first);
    }

    for (auto pair: communities)
    {
        auto community = std::make_unique<Community<const Vertex*>>();

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

