#include <unordered_map>
#include <vector>
#include "community/_impl/louvain_utils.hpp"

namespace uu {
namespace net {

template <typename G>
std::unique_ptr<CommunityStructure<Network>>
        louvain(
            const G* g,
            double gamma
        )
{

    std::vector<std::unique_ptr<MetaNetwork>> passes;

    auto meta = convert(g);

    do
    {
        passes.push_back(std::move(meta));
        auto w = passes.back()->get();
        meta = pass(w, gamma);

    }
    while (meta);

    auto c = communities(passes);

    return c;
}

}
}
