#include "tnet/transformation/to_ordered_multiplex.h"
#include "net/datastructures/graphs/SimpleGraph.h"
#include "net/datastructures/objects/EdgeDir.h"
#include "core/attributes/conversion.h"
#include "core/attributes/Value.h"
#include "core/attributes/Time.h"
#include <vector>
#include <fstream>
#include <algorithm>

namespace uu {
namespace net {


std::unique_ptr<OrderedMultiplexNetwork>
to_ordered_multiplex(
    const TemporalNetwork* tnet,
    size_t num_partitions
)
{
    // @todo assert

    auto mpx = create_ordered_multiplex_network(tnet->name);
    std::vector<const Edge*> sorted_edge_vector;
    std::vector<std::vector<const Edge*>> partitioned_edge_vector;


    // create ordered layers for each time partition
    for (size_t i = 0; i<num_partitions; i++)
    {
        EdgeDir dir = (tnet->is_directed()? EdgeDir::DIRECTED : EdgeDir::UNDIRECTED);
        auto g = create_simple_graph("l" + std::to_string(i), dir);
        mpx->layers()->push_back(std::move(g));
    }

    // adding all vertices to all the layers
    for (auto vertex: *tnet->vertices())
    {
        mpx->vertices()->add(vertex);

        for (auto layer: *mpx->layers())
        {
            layer->vertices()->add(vertex);
        }
    }


    auto max_time = tnet->edges()->attr()->get_max_time().value;
    auto min_time = tnet->edges()->attr()->get_min_time().value;
    //auto max_t_time = std::chrono::system_clock::to_time_t(max_time);
    //auto min_t_time = std::chrono::system_clock::to_time_t(min_time);
    auto split_time = (max_time - min_time) / (float)num_partitions;

    for (auto e : *tnet->edges())
    {
        auto t = tnet->edges()->attr()->get_time(e);

        if (t.null)
        {
            continue;
        }

        size_t idx = ((t.value - min_time) / split_time);

        if (idx == num_partitions)
        {
            idx--;
        }

        auto layer = mpx->layers()->get_at_index(idx);

        layer->edges()->add(e->v1, e->v2);
    }

    return mpx;
}

}
}

