\name{Network management: attributes}
\alias{Network management: attributes}
\alias{add.attributes.ml}
\alias{attributes.ml}
\alias{set.values.ml}
\alias{get.values.ml}

\alias{new.attributes.ml}
\alias{list.attributes.ml}
\title{
Managing attributes
}
\description{
These functions are used to add values to the network components and retrieve them. 

The functions \code{new.attributes.ml} and \code{list.attributes.ml} are deprecated in the current version of the library.
}
\usage{
add.attributes.ml(mlnetwork, attributes, type="string", target="actor", 
	layer="", layer1="", layer2="")
attributes.ml(mlnetwork, target="actor")
get.values.ml(mlnetwork, attribute, actors=character(0), 
	vertices =character(0), edges=character(0))
set.values.ml(mlnetwork, attribute, actors=character(0), 
	vertices=character(0), edges=character(0), values)
}
\arguments{
\item{mlnetwork}{A multilayer network.}
\item{attributes}{Name(s) of the attributes to be created.}
\item{target}{Can be "actor" (attributes attached to actors), "vertex" (attributes attached to vertices) or "edge" (attributes attached to edges). Layer attributes are not available in this version.}
\item{type}{Can be "string" or "numeric".}
\item{layer}{This can be specified only for targets "vertex" (so that the attribute exists only for the vertices in that layer) or "edge" (in which case the attribute applies to intra-layer edges in that layer).}
\item{layer1}{This can be specified only for target "edge", together with layer2, so that the attribute applies to inter-layer edges from layer1 to layer2. If layer1 and layer2 are specified, layer should not.}
\item{layer2}{See layer1.}
\item{attribute}{The name of the attribute to be updated.}
\item{actors}{A vector of actor names. If this is specified, layers, vertices and edges should not.}
\item{vertices}{A dataframe of vertices to be updated. The first column specifies actor names, the second layer names. If this is specified, actors, layers and edges should not.}
\item{edges}{A dataframe containing the vertices to be connected. The four columns must contain, in this order: actor1 name, layer1 name, actor2 name, layer2 name. If this is specified, actors, layers and vertices should not.}
\item{values}{A vector of values to be set for the corresponding actors, layers, vertices or edges.}
}
\value{
\code{attributes.ml} returns a data frame with columns: "name", and "type". If vertex attributes are listed, an additional "layer" column is used. If edge attributes are listed, two columns "layer1" and "layer2" are included.
\code{get.values.ml} returns a data frame with the values for the requested objects.
}
\examples{
net <- ml.aucs()
attributes.ml(net)
# actor attributes, of string type (default)
add.attributes.ml(net,c("name","surname"))
# a numeric attribute associated to the layers (not available in this version)
# add.attributes.ml(net,"num vertices",type="numeric",target="layer") 
# attributes for vertices on the facebook layer
add.attributes.ml(net,"username",type="string",target="vertex",layer="facebook")
# attributes for edges on the work layer
add.attributes.ml(net,"strength",type="numeric",target="edge",layer="work")
# listing the attributes
attributes.ml(net)
# attributes.ml(net,"layer") # not available in this version
attributes.ml(net,"vertex")
attributes.ml(net,"edge")
# setting some values for the newly created attributes
set.values.ml(net,"name",actors=c("U54","U139"),values=c("John","Johanna"))
e <- data.frame(
    c("U139","U139"),
    c("work","work"),
    c("U71","U97"),
    c("work","work"))
set.values.ml(net,"strength",edges=e,values=.47)
# getting the values back
get.values.ml(net,"name",actors=c("U139"))
get.values.ml(net,"strength",edges=e)
# setting attributes based on network properties: create a "degree"
# attribute and set its value to the degree of each actor
actors.ml(net) -> a
layers.ml(net) -> l
degree.ml(net,actors=a,layers=l,mode="all") -> d
add.attributes.ml(net,target="actor",type="numeric",attributes="degree")
set.values.ml(net,attribute="degree",actors=a,values=d)
get.values.ml(net,attribute="degree",actors="U54")
# select actors based on attribute values (e.g., with degree greater than 40)
get.values.ml(net,attribute="degree",actors=a) -> degrees
a[degrees>40]
# list all the attributes again
attributes.ml(net)
}
