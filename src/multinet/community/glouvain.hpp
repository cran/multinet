#ifndef UU_MNET_COMMUNITY_GLOUVAIN_H_
#define UU_MNET_COMMUNITY_GLOUVAIN_H_


#include "community/CommunityStructure.hpp"
#include "community/VertexLayerCommunity.hpp"
#include "mnet/community/cutils.hpp"
#include "Eigen/Sparse"
#include "Eigen/Dense"
#include <list>
#include <limits>

namespace uu {
namespace net {

class metanet;

template <typename M, typename G>
std::unique_ptr<CommunityStructure<VertexLayerCommunity<const G>>>
generalized_louvain(
    const M* mnet,
    double gamma,
    double omega,
    size_t limit
);

class glouvain
{

  public:

    /*
    	Use : glouvain g;
    		 g.get_ml_community(mnet, move, gamma, omega, limit);

    	Pre:
    		mnet is the multilayer network
    		move is either "move" that places nodes into communities that give the highest modularity gain or "moverandw" which places the nodes into communities at random proportional to their modularity gain (higher gain, higher chance of being selected into communituy)
    		gamma is the resolution parameter
    		omega is the inter-layer coupling weight parameter
    		limit is the number of modularity scores for the actors to hold in memory at once.
    			The algorithm is faster if this number is high but consumes much more memory
    	Post:
    		nodes in mnet are assigned into communities

    	Data invariant:
    		Generalized Louvain is a multiplex community detector based on the Louvain community detection
    		method for single layer networks. This implementation is based from http://netwiki.amath.unc.edu/GenLouvain/GenLouvain
    */
    template <typename M, typename G>
    std::unique_ptr<CommunityStructure<VertexLayerCommunity<const G>>>
    fit(
        const M* mnet,
        const std::string& m,
        double gamma,
        double omega,
        size_t limit
    );

    /* Map indexes of b to values of a:
    https://stackoverflow.com/questions/5691218/matlab-mapping-values-to-index-of-other-array*/
    std::vector<int>
    mapV2I(
        const std::vector<int>& a,
        const std::vector<int>& b
    ) const;

    /*
    	Use: double q = Q(M, y, twoum)
    	Pre: M is the modularity matrix
    		 y is the node partitioning vector
    		 twoum contains the total amount of edges in network
    	Post: Calculate the modularity Q of partitioning vector y in matrix M
    */
    double
    Q(
        const Eigen::SparseMatrix<double>& M,
        const std::vector<int>& y,
        double twoum
    ) const;

    /* Same as Q but does not use the full modularity matrix. Instead it uses the iterative version
     for really large networks */
    double
    Q_handle(
        metanet& meta,
        const std::vector<int>& y,
        double twoum
    );

    /*
    	Use: Eigen::SparseMatrix<double> M = metanetwork(B, S2)
    	Pre: M is the modularity matrix
    		 S2 is the collapsed node group assignment
    	Post: M is a new modularity network, that contains collapsed nodes of B
    */
    Eigen::SparseMatrix<double>
    metanetwork(
        const Eigen::SparseMatrix<double>& B,
        const std::vector<int>& S2
    ) const;

};

struct unique_group_map
{

    /* map for unique possible moves */

    unique_group_map();
    std::vector<bool> ismember;
    std::vector<int> members;
    typedef std::vector<int>::iterator iterator;


    //implement unique_group_map (quick membership check and insertion of elements, quick iteration over members, unordered
    unique_group_map(
        size_t n
    ) : ismember(std::vector<bool>(n,false)) {}

    bool
    count(int i)
    {
        return ismember[i];
    }

    void
    insert(int i)
    {
        if (!ismember[i])
        {
            ismember[i] = true;
            members.push_back(i);
        }
    }

