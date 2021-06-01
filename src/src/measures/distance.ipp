#include <unordered_map>
#include "core/exceptions/assert_not_null.hpp"
#include "objects/EdgeMode.hpp"
#include "measures/neighborhood.hpp"

namespace uu {
namespace net {

template <typename M>
std::unordered_map<const Vertex*, std::set<PathLength<M>> >
        pareto_distance(
            const M* mnet,
            const Vertex* from
        )
{
    
    class TimestampComparator
    {
      public:
        int
        operator()(
            const std::pair<PathLength<M>, size_t>& lhs,
            const std::pair<PathLength<M>, size_t>& rhs
        ) const
        {
            return lhs.second < rhs.second;

        }
    };
    std::unordered_map<const Vertex*,std::set<std::pair<PathLength<M>,size_t>,TimestampComparator> > distances;
    // timestamps, used for efficiency reasons to avoid processing edges when no changes have occurred since the last iteration
    size_t ts = 0;
    std::unordered_map<const typename M::layer_type*, std::map<std::pair<const Vertex*, const Vertex*>, size_t>> last_updated;

    // initialize distance array - for every target vertex there is still no found path leading to it...
    for (auto actor: *mnet->actors())
    {
        distances[actor] = std::set<std::pair<PathLength<M>,size_t>,TimestampComparator>();
    }
    // ...except for the source node, reachable from itself via an empty path
    PathLength<M> empty(mnet);
    distances[from].insert(std::pair<PathLength<M>,size_t>(empty,ts));

    bool changes; // keep updating the paths until when no changes occur during one full scan of the edges

    do
    {
        changes = false;

        for (auto layer: *mnet->layers())
        {
            for (auto node_from: *layer->vertices())
            {
                for (auto node_to: *layer->edges()->neighbors(node_from,EdgeMode::OUT))
                {
                    ts++;
                    
                    // last updated
                    auto key = std::make_pair(node_from,node_to);
                    size_t lastUpdate = last_updated[layer][key];
                    last_updated[layer][key] = ts;

                    
                    // if no tmp shortest paths exist to this, do nothing and continue
                    //if (distances[actor1].empty()) {
                    //    //cout << "No paths to " << mnet.getGlobalName(actor1) << endl;
                    //    continue;
                    //}
                    // expand each temporary distance to e.v1 and see if it generates a new shortest path to e.v2
                    for (auto dist: distances[node_from])
                    {
                        ts++;

                        if (dist.second < lastUpdate)
                        {
                            //std::cout << "Already processed: " << lastUpdate << ": " << dist.second << std::endl;
                            // distance already processed
                            continue;// TODO for efficiency: paths are sorted e.v1 most recently updated, so we do not need to examine the others
                        }

                        // otherwise, extend the distance to reach e.v2
                        // @todo check it's not a cycle, for efficiency reasons (?)
                        // Extend
                        PathLength<M> extended_distance = dist.first;
                        extended_distance.ts = ts;
                        extended_distance.step(layer, layer);
                        //std::cout << "producing candidate: " << layer->name << std::endl;

                        // compare the new distance with the other temporary distances to e.v2
                        bool should_be_inserted = true;
                        std::set<std::pair<PathLength<M>,size_t>,TimestampComparator> dominated; // here we store the distances that will be removed if dominated by the new one

                        for (auto previous: distances[node_to])
                        {
                            // check dominance, i.e., if this is a shorter distance
                            //cout << "comparison " << extended_distance << " vs. " << previous << ": ";

                            ComparisonResult dominance = extended_distance.compare(previous.first,ComparisonType::FULL);

                            switch (dominance)
                            {
                            case ComparisonResult::LESS_THAN: // stop here
                                should_be_inserted = false;
                                //std::cout << "dominated" << std::endl;
                                break;

                            case ComparisonResult::EQUAL:
                                // this means that the number of steps in each layer is the same.
                                // Only one of them will be kept
                                should_be_inserted = false;
                                //std::cout << "equal" << std::endl;
                                // go on with the others
                                break;

                            case ComparisonResult::INCOMPARABLE: // incomparable
                                //std::cout << "inc." << std::endl;
                                // go on with the others
                                break;

                            case ComparisonResult::GREATER_THAN: // dominates -> insert it in the list of paths to be removed
                                dominated.insert(previous);
                                //std::cout << " dominated - remove " << std::endl;
                                //debug("   - REMOV " + currentPath);
                                break;
                            }
                        }

                        if (should_be_inserted)
                        {
                            //cout << " INSERT NEW for " << actor2->name << " - " << extended_distance << endl;
                            distances[node_to].insert(std::pair<PathLength<M>,size_t>(extended_distance,ts));
                            //cout << "insert " << mnet.getGlobalName(actor2) << " - " << extended_distance << endl;
                            //cout << "add " << paths[toGlobalId].size() << "\n";
                            //cout << "New path " << fromGlobalId << " => "
                            //        << toGlobalId << extended_path << "\n";
                            changes = true;
                        }

                        // remove dominated paths
                        // ?? why not just remove?
                        std::set<std::pair<PathLength<M>,size_t>,TimestampComparator> diff;
                        std::set_difference(distances[node_to].begin(),
                                            distances[node_to].end(), dominated.begin(),
                                            dominated.end(), std::inserter(diff, diff.end()));
                        distances[node_to] = diff;
                    }
                }
            }
        }
    }
    while (changes);

    std::unordered_map<const Vertex*, std::set<PathLength<M>> > result;

    for (auto p: distances)
    {
        for (auto dist: p.second)
        {
            result[p.first].insert(dist.first);
            //cout << "new dist to " <<  mnet->get_actor(p.first)->name << ": " << dist.first.to_string() << " (" << result[mnet->get_actor(p.first)].size() << ")" << endl;
        }
    }

    return result;
    //cout << "here?\n";
}
}
}

