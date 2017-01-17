#include "transformation.h"

namespace mlnet {

LayerSharedPtr create_layer(MLNetworkSharedPtr& mnet, const std::string& new_layer_name, const hash_set<LayerSharedPtr>& layers, bool force_directed, bool force_actors) {
	// verify if there are directed layers: if yes, the resulting flattened layer is also directed
	bool directed = force_directed;
	if (!force_directed) {
		for (LayerSharedPtr layer1: layers) {
			for (LayerSharedPtr layer2: layers) {
				if (mnet->is_directed(layer1,layer2)) {
					directed = true;
					goto end_loop;
				}
			}
		}
	}
	end_loop:

	edge_directionality dir = directed?DIRECTED:UNDIRECTED;
	LayerSharedPtr new_layer =  mnet->add_layer(new_layer_name,dir);
	if (!new_layer) throw DuplicateElementException("layer " + new_layer_name + " already exists");

	if (force_actors) {
		for (ActorSharedPtr actor: *mnet->get_actors()) {
			mnet->add_node(actor,new_layer);
		}
	}
	else {
		for (LayerSharedPtr layer: layers) {
			for (NodeSharedPtr node: *mnet->get_nodes(layer)) {
				mnet->add_node(node->actor,new_layer);
			}
		}
	}

	return new_layer;
}

}

