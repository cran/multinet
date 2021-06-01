\name{multinet.communities}
\alias{multinet.communities}
\alias{abacus_ml}
\alias{clique_percolation_ml}
\alias{glouvain_ml}
\alias{flat_ec_ml}
\alias{flat_nw_ml}
\alias{infomap_ml}
\alias{mdlp_ml}
\alias{get_community_list_ml}
\alias{modularity_ml}
\alias{nmi_ml}
\alias{omega_index_ml}
\title{
Community detection algorithms and evaluation functions
}
\description{
Various algorithms to compute communities in multiplex networks, based on flattening (flat_ec, weighted, and flat_wc, unweighted), frequent itemset mining (abacus), adjacent cliques (clique percolation), modularity optimization (generalized louvain), random walks (infomap) and label propagation (mdlp). glouvain2_ml is a more efficient implementation of the original glouvain_ml, no longer based on matrices: it is equivalent to glouvain_ml with gamma set by default to 1.0 (apart from undeterministic behaviour: individual executions are not guaranteed to return the same result). get_community_list_ml is a commodity function translating the result of these algorithms into a list of vertex identifiers, and is internally used by the plotting function.

There are also algorithms to evaluate the resulting communities: generalized modularity (as optimized by
glouvain) and normalized mutual information (nmi_ml) and omega index (omega_index_ml) to compare
respectively partitioning and general communities. Please consider that both comparison functions use
the number of vertices in the network to make a computation, so the absence of actors from some layers
would change their result.
}
\usage{
abacus_ml(n, min.actors=3, min.layers=1)
flat_ec_ml(n)
flat_nw_ml(n)
clique_percolation_ml(n, k=3, m=1)
glouvain_ml(n, gamma=1, omega=1)
infomap_ml(n, overlapping=FALSE, directed=FALSE, self.links=TRUE)
mdlp_ml(n)

modularity_ml(n, comm.struct, gamma=1, omega=1)
nmi_ml(n, com1, com2)
omega_index_ml(n, com1, com2)
get_community_list_ml(comm.struct, n)
}
\arguments{
\item{n}{A multilayer network.}
\item{min.actors}{Minimum number of actors to form a community.}
\item{min.layers}{Minimum number of times two actors must be in the same single-layer community to be considered in the same multi-layer community.}
\item{k}{Minimum number of actors in a clique. Must be at least 3.}
\item{m}{Minimum number of common layers in a clique.}
\item{gamma}{Resolution parameter for modularity in the generalized louvain method.}
\item{omega}{Inter-layer weight parameter in the generalized louvain method.}
\item{overlapping}{Specifies if overlapping clusters can be returned.}
\item{directed}{Specifies whether the edges should be considered as directed.}
\item{self.links}{Specifies whether self links should be considered or not.}
\item{comm.struct}{The result of a community detection method.}
\item{com1}{The result of a community detection method.}
\item{com2}{The result of a community detection method.}
}
\value{
All community detection algorithms return a data frame where each row contains actor name, layer name and community identifier.

The evaluation functions return a number between -1 and 1. For the comparison functions, 1 indicates
that the two community structures are equivalent. The maximum possible value of modularity is <= 1
and depends on the network, so modularity results should not be compared across different networks.
Also, notice that modularity is only defined for partitioning community structures.

\code{get_community_list_ml} transforms the output of a community detection function into a list by grouping all the nodes having the same community identifier and the same layer.
}
\references{
\itemize{
\item Berlingerio, Michele, Pinelli, Fabio, and Calabrese, Francesco (2013). ABACUS: frequent pAttern mining-BAsed Community discovery in mUltidimensional networkS. Data Mining and Knowledge Discovery, 27(3), 294-320. (for abacus_ml())
\item Afsarmanesh, Nazanin, and Magnani, Matteo (2018). Partial and overlapping community detection in multiplex social networks. Social informatics (for clique_percolation_ml())
\item Mucha, Peter J., Richardson, Thomas, Macon, Kevin, Porter, Mason A., and Onnela, Jukka-Pekka (2010). Community structure in time-dependent, multiscale, and multiplex networks. Science (New York, N.Y.), 328(5980), 876-8. Data Analysis, Statistics and Probability; Physics and Society. (for glouvain_ml())
\item Michele Berlingerio, Michele Coscia, and Fosca Giannotti. Finding and characterizing communities in multidimensional networks. In International Conference on Advances in Social Networks Analysis and Mining (ASONAM), pages 490-494. IEEE Computer Society Washington, DC, USA, 2011  (for flat_ec_ml() and flat_nw_ml())
\item De Domenico, M., Lancichinetti, A., Arenas, A., and Rosvall, M. (2015)
Identifying Modular Flows on Multilayer Networks Reveals Highly Overlapping Organization in Interconnected Systems. PHYSICAL REVIEW X 5, 011027 (for infomap_ml())
\item Oualid Boutemine and Mohamed Bouguessa. Mining Community Structures in Multidimensional Networks. ACM Transactions on Knowledge Discovery from Data, 11(4):1-36, 2017 (for mdlp_ml())
}
}
\seealso{\link{multinet.plotting}}
\examples{
net <- ml_florentine()
abacus_ml(net)
flat_ec_ml(net)
flat_nw_ml(net)
clique_percolation_ml(net)
glouvain_ml(net)
infomap_ml(net)
mdlp_ml(net)

# evaluation

c1 <- glouvain_ml(net)
modularity_ml(net, c1)

c2 <- flat_ec_ml(net)
nmi_ml(net, c1, c2)

c3 <- abacus_ml(net)
omega_index_ml(net, c1, c2)
}
