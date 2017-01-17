#ifndef MULTIPLENETWORK_COMMUNITY_H_
#define MULTIPLENETWORK_COMMUNITY_H_

#include "datastructures.h"

namespace mlnet {

typedef std::map<CliqueSharedPtr,hash_set<CliqueSharedPtr> > clique_adjacency_graph;

/*
class community {
public:
	community();
	bool add_node(const NodeSharedPtr& node);
	sorted_set<ActorSharedPtr> actors() const;
	sorted_set<LayerSharedPtr> layers() const;
	std::string to_string() const;
private:
	sorted_set<NodeSharedPtr> _nodes;
	sorted_set<ActorSharedPtr> _actors;
	sorted_set<LayerSharedPtr> _layers;
};
*/

/* */
struct layer_set_comparator {
    bool operator()(const sorted_set<LayerSharedPtr>& a, const sorted_set<LayerSharedPtr>& b) const {
    	if (a.size() != b.size()) return a.size() < b.size();
    	sorted_set<LayerSharedPtr>::iterator it1 = a.begin();
    	sorted_set<LayerSharedPtr>::iterator it2 = b.begin();
    	for (int i=0; i<a.size(); i++) {
    		if ((*it1)<(*it2))
    			return true;
    		if ((*it1)>(*it2))
    			return false;
    		++it1; ++it2;
    	}
    	return false;
    }
};
typedef std::set<sorted_set<LayerSharedPtr>,layer_set_comparator > layer_sets;

class cpm_community {
public:
	cpm_community(long id, hash_set<CliqueSharedPtr> cliques, hash_set<LayerSharedPtr> layers);
	cpm_community();
	std::set<ActorSharedPtr> actors();
	int size() const;
	bool operator==(const cpm_community& comp) const;
	bool operator!=(const cpm_community& comp) const;
	bool operator<(const cpm_community& comp) const;
	bool operator>(const cpm_community& comp) const;
	std::string to_string();

	long id;
	std::set<CliqueSharedPtr> cliques;
	std::set<LayerSharedPtr> layers;
};

typedef std::shared_ptr<cpm_community> CommunitySharedPtr;

hash_set<CommunitySharedPtr> ml_cpm(MLNetworkSharedPtr mnet, int k, int m1, int m2, int m3);

hash_map<ActorSharedPtr,hash_set<LayerSharedPtr> > get_mlneighbors(MLNetworkSharedPtr mnet, ActorSharedPtr actor);

hash_set<LayerSharedPtr> neighboring_layers(MLNetworkSharedPtr mnet, ActorSharedPtr actor1, ActorSharedPtr actor2);

hash_set<CliqueSharedPtr> find_max_cliques(MLNetworkSharedPtr mnet, hash_set<LayerSharedPtr> layers, int k, int m);
//hash_set<CliqueSharedPtr> find_max_cliques_it(MLNetworkSharedPtr mnet, hash_set<LayerSharedPtr> layers, int k, int m);

hash_set<CliqueSharedPtr> find_max_cliques(MLNetworkSharedPtr mnet, int k, int m);
hash_set<CliqueSharedPtr> find_max_cliques_it(MLNetworkSharedPtr mnet, int k, int m);

void find_max_cliques(MLNetworkSharedPtr mnet, CliqueSharedPtr& A, hash_map<ActorSharedPtr,hash_set<LayerSharedPtr> >& B, hash_map<ActorSharedPtr,hash_set<LayerSharedPtr> >& C,
		hash_set<ActorSharedPtr>& in_clique, hash_set<CliqueSharedPtr>& result, int k, int m);
void find_max_cliques_it(MLNetworkSharedPtr mnet, CliqueSharedPtr& A, hash_map<ActorSharedPtr,hash_set<LayerSharedPtr> >& B, hash_map<ActorSharedPtr,hash_set<LayerSharedPtr> >& C, hash_set<CliqueSharedPtr>& result, int k, int m);

std::map<CliqueSharedPtr,hash_set<CliqueSharedPtr> > build_adjacency_graph(const hash_set<CliqueSharedPtr>& C, int m);

std::map<CliqueSharedPtr,hash_set<CliqueSharedPtr> > build_max_adjacency_graph(const hash_set<CliqueSharedPtr>& C, int k, int m);

hash_set<CommunitySharedPtr> find_max_communities_max_layers(MLNetworkSharedPtr mnet, const clique_adjacency_graph& adjacency, int m);

void find_max_communities_max_layers(const clique_adjacency_graph& adjacency, CommunitySharedPtr& A,
		vector<CliqueSharedPtr> Candidates, hash_set<CliqueSharedPtr>& processedCliques, layer_sets& processedLayerCombinations, int m, hash_set<CommunitySharedPtr>& result);
}

#endif /* MULTIPLENETWORK_COMMUNITY_H_ */

