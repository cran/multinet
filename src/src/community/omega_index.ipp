#include <map>
#include "core/exceptions/assert_not_null.hpp"

namespace uu {
namespace net {


template <typename M>
double
omega_index(
    const CommunityStructure<M>* com1,
    const CommunityStructure<M>* com2,
    size_t num_elements
)
{
    typedef typename M::community_element_type element_type;
    //
    core::assert_not_null(com1, "omega_index", "com1");
    core::assert_not_null(com2, "omega_index", "com2");


    //Create a map to represent pairs agreement in each input partitioning
    //The map is of the form [ key = pair of nodes (node1,node2) and  value = number of times they co-occur together]
    std::map<std::pair<element_type,element_type>, size_t> p1_pairs_cooccurrence;
    std::map<std::pair<element_type,element_type>, size_t> p2_pairs_cooccurrence;


    size_t N = num_elements * (num_elements-1) / 2;

    size_t max_l = 0;

    for (auto c: *com1)
    {
        //For each pair of nodes in the community, increment the corresponding index in the map
        for (auto v1: *c)
        {
            for (auto v2: *c)
            {
                if (v1 < v2)
                {
                    std::pair<element_type,element_type> key(v1, v2);
                    //std::pair<element_type,element_type> key_inversed (v2, v1);
                    size_t num = ++p1_pairs_cooccurrence[key];

                    if (num > max_l)
                    {
                        max_l = num;
                    }

                    //p1_pairs_cooccurrence[key_inversed]++;
                }
            }
        }
    }


    //Iterate through the second communities to set the values for the corresponding map

    for (auto c: *com2)
    {
        //For each pair of nodes in the community, increment the corresponding index in the map
        for (auto v1: *c)
        {
            for (auto v2: *c)
            {
                if (v1 < v2)
                {

                    std::pair<element_type,element_type> key(v1, v2);
                    //std::pair<element_type,element_type> key_inversed (v2, v1);
                    size_t num = ++p2_pairs_cooccurrence[key];

                    if (num > max_l)
                    {
                        max_l = num;
                    }

                    //p2_pairs_cooccurrence[key_inversed]++;
                }
            }
        }
    }

    std::map<size_t, size_t> A, N1, N2;
    size_t num_keys_p1_p2 = 0;
    size_t num_keys_p1_not_p2 = 0;
    size_t num_keys_not_p1_p2 = 0;
    size_t num_keys_not_p1_not_p2 = 0;

    for (auto pair: p1_pairs_cooccurrence)
    {
        std::pair<element_type,element_type> key = pair.first;
        size_t num_cooccurences_in_c1 = pair.second;
        N1[num_cooccurences_in_c1]++;
        auto it = p2_pairs_cooccurrence.find(key);

        if (it != p2_pairs_cooccurrence.end())
        {
            num_keys_p1_p2++;
            size_t num_cooccurences_in_c2 = it->second;

            if (num_cooccurences_in_c1 == num_cooccurences_in_c2)
            {
                A[num_cooccurences_in_c1]++;
                N2[num_cooccurences_in_c2]++;
            }

            p2_pairs_cooccurrence.erase(it);
        }

        else
        {
            num_keys_p1_not_p2++;
        }
    }

    for (auto pair: p2_pairs_cooccurrence)
    {
        size_t num_cooccurences_in_c2 = pair.second;
        N2[num_cooccurences_in_c2]++;
        num_keys_not_p1_p2++;
    }

    num_keys_not_p1_not_p2 = N - num_keys_not_p1_p2 - num_keys_p1_not_p2 - num_keys_p1_p2;
    A[0] = num_keys_not_p1_not_p2;
    N1[0] = num_keys_not_p1_not_p2 + num_keys_not_p1_p2;
    N2[0] = num_keys_not_p1_not_p2 + num_keys_p1_not_p2;

    double obs = 0;
    double exp = 0;

    for (size_t j=0; j<=max_l; j++)
    {
        obs += A[j];
        exp += N1[j]*N2[j];
    }

    obs /= N;
    exp /= N*N;

    double omega = (obs-exp)/(1-exp);
    return omega;
}

}
}

