/*
 * distances.cpp
 *
 *  Created on: Jun 11, 2013
 *      Author: magnanim
 */

#include "measures.h"
#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

namespace mlnet {

hash_map<ActorSharedPtr,std::set<path_length> > pareto_distance(const MLNetworkSharedPtr& mnet, const ActorSharedPtr& from)  {
	class timestamp_comparator {
	    public: int operator()(const std::pair<path_length,long>& lhs, const std::pair<path_length,long>& rhs) {return lhs.second < rhs.second;}
	};
	std::unordered_map<ActorSharedPtr,std::set<std::pair<path_length,long>,timestamp_comparator> > distances;
	// timestamps, used for efficiency reasons to avoid processing edges when no changes have occurred since the last iteration
	long ts = 0;
	PairCounter<node_id, node_id> last_updated;
	// initialize distance array - for every target vertex there is still no found path leading to it...
	for (ActorSharedPtr actor: *mnet->get_actors()) {
		distances[actor] = std::set<std::pair<path_length,long>,timestamp_comparator>();
	} // ...except for the source node, reachable from itself via an empty path
	path_length empty(mnet);
	distances[from].insert(std::pair<path_length,long>(empty,ts));

	bool changes; // keep updating the paths until when no changes occur during one full scan of the edges
	do {
		changes = false;
		for (NodeSharedPtr node_from: *mnet->get_nodes()) {
			for (NodeSharedPtr node_to: *mnet->neighbors(node_from,OUT)) {
			ts++;
			// last updated
			long lastUpdate;
			if (last_updated.count(node_from->id,node_to->id)==0) lastUpdate = -1;
			else lastUpdate = last_updated.count(node_from->id,node_to->id);
			last_updated.set(node_from->id,node_to->id,ts);

			//cout << ts << " " << node_from->actor->name << " on " << node_from->layer->name <<  " -> " << node_to->actor->name << " on " << node_to->layer->name << endl;

			ActorSharedPtr actor1 = node_from->actor;
			ActorSharedPtr actor2 = node_to->actor;

			// if no tmp shortest paths exist to this, do nothing and continue
			//if (distances[actor1].empty()) {
			//	//cout << "No paths to " << mnet.getGlobalName(actor1) << endl;
			//	continue;
			//}
			// expand each temporary distance to e.v1 and see if it generates a new shortest path to e.v2
			for (auto dist: distances[actor1]) {
				ts++;
				if (dist.second < lastUpdate) {
					//cout << "Already processed: " << lastUpdate << ": "<< dist.second << endl;
					// distance already processed
					continue;// TODO for efficiency: paths are sorted e.v1 most recently updated, so we do not need to examine the others
				}
				// otherwise, extend the distance to reach e.v2
				// TOADD: check it's not a cycle, for efficiency reasons (?)
				// Extend
				path_length extended_distance = dist.first;
				extended_distance.ts = ts;
				extended_distance.step(node_from->layer, node_to->layer);
				//cout << "producing candidate: " << extended_distance << endl;

				// compare the new distance with the other temporary distances to e.v2
				bool should_be_inserted = true;
				set<std::pair<path_length,long>,timestamp_comparator> dominated; // here we store the distances that will be removed if dominated by the new one
				for (auto previous: distances[actor2]) {
				// check dominance, i.e., if this is a shorter distance
				//cout << "comparison " << extended_distance << " vs. " << previous << ": ";

				int dominance = extended_distance.compare(previous.first,FULL);
				switch (dominance) {
					case LESS_THAN: // stop here
						should_be_inserted = false;
						//cout << "dominated" << endl;
						break;
					case EQUAL:
						// this means that the number of steps in each layer is the same.
						// Only one of them will be kept
						should_be_inserted = false;
						//cout << "equal" << endl;
						// go on with the others
						break;
					case INCOMPARABLE: // incomparable
						//cout << "inc." << endl;
						// go on with the others
						break;
					case GREATER_THAN: // dominates -> insert it in the list of paths to be removed
						dominated.insert(previous);
						//cout << " dominated - remove " << endl;
						//debug("   - REMOV " + currentPath);
						break;
					}
				}

				if (should_be_inserted) {
					//cout << " INSERT NEW for " << actor2->name << " - " << extended_distance << endl;
					distances[actor2].insert(std::pair<path_length,long>(extended_distance,ts));
					//cout << "insert " << mnet.getGlobalName(actor2) << " - " << extended_distance << endl;
					//cout << "add " << paths[toGlobalId].size() << "\n";
					//cout << "New path " << fromGlobalId << " => "
					//		<< toGlobalId << extended_path << "\n";
					changes = true;
				}

				// remove dominated paths
				// ?? why not just remove?
				std::set<std::pair<path_length,long>,timestamp_comparator> diff;
				set_difference(distances[actor2].begin(),
				distances[actor2].end(), dominated.begin(),
				dominated.end(), inserter(diff, diff.end()));
				distances[actor2] = diff;
				}
			}
		}
	} while (changes);
	std::unordered_map<ActorSharedPtr,std::set<path_length> > result;
	for (auto p: distances) {
		for (auto dist: p.second) {
			result[p.first].insert(dist.first);
			//cout << "new dist to " <<  mnet->get_actor(p.first)->name << ": " << dist.first.to_string() << " (" << result[mnet->get_actor(p.first)].size() << ")" << endl;
		}
	}
	return result;
	//cout << "here?\n";
}


}
