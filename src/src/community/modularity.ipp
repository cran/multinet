#include <unordered_map>
#include <numeric>
#include <utility>
#include "objects/EdgeMode.hpp"
#include "networks/probability.hpp"

namespace uu {
namespace net {

template <typename G, typename CS>
double
modularity(
    const G* g,
    const CS* communities
    )
{

    double res = 0;
    size_t m = g->edges()->size();
    if (m==0) return 0;

    for (auto community: *communities)
    {
        for (auto i: *community)
        {
            for (auto j: *community)
            {
                int k_i = g->edges()->neighbors(i,EdgeMode::OUT)->size();
                int k_j = g->edges()->neighbors(j,EdgeMode::IN)->size();
                int a_ij = g->edges()->get(i, j) ? 1 : 0;
                res += a_ij - (double)k_i * k_j / (2.0*m);
            }
        }
    }

    return res / (2.0*m);
}


template <typename CS>
double
prob_modularity(
    const Network* g,
    const CS* communities
    )
{
    double res = 0;
    double m = 0;
    for (auto e: *g->edges())
    {
        m += get_prob(g, e);
    }
    if (m==0) return 0;

    for (auto community: *communities)
    {
        for (auto i: *community)
        {
            for (auto j: *community)
            {
                double k_i = exp_degree(g, i);
                double k_j = exp_degree(g, j);
                auto e = g->edges()->get(i, j);
                double a_ij = 0;
                if (e) {
                    a_ij = get_prob(g, e);
                }
                res += a_ij - (double)k_i * k_j / (2*m);
            }
        }
    }

    return res / (2*m);
}


template <typename M, typename COMM>
double
modularity(const M* mnet, const COMM* communities, double omega)
{

    double res = 0;
    double mu = 0;

    std::unordered_map<std::string,int> m_s;

    for (auto s: *mnet->layers())
    {
        double m = s->edges()->size();

        if (!s->is_directed())
        {
            m *= 2;
        }

        // FIX TO THE ORIGINAL EQUATION WHEN THERE ARE NO EDGES
        if (m == 0)
        {
            m = 1;    // no effect on the formula
        }

        m_s[s->name] = m;
        mu += m;
    }

    for (auto community: *communities)
    {
        for (auto i: *community)
        {
            for (auto j: *community)
            {
                if (i==j)
                {
                    continue;    // not in the original definition - we do this assuming to deal with simple graphs
                }

                //std::cout << i->to_string() << " " << groups.count(i) << std::endl;
                //std::cout << j->to_string() << " " << groups.count(j) << std::endl;

                // same layer
                if (i.c==j.c)
                {
                    //std::cout << "Same group!" << std::endl;
                    //if (mnet.getNetwork(net)->containsEdge(*v_i,*v_j))
                    //    std::cout << "Edge" << std::endl;
                    long k_i = i.c->edges()->neighbors(i.v,EdgeMode::OUT)->size();
                    long k_j = j.c->edges()->neighbors(j.v,EdgeMode::IN)->size();
                    int a_ij = i.c->edges()->get(i.v, j.v)? 1.0 : 0.0;
                    res += a_ij - (double)k_i * k_j / (m_s.at(i.c->name));
                    //std::cout << i->actor->name << " " << j->actor->name << " " << i->layer->name << " "<< k_i << " " <<  k_j << " " <<  m_s.at(i->layer) << std::endl;
                    //std::cout << "->" << res << std::endl;
                }

                if (i.v==j.v)
                {
                    res += omega;
                }
            }
        }

        //std::cout << "->" << m_net << std::endl;
    }

    //std::cout << "same" << std::endl;

    //std::cout << mu << std::endl;
    int num_layers = mnet->layers()->size();

    for (auto actor: *mnet->actors())
    {
        mu+=num_layers*(num_layers-1)*omega; // unclear if we should multiply by c
    }

    //std::cout << mu << std::endl;

    return 1 / mu * res;
}



template <typename M, typename COMM>
double
ordered_modularity(const M* mnet, const COMM* communities, double omega)
{



    double res = 0;
    double mu = 0;

    std::unordered_map<std::string,int> m_s;

    for (auto s: *mnet->layers())
    {
        double m = s->edges()->size();

        if (!s->is_directed())
        {
            m *= 2;
        }

        // FIX TO THE ORIGINAL EQUATION WHEN THERE ARE NO EDGES
        if (m == 0)
        {
            m = 1;    // no effect on the formula
        }

        m_s[s->name] = m;
        mu += m;
    }

    // quick fix
    std::map<const uu::net::Network*,size_t> layer_index; // FIX ME!!

    for (size_t l_idx=0; l_idx<mnet->layers()->size(); l_idx++)
    {
        layer_index[mnet->layers()->at(l_idx)] = l_idx;
    }

    for (auto community: *communities)
    {
        for (auto i: *community)
        {
            for (auto j: *community)
            {
                if (i==j)
                {
                    continue;    // not in the original definition - we do this assuming to deal with simple graphs
                }

                //std::cout << i->to_string() << " " << groups.count(i) << std::endl;
                //std::cout << j->to_string() << " " << groups.count(j) << std::endl;

                // same layer
                if (i.c==j.c)
                {
                    //std::cout << "Same group!" << std::endl;
                    //if (mnet.getNetwork(net)->containsEdge(*v_i,*v_j))
                    //    std::cout << "Edge" << std::endl;
                    long k_i = i.c->edges()->neighbors(i.v,EdgeMode::OUT)->size();
                    long k_j = j.c->edges()->neighbors(j.v,EdgeMode::IN)->size();
                    int a_ij = i.c->edges()->get(i.v, j.v)? 1.0 : 0.0;
                    res += a_ij - (double)k_i * k_j / (m_s.at(i.c->name));
                    //std::cout << i->actor->name << " " << j->actor->name << " " << i->layer->name << " "<< k_i << " " <<  k_j << " " <<  m_s.at(i->layer) << std::endl;
                    //std::cout << "->" << res << std::endl;
                }

                if (i.v==j.v)
                {
                    if (std::abs((int)(layer_index[i.c]-layer_index[j.c]))<2)
                    {
                        res += omega;
                    }
                }
            }
        }

        //std::cout << "->" << m_net << std::endl;
    }

    //std::cout << "same" << std::endl;

    //std::cout << mu << std::endl;
    int num_layers = mnet->layers()->size();
    int num_actors = mnet->actors()->size();

    mu += 2*(num_layers-1)*num_actors*omega; // unclear if we should multiply by c


    //std::cout << mu << std::endl;

    return 1 / mu * res;
}


}
}


