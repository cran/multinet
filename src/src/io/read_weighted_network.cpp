#include "io/read_weighted_network.hpp"

namespace uu {
namespace net {

std::unique_ptr<Network>
read_weighted_network(
    const std::string& infile,
    const std::string& name,
    char separator
)
{
    // Read metadata
    GraphMetadata meta = read_metadata(infile, ',');
    EdgeDir dir = meta.features.is_directed?EdgeDir::DIRECTED:EdgeDir::UNDIRECTED;
    LoopMode loops = meta.features.allows_loops ? LoopMode::ALLOWED : LoopMode::DISALLOWED;
    // Check metadata consistency (@todo)
    // create network
    // and add attributes
    auto g = std::make_unique<Network>(name, dir, loops);
    make_weighted(g.get());

    for (auto attr: meta.vertex_attributes)
    {
        g->vertices()->attr()->add(attr.name, attr.type);
    }

    for (auto attr: meta.edge_attributes)
    {
        g->edges()->attr()->add(attr.name, attr.type);
    }

    //meta.edge_attributes.insert(meta.edge_attributes.begin(), attr);
    meta.edge_attributes.insert(meta.edge_attributes.begin(), core::Attribute("w_", core::AttributeType::DOUBLE));

    // Read data (vertices, edges, attribute values)
    read_data(g.get(),  meta, infile, separator);

    return g;

}


}
}
