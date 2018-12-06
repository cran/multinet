#include <Rcpp.h>
#include "r_functions.h"

using namespace Rcpp;
//using namespace mlnet;

//namespace mlnet {
//class MLNetwork;
//}

//RCPP_EXPOSED_CLASS_NODECL(MLNetwork)
RCPP_EXPOSED_CLASS(RMLNetwork)
RCPP_EXPOSED_CLASS(REvolutionModel)


void
show_multilayer_network(
    RMLNetwork *mnet
)
{
    Rcpp::Rcout << mnet->get_mlnet()->summary() << std::endl;
}

void
show_evolution_model(
    REvolutionModel *evm
)
{
    Rcpp::Rcout << evm->description() << std::endl;
}

RCPP_MODULE(multinet)
{

    class_<RMLNetwork>("RMLNetwork")
    .method("name", &RMLNetwork::name, "name of the multilayer network" )
    .method("show", &show_multilayer_network);

    class_<REvolutionModel>("REvolutionModel")
    .method("show", &show_evolution_model);

    /******************************/
    /* CREATION AND STORAGE       */
    /******************************/

    function("ml.empty", &emptyMultilayer, List::create( _["name"]="unnamed"), "Creates an empty multilayer network");

    // OTHER FUNCTIONS TO CREATE MLNETWORKS FROM THE LITERATURE (E.G., AUCS) ARE DEFINED IN functions.R

    // Generation
    function("evolution.pa.ml",
             &ba_evolution_model,
             List::create(
                 _["m0"],
                 _["m"]),
             "Creates a layer evolutionary model based on preferential attachment");

    function("evolution.er.ml",
             &er_evolution_model,
             List::create( _["n"]),
             "Creates a layer evolutionary model based on random edge creation, as in the ER model"
            );

    function("grow.ml",
             &growMultiplex,
             List::create(
                 _["num.actors"],
                 _["num.steps"],
                 _["models"],
                 _["pr.internal"],
                 _["pr.external"],
                 _["dependency"]),
             "Grows a multiplex network"
            );

    // IO

    function("read.ml", &readMultilayer, List::create( _["file"], _["name"]="unnamed", _["sep"]=',', _["aligned"]=false), "Reads a multilayer network from a file");

    function("write.ml", &writeMultilayer, List::create( _["mlnetwork"], _["file"], _["format"]="multilayer", _["layers"]=CharacterVector(), _["sep"]=',', _["merge.actors"]=true, _["all.actors"]=false), "Writes a multilayer network to a file");



    /**************************************/
    /* INFORMATION ON MULTILAYER NETWORKS */
    /**************************************/

    function("layers.ml",
             &layers,
             List::create( _["mlnetwork"]),
             "Returns the list of layers in the input multilayer network");

    function("actors.ml",
             &actors,
             List::create( _["mlnetwork"], _["layers"]=CharacterVector()),
             "Returns the list of actors present in the input layers, or in the whole multilayer network if no layers are specified");

    function("vertices.ml",
             &vertices,
             List::create( _["mlnetwork"], _["layers"]=CharacterVector()),
             "Returns the list of vertices in the input layers, or in the whole multilayer network if no layers are specified");

    function("edges.ml",
             &edges,
             List::create( _["mlnetwork"], _["layers1"]=CharacterVector(), _["layers2"]=CharacterVector()),
             "Returns the list of edges among vertices in the input layers (if only one set of layers is specified), or from the first set of input layers to the second set of input layers, or in the whole multilayer network if no layers are specified");

    function("edges.idx.ml",
             &edges_idx,
             List::create( _["mlnetwork"]),
             "Returns the list of edges, where vertex ids are used instead of vertex names");

    function("num.layers.ml",
             &numLayers,
             List::create( _["mlnetwork"]),
             "Returns the number of layers in the input mlnetwork");
    function("num.actors.ml",
             &numActors,
             List::create( _["mlnetwork"], _["layers"]=CharacterVector()),
             "Returns the number of actors in the set of input layers, or in the whole mlnetwork if no layers are specified");
    function("num.vertices.ml",
             &numNodes,
             List::create( _["mlnetwork"], _["layers"]=CharacterVector()),
             "Returns the number of vertices in the set of input layers, or in the whole mlnetwork if no layers are specified");
    function("num.edges.ml",
             &numEdges,
             List::create( _["mlnetwork"], _["layers1"]=CharacterVector(), _["layers2"]=CharacterVector()),
             "Returns the number of edges in the set of input layers, or in the whole mlnetwork if no layers are specified");

    function("is.directed.ml",
             &isDirected,
             List::create( _["mlnetwork"], _["layers1"]=CharacterVector(), _["layers2"]=CharacterVector()),
             "Returns a logical vector indicating for each pair of layers if it is directed or not");

    // NAVIGATION

    function("neighbors.ml", &actor_neighbors, List::create( _["mlnetwork"], _["actor"], _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the neighbors of a global identity on the set of input layers");
    function("xneighbors.ml", &actor_xneighbors, List::create( _["mlnetwork"], _["actor"], _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the exclusive neighbors of a global identity on the set of input layers");


    // NETWORK MANIPULATION

    function("add.layers.ml", &addLayers, List::create( _["mlnetwork"], _["layers"], _["directed"]=false), "Adds one or more layers to a multilayer network");
    function("add.actors.ml", &addActors, List::create( _["mlnetwork"], _["actors"]), "Adds one or more actors to a multilayer network");
    function("add.vertices.ml", &addNodes, List::create( _["mlnetwork"], _["vertices"]), "Adds one or more vertices to a layer of a multilayer network");
    function("add.edges.ml", &addEdges, List::create( _["mlnetwork"], _["edges"]), "Adds one or more edges to a multilayer network - each edge is a quadruple [actor,layer,actor,layer]");

    function("set.directed.ml", &setDirected, List::create( _["mlnetwork"], _["directionalities"]), "Set the directionality of one or more pairs of layers");

    function("delete.layers.ml", &deleteLayers, List::create( _["mlnetwork"], _["layers"]), "Deletes one or more layers from a multilayer network");
    function("delete.actors.ml", &deleteActors, List::create( _["mlnetwork"], _["actors"]), "Deletes one or more actors from a multilayer network");


    function("delete.vertices.ml", &deleteNodes, List::create( _["mlnetwork"], _["vertices"]), "Deletes one or more vertices from a layer of a multilayer network");


    function("delete.edges.ml", &deleteEdges, List::create( _["mlnetwork"], _["edges"]), "Deletes one or more edges from a multilayer network - each edge is a quadruple [actor,layer,actor,layer]");


    // ATTRIBUTE HANDLING

    function("add.attributes.ml", &newAttributes, List::create( _["mlnetwork"], _["attributes"], _["type"]="string", _["target"]="actor", _["layer"]="", _["layer1"]="", _["layer2"]=""), "Creates a new attribute so that values can be associated to actors, layers, vertices or edges");
    function("attributes.ml", &getAttributes, List::create( _["mlnetwork"], _["target"]="actor"), "Returns the list of attributes defined for the input multilayer network");

    function("get.values.ml", &getValues, List::create( _["mlnetwork"], _["attribute"], _["actors"]=CharacterVector(), _["vertices"]=CharacterMatrix(0,0), _["edges"]=CharacterMatrix(0,0)), "Returns the value of an attribute on the specified actors, layers, vertices or edges");
    function("set.values.ml", &setValues, List::create( _["mlnetwork"], _["attribute"], _["actors"]=CharacterVector(), _["vertices"]=CharacterMatrix(0,0), _["edges"]=CharacterMatrix(0,0), _["values"]), "Sets the value of an attribute for the specified actors/vertexes/edges");



    // TRANSFORMATION

    function("flatten.ml", &flatten, List::create( _["mlnetwork"], _["new.layer"]="flattening", _["layers"]=CharacterVector(), _["method"] = "weighted", _["force.directed"] = false, _["all.actors"] = false), "Adds a new layer with the actors in the input layers and an edge between A and B if they are connected in any of the merged layers");
    /*
     function("project.ml", &project, List::create( _["mlnetwork"], _["new.layer"]="projection", _["layer1"], _["layer2"], _["method"] = "clique"), "Adds a new layer with the actors in layer 1, and edges between actors A and B if they are connected to a common object in layer 2");

    // MEASURES
    */
    function("degree.ml", &degree_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the degree of each actor");

    function("degree.deviation.ml", &degree_deviation_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the standard deviation of the degree of each actor on the specified layers");
    /*
    function("occupation.ml", &occupation_ml, List::create( _["mlnetwork"], _["transitions"], _["teleportation"]=.2, _["steps"]=0), "Returns the occupation centrality value of each actor");
     */
    function("neighborhood.ml", &neighborhood_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the neighborhood of each actor");
    function("xneighborhood.ml", &xneighborhood_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the exclusive neighborhood of each actor");

    function("connective.redundancy.ml", &connective_redundancy_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the connective redundancy of each actor");
    function("relevance.ml", &relevance_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the layer relevance of each actor");
    function("xrelevance.ml", &xrelevance_ml, List::create( _["mlnetwork"], _["actors"]=CharacterVector(), _["layers"]=CharacterVector(), _["mode"] = "all"), "Returns the exclusive layer relevance of each actor");

    function("layer.summary.ml", &summary_ml, List::create( _["mlnetwork"], _["layer"], _["method"] = "entropy.degree", _["mode"] = "all"), "Computes a summary of the input layer");

    function("layer.comparison.ml", &comparison_ml, List::create( _["mlnetwork"], _["layers"]=CharacterVector(), _["method"] = "jaccard.edges", _["mode"] = "all", _["K"] = 0), "Computes the similarity between the input layers");


    function("distance.ml", &distance_ml, List::create( _["mlnetwork"], _["from"], _["to"]=CharacterVector(), _["method"] = "multiplex"), "Computes the distance between two actors");


    // CLUSTERING
    function("clique.percolation.ml", &cliquepercolation_ml, List::create( _["mlnetwork"], _["k"]=3, _["m"]=1), "Extension of the clique percolation method");

    function("glouvain.ml", &glouvain_ml, List::create( _["mlnetwork"], _["gamma"]=1, _["omega"]=1, _["limit"]=0), "Extension of the louvain method");
    function("abacus.ml", &abacus_ml, List::create( _["mlnetwork"], _["min.actors"]=3, _["min.layers"]=1), "Community extraction based on frequent itemset mining");
    function("infomap.ml",
             &infomap_ml,
             List::create(
                 _["mlnetwork"],
                 _["overlapping"]=false,
                 _["directed"]=false,
                 _["self.links"]=true
             ),
             "Community extraction based on the flow equation");

    /*
    function("lart.ml", &lart_ml, List::create( _["mlnetwork"], _["t"]=-1, _["eps"]=1, _["gamma"]=1), "Community extraction based on locally adaptive random walks");


    // FOR VISUALIZATION
     */
    function("layout.multiforce.ml", &multiforce_ml, List::create( _["mlnetwork"], _["w_in"]=1, _["w_inter"]=1, _["gravity"]=0, _["iterations"]=100), "Multiforce method: computes vertex coordinates");

    function("layout.circular.ml", &circular_ml, List::create( _["mlnetwork"] ), "Circular method: computes vertex coordinates arranging actors on a circle");

    // plotting function defined in functions.R


    function("get.community.list.ml", &to_list, List::create( _["comm.struct"], _["mlnetwork"]), "Converts a community structure (data frame) into a list of communities, layer by layer");

    /*

    //function("sir.ml", &sir_ml, List::create( _["mlnetwork"], _["beta"], _["tau"], _["num_iterations"] = 1000), "Executes a SIR spreading process, returning the number of vertices in each status at each iteration");

     */

}