    unique_group_map::iterator
    begin()
    {
        return members.begin();
    }
    unique_group_map::iterator
    end()
    {
        return members.end();
    }

};

#define NUM_TOL 1e-100

typedef std::unordered_map<int, double> map_type;

//map for unique possible moves
typedef unique_group_map set_type;

typedef std::pair<std::vector<int>,std::vector<double>> move_list;

struct group_index
{

    group_index(
    )
        : n_nodes(0), n_groups(0) {}

    group_index(
        const std::vector<int>& v
    )
    {
        n_nodes = v.size();
        nodes = v;
        nodes_iterator.resize(n_nodes);
        n_groups = *max_element(nodes.begin(),nodes.end()) + 1;
        groups.resize(n_groups);

        for (size_t i = 0; i < n_nodes; i++)
        {
            groups[nodes[i]].push_back(i);
            nodes_iterator[i] = --groups[nodes[i]].end();
        }
    };

    Eigen::MatrixXd
    index(
        int group
    )
    {
        Eigen::MatrixXd r = Eigen::MatrixXd::Zero(groups[group].size(), 1);

        int i = 0;

        for (std::list<int>::iterator it=groups[group].begin(); it != groups[group].end(); it++)
        {
            r(i, 0) = *it;
            i++;
        }

        return r;
    }

    //move node to group
    void
    move(
        int node,
        int group
    )
    {
        //move node by splicing into list for new group
        groups[group].splice(groups[group].end(), groups[nodes[node]],nodes_iterator[node]);
        //update its group asignment
        nodes[node]=group;
    };

    size_t n_nodes;
    size_t n_groups;

    std::vector<int>
    toVector()
    {
        std::vector<int> v (n_nodes);
        std::vector<bool> track_move(n_nodes, true);
        size_t g_n = 0;

        std::list<int>::iterator it;

        for (size_t i = 0; i < n_nodes; i++)
        {
            if (track_move[i])
            {
                for (it=groups[nodes[i]].begin(); it != groups[nodes[i]].end(); it++)
                {
                    v[*it] = g_n;
                    track_move[*it] = false;
                }

                g_n++;
            }
        }

        return v;
    };

    std::vector<std::list<int>> groups; //the index of each node in a group is stored in a linked list

    std::vector<std::list<int>::iterator> nodes_iterator; //stores the position of the node in the list for the group it belongs to

    std::vector<int> nodes; //stores the group a node belongs to

};

set_type
possible_moves(
    group_index & g,
    int node,
    const Eigen::SparseMatrix<double>& mod
);

//calculates changes in modularity for sparse modularity matrix
map_type
mod_change(
    group_index & g,
    const Eigen::SparseMatrix<double>& mod,
    set_type & unique_groups,
    int current_node
);

//find moves that improve modularity
move_list
positive_moves(
    set_type & unique_groups,
    map_type & mod_c
);

//move best move
double
move(
    group_index & g,
    int node,
    const Eigen::SparseMatrix<double>& mod
);

//move to random group with probability proportional to increase in modularity
double
moverandw(
    group_index & g,
    int node,
    const Eigen::SparseMatrix<double>& mod
);


class metanet
{

  public:

    /*
    	Data invariant:
    		metanet is a datastructure that keeps track of visited nodes in really large networks.
    		The idea is to calculate the ng modularity of each node every iteration.
         Works only for undirected and unweighted networks.
    */

    metanet(
        const std::vector<Eigen::SparseMatrix<double>>& a,
        double gamma,
        double omega,
        bool ordered = false
    )
    {

        if (ordered)
        {
            AA = cutils::ordered_supraA(a, omega, false, false);
        }

        else
        {
            AA = cutils::supraA(a, omega, false, false);
        }

        K = supraK(a);
        kvec = cutils::sparse_sum(cutils::supraA(a, 0, false, false), 0);

        this->gamma = gamma;
        this->omega = gamma;
        this->N = a[0].rows();
    }


    Eigen::SparseMatrix<double>
    get(
        int index
    )
    {
        std::list<int> ind = nodes(index);

        for (int node: ind)
        {
            reduce(ng_handle(node));
        }

        return ret();
    }

