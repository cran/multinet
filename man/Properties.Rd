\name{Network management: properties}
\alias{Network management: properties}
\alias{actors.ml}
\alias{layers.ml}
\alias{vertices.ml}
\alias{edges.ml}
\alias{edges.idx.ml}
\alias{num.actors.ml}
\alias{num.layers.ml}
\alias{num.vertices.ml}
\alias{num.edges.ml}


\alias{nodes.ml}
\alias{num.nodes.ml}
\title{
Listing network properties
}
\description{
These functions are used to list basic information about the components of a multilayer network (actors, layers, vertices and edges). 

The functions \code{nodes.ml} and \code{num.nodes.ml} are deprecated in the current version of the library. Vertex/vertices are now
preferentially used over node/nodes.
}
\usage{
layers.ml(mlnetwork)
actors.ml(mlnetwork, layers=character(0))
vertices.ml(mlnetwork, layers=character(0))
edges.ml(mlnetwork, layers1=character(0), layers2=character(0))
edges.idx.ml(mlnetwork)

num.layers.ml(mlnetwork)
num.actors.ml(mlnetwork, layers=character(0))
num.vertices.ml(mlnetwork, layers=character(0))
num.edges.ml(mlnetwork, layers1=character(0), layers2=character(0))
}
\arguments{
\item{mlnetwork}{A multilayer network.}
\item{layers}{An array of names of layers belonging to the network. Only the actors/vertices in these layers are returned. If the array is empty, all the vertices in the network are returned. Notice that this may not correspond to the list of actors: there can be actors that are not present in any layer. These would be returned only using the \code{actors.ml} function.}
\item{layers1}{The layer(s) from where the edges to be extracted start. If an empty list of layers is passed (default), all the layers are considered.}
\item{layers2}{The layer(s) where the edges to be extracted end. If an empty list of layers is passed (default), the ending layers are set as equal to those in parameter layer1.}
}
\value{
\code{actors.ml} and \code{layers.ml} return an array of respectively actor and layer names. \code{vertices.ml} returns a data frame where each row contains the name of the actor corresponding to that vertex and the layer of the vertex. \code{edges.ml} returns a data frame where each row contains two actor names (i.e., an edge), the name of the two layers connected by the edge (which can be the same layer if it is an intra-layer edge) and the type of edge (directed/undirected).

    \code{edges.idx.ml} returns the index of the vertex as returned by the \code{vertices.ml} function instead of its name - this is used internally by the plotting function.

The functions num.* compute the number of components of the requested type. If the number of actors is requested without specifying any layer, the total number of actors is returned, including those not present in any layer.}
\seealso{
\link{Network management: updates}, \link{Network management: edge directionality}
}
\examples{
net <- ml.aucs()
actors.ml(net)
layers.ml(net)
vertices.ml(net)
# only vertices in the "facebook" layer
vertices.ml(net,"facebook")
# all edges
edges.ml(net)
# Only edges inside the "lunch" layer
edges.ml(net,"lunch","lunch")
# Does the same as in the previous line
edges.ml(net,"lunch")
# Returns an empty  data frame, because there are no edges from the
# "lunch" layer to the "facebook" layer
edges.ml(net,"lunch","facebook")

num.actors.ml(net)
num.layers.ml(net)
num.vertices.ml(net)
# Only vertices in the "facebook" layer are counted
num.vertices.ml(net,"facebook")
num.edges.ml(net)
# Only edges inside the "lunch" layer are counted
num.edges.ml(net,"lunch","lunch")
# Does the same as in the previous line
num.edges.ml(net,"lunch")
# Returns 0, because there are no edges from the "lunch" layer to
# the "facebook" layer
num.edges.ml(net,"lunch","facebook")
}
