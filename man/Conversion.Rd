\name{Conversion}
\alias{Conversion}
\alias{as.igraph.Rcpp_RMLNetwork}
\alias{as.list.Rcpp_RMLNetwork}
\title{
Conversion to simple or multi graphs
}
\description{
Constructs a single graph resulting from merging one or more layers of the network, in addition to a graph for each layer if the list function is called, and converts it/them into iGraph objects.
}
\usage{
\method{as.igraph}{Rcpp_RMLNetwork}(x, layers = NULL, merge.actors=TRUE, all.actors=FALSE, \dots)
\method{as.list}{Rcpp_RMLNetwork}(x, \dots)
}
\arguments{
\item{x}{a multilayer network.}
\item{layers}{a vector of names of layers. If NULL, all layers are included in the result.}
\item{merge.actors}{whether the nodes corresponding to each actor should be merged into a single node (true) or kept separated (false).}
\item{all.actors}{whether all actors in the multilayer network should be included in the result (true) or only those present in at least one of the input layers (false).}
\item{\dots}{additional arguments. None currently.}
}
\value{
An object (as.igraph) or a list of objects (as.igraph.list.ml) of class iGraph.
}
\examples{
net <- ml.aucs()
# using the default merge.actors=TRUE we create a multigraph,
# where each actor corresponds to a node in the result
multigraph <- as.igraph(net)
# this is a simple graph corresponding to the facebook layer
facebook1 <- as.igraph(net, "facebook")
# this includes also the actors without a facebook account
facebook2 <- as.igraph(net, "facebook", all.actors=TRUE)
# two layers are converted to an igraph object, where two
# nodes are used for each actor: one corresponding to the
# node on facebook, one to the node on lunch
f_l_net <- as.igraph(net, c("facebook","lunch"),
    merge.actors=FALSE)
    
# a list of igraph objects, one for each layer, for layer-by-layer analysis
as.list(net)
}
