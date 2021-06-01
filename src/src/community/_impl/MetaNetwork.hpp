#ifndef UU_NET_COMMUNITY_METANETWORK_H_
#define UU_NET_COMMUNITY_METANETWORK_H_

#include <unordered_map>
#include <vector>
#include <memory>
#include "networks/Network.hpp"

namespace uu {
namespace net {

class MetaNetwork
{
  public:

    std::unique_ptr<Network> w;
    size_t order = 0;
    std::unordered_map<const Vertex*, std::set<const Vertex*>> mapping;
    std::unordered_map<const Vertex*, const Vertex*> reverse_mapping;

    MetaNetwork();

    template <typename VertexIterator>
    const Vertex*
    add(
        VertexIterator begin,
        VertexIterator end
    );


    const Vertex*
    add(
        const Vertex* u
    );


    const Edge*
    edge(
        const Vertex* u,
        const Vertex* v,
        double weight = 1.0
    );


    const Network*
    get(
    ) const;

};

}
}

#include "MetaNetwork.ipp"

#endif