    void
    assign(
        const std::vector<int>& v
    )
    {
        group = group_index(v);
        mod_reduced = std::vector<double>(group.n_groups, 0);
    }

    std::list<int>
    nodes(
        int index
    ) const
    {
        return group.groups.at(index);
    }

    void
    reduce(
        const Eigen::SparseMatrix<double>& mod
    )
    {
        for (int i = 0; i < mod.outerSize(); i++)
        {
            for (Eigen::SparseMatrix<double>::InnerIterator it(mod, i); it; ++it)
            {
                mod_reduced[group.nodes[it.row()]] += it.value();
            }
        }
    }

    Eigen::SparseMatrix<double>
    ret(
    )
    {
        Eigen::SparseMatrix<double> out(mod_reduced.size(), 1);
        std::vector<Eigen::Triplet<double>> tlist;
        tlist.reserve(mod_reduced.size());

        for (size_t i = 0; i < mod_reduced.size(); i++)
        {
            tlist.push_back(Eigen::Triplet<double>(i, 0, mod_reduced[i]));
        }

        out.setFromTriplets(tlist.begin(), tlist.end());

        for (std::vector<double>::iterator it=mod_reduced.begin(); it!=mod_reduced.end(); ++it)
        {
            *it=0;
        }

        return out;
    }


  private:
    group_index group;

    std::vector<double> mod_reduced = std::vector<double>();

    Eigen::SparseMatrix<double> AA, K;

    double gamma, omega;

    int N;

    Eigen::MatrixXd kvec;


    Eigen::SparseMatrix<double>
    ng_handle(
        int index
    ) const
    {
        Eigen::SparseMatrix<double> Acol = AA.col(index);
        Eigen::SparseMatrix<double> Kcol = K.col(index / N);

        std::vector<Eigen::Triplet<double>> tlist;
        tlist.reserve(Kcol.nonZeros());

        for (int i = 0; i < Kcol.outerSize(); i++)
        {
            for (Eigen::SparseMatrix<double>::InnerIterator it(Kcol, i); it; ++it)
            {
                tlist.push_back(
                    Eigen::Triplet<double>(it.row(), it.col(), it.value() * gamma * kvec(index, 0)));
            }
        }

        Kcol.setFromTriplets(tlist.begin(), tlist.end());
        return Acol - Kcol;
    }

