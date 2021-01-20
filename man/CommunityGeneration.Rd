\name{multinet.community.generation}
\alias{multinet.community.generation}
\alias{generate_communities_ml}
\title{
Generation of multilayer networks with a predefined community structure
}
\description{
The generate_communities_ml function generates a simple community structure and a corresponding
network with edges sampled according to that structure. Four simple models are available at the
moment, all generating communities of equal size. In pillar community structures each actor belongs to
the same community on all layers, while in semipillar community structures the communities in one
layer are different from the other layers. In partitioning community structures each vertex belongs
to one community, while in overlapping community structures some vertices belong to multiple
communities. The four mode are: PEP (pillar partitioning), PEO (pillar overlapping),
SEP (semipillar partitioning), SEO (semipillar overlapping).
}
\usage{
generate_communities_ml(type, num.actors, num.layers, num.communities, overlap=0,
    pr.internal=.4, pr.external=.01)
}
\arguments{
\item{type}{Type of community structure: pep, peo, sep or seo.}
\item{num.actors}{The number of actors in the generated network.}
\item{num.layers}{The number of layers in the generated network.}
\item{num.communities}{The number of communities in the generated network.}
\item{overlap}{Number of actors at the end of one community to be also included in the following community.}
\item{pr.internal}{A vector with the probability of adjacency for two vertices on the same layer
and community (either a single value, or one value for each layer).}
\item{pr.external}{A vector with the probability of adjacency for two vertices on the same layer
    but different communities (either a single value, or one value for each layer).}
}
\value{
\code{generate_communities_ml} returns a list with two elements: a multilayer network and the
community structure used to generate it.
}
\seealso{
\link{multinet.generation}, \link{multinet.IO}
}
\references{
Matteo Magnani, Obaida Hanteer, Roberto Interdonato, Luca Rossi, and Andrea Tagarelli (2021).
Community Detection in Multiplex Networks. ACM Computing Surveys.
}
\examples{
# we generate a network with three layers and 10 communities.
generate_communities_ml("pep", 50, 3, 10)
# the following command also adds some overlapping (1 actor shared between consecutive communities).
generate_communities_ml("pep", 50, 3, 10, 1)
# the following command adds 10 different communities on the last layer.
generate_communities_ml("sep", 50, 3, 20)
# here we add some noise and make communities less dense than the defaults.
generate_communities_ml("pep", 50, 3, 10, pr.internal=.3, pr.external=.05)
}
