\name{Transformation}
\alias{Transformation}
\alias{flatten.ml}
\title{
Functions to merge multiple layers into one: flattening
}
\description{
These functions merge multiple layers into one. The new layer is added to the network. If the input layers are no longer necessary, they must be explicitely erased.

\code{flatten.ml} adds a new layer with the actors in the input layers and an edge between A and B if they are connected in any of the merged layers.
}
\usage{
flatten.ml(mlnetwork, new.layer="flattening", layers=character(0),
  method="weighted", force.directed=FALSE, all.actors=FALSE)
}
\arguments{
\item{mlnetwork}{A multilayer network.}
\item{new.layer}{Name of the new layer.}
\item{layers}{An array of layers belonging to the network.}
\item{method}{This argument can take values "weighted" or "or". "weighted" adds an attribute to the new edges with the number of layers where the two actors are connected}
\item{force.directed}{The new layer is set as directed. If this is false, the new layer is set as directed if at least one of the merged layers is directed.}
\item{all.actors}{If TRUE, then all the actors are included in the new layer, even if they are not present in any of the merged layers.}

}
\examples{
net <- ml.aucs()
# A new layer is added to the network, with a flattening of all the other layers
flatten.ml(net, layers=layers.ml(net))
}
