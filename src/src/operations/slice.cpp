#include "operations/slice.hpp"
#include "networks/Network.hpp"
#include "objects/EdgeDir.hpp"
#include "core/attributes/conversion.hpp"
#include "core/attributes/Value.hpp"
#include "core/attributes/Time.hpp"
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include <vector>
#include <fstream>
#include <algorithm>

namespace uu {
namespace net {


std::unique_ptr<OrderedMultiplexNetwork>
slice_equal_time(
    const Network* tnet,
    std::size_t num_partitions
)
{

    core::assert_not_null(tnet, "slice_equal_time", "tnet");

    auto mpx = std::make_unique<OrderedMultiplexNetwork>(tnet->name);
    std::vector<const Edge*> sorted_edge_vector;
    std::vector<std::vector<const Edge*>> partitioned_edge_vector;

    // create ordered layers for each time partition
    for (std::size_t i = 0; i<num_partitions; i++)
    {
        EdgeDir dir = (tnet->is_directed()? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED);
        //auto g = std::make_unique<uu::net::Network>("l" + std::to_string(i), dir);
        // @todo use core::name_generator
        mpx->layers()->add("l" + std::to_string(i), dir);
    }

    // adding all vertices to all the layers
    for (auto vertex: *tnet->vertices())
    {
        mpx->actors()->add(vertex);

        for (auto layer: *mpx->layers())
        {
            layer->vertices()->add(vertex);
        }
    }

    auto bounds = get_time_bounds(tnet);
    auto min_time = bounds[0];
    auto max_time = bounds[1];

    auto split_time = (max_time - min_time) / (float)num_partitions;


    if (max_time == min_time)
    {
        throw core::OperationNotSupportedException("cannot slice a network with no temporal extension");
    }

    for (auto e : *tnet->edges())
    {
        auto times = get_times(tnet, e);

        for (auto t: times)
        {
            std::size_t idx = ((t - min_time) / split_time);

            if (idx == num_partitions)
            {
                idx--;
            }

            auto layer = mpx->layers()->at(idx);

            layer->edges()->add(e->v1, e->v2);
        }
    }

    return mpx;
}

}
}