    Eigen::SparseMatrix<double>
    supraK(
        const std::vector<Eigen::SparseMatrix<double>>& a
    )
    {
        Eigen::SparseMatrix<double> K = Eigen::SparseMatrix<double>(a[0].rows() * a.size(), a.size());
        std::vector<Eigen::Triplet<double>> tlist;
        tlist.reserve(a[0].rows() * a.size());

        for (size_t i = 0; i < a.size(); i++)
        {
            Eigen::MatrixXd k = cutils::sparse_sum(a[i], 0);
            k = k.array() / k.array().sum();

            for (int j = 0; j < k.rows(); j++)
            {
                tlist.push_back(Eigen::Triplet<double>(i * k.rows() + j, i, k(j, 0)));
            }
        }

        K.setFromTriplets(tlist.begin(), tlist.end());
        return K;
    }
};


template <typename M, typename G>
std::unique_ptr<CommunityStructure<VertexLayerCommunity<const G>>>
generalized_louvain(
    const M* mnet,
    double gamma,
    double omega,
    size_t limit
)
{
    glouvain g;
    return g.fit<M,G>(mnet, "move", gamma, omega, limit);
}


template <typename M, typename G>
std::unique_ptr<CommunityStructure<VertexLayerCommunity<const G>>>
glouvain::fit(
    const M* mnet,
    const std::string& m,
    double gamma,
    double omega,
    size_t limit
)
{
    // @todo check UNDIRECTED
    // @todo check ORDERED
    bool ordered = mnet->is_ordered();

    double (*move_func)(group_index &, int, const Eigen::SparseMatrix<double>&);

    if ("moverandw" == m)
    {
        move_func = &moverandw;
    }

    else
    {
        move_func = &move;
    }

    std::vector<int> S(mnet->vertices()->size() * mnet->layers()->size());
    std::iota(S.begin(), S.end(), 0);

    std::vector<int> y, Sb;
    y = S;

    double eps = 2.2204e-12;
    double dtot = 0;
    Eigen::SparseMatrix<double> B, M_;

    double twoum = 0;

    if (limit < y.size())
    {
        std::vector<Eigen::SparseMatrix<double>> A = to_adjacency_matrices(mnet);

        for (auto m: A)
        {
            twoum += m.nonZeros();
        }

        twoum = twoum + (A[0].rows() * A.size() * (A.size() - 1) * omega);

        metanet meta(A, gamma, omega, ordered);
        meta.assign(S);

        while (Sb != S)
        {
            Sb = S;
            std::vector<int> yb;

            while (yb != y)
            {
                double dstep = 1.0;

                while (yb != y && (dstep/dtot > 2 * eps) && (dstep > 10 * eps))
                {
                    yb = y;
                    dstep = 0;

                    group_index g(y);

                    for (int i: cutils::range(meta.get(0).rows(), true))
                    {
                        double di = move_func(g, i, meta.get(i));
                        dstep = dstep + di;
                    }

                    dtot = dtot + dstep;
                    y = g.toVector();
                }

                yb = y;
            }

            S = mapV2I(y, S);
            y = cutils::unique(S);

            if (Sb == S)
            {
                std::vector<unsigned int> partition(S.begin(), S.end());
                return to_community_structure<M,G>(mnet, partition);
            }

            meta.assign(S);

            if (y.size() < limit)
            {
                std::vector<Eigen::Triplet<double>> tlist;
                Eigen::SparseMatrix<double> t = meta.get(0);
                tlist.reserve(t.nonZeros() * y.size());

                for (int i = 0; i < (int) y.size(); i++)
                {
                    Eigen::SparseMatrix<double> tmp = meta.get(i);

                    for (int j = 0; j < tmp.outerSize(); ++j)
                    {
                        for (Eigen::SparseMatrix<double>::InnerIterator it(tmp, j); it; ++it)
                        {
                            tlist.push_back(Eigen::Triplet<double>(it.row(), i, it.value()));
                        }
                    }
                }

                B = Eigen::SparseMatrix<double>(t.rows(), y.size());
                B.setFromTriplets(tlist.begin(), tlist.end());
                M_ = B;
                break;
            }
        }
    }

    else
    {
        B = modularity_matrix(twoum, to_adjacency_matrices(mnet), gamma, omega, ordered);
        M_ = B;
    }

    std::vector<int> S2(B.rows());
    std::iota(S2.begin(), S2.end(), 0);
    Sb.clear();

    while (Sb != S2)
    {
        Sb = S2;
        std::vector<int> yb;

        while (yb != y)
        {
            double dstep = 1.0;

            while (yb != y && (dstep/dtot > 2 * eps) && (dstep > 10 * eps))
            {
                yb = y;
                dstep = 0;

                group_index g(y);

                for (int i: cutils::range(M_.cols(), true))
                {
                    double di = move_func(g, i, M_.col(i));
                    dstep = dstep + di;
                }

                dtot = dtot + dstep;
                y = g.toVector();
            }

            yb = y;
        }

        S = mapV2I(y, S);
        S2 = mapV2I(y, S2);

        if (Sb == S2)
        {
            break;
        }

        M_ = metanetwork(B, S2);
        y = cutils::unique(S2);

    }

    std::vector<unsigned int> partition(S.begin(), S.end());
    return to_community_structure<M,G>(mnet, partition);
}



}
}

#endif
