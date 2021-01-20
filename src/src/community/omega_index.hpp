#ifndef UU_NET_COMMUNITY_OMEGAINDEX_H_
#define UU_NET_COMMUNITY_OMEGAINDEX_H_

#include <map>

#include "core/exceptions/assert_not_null.hpp"
#include "community/CommunityStructure.hpp"

namespace uu {
namespace net {


/**
 * For both partitioning and overlapping community structures.
 * @param com1 a community structure
 * @param com2 a community structure
 * @param net network
 * @return the omega_index between the two community structures
 * (1 if they are equal, down to 0)
 */
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
    std::map<std::pair<element_type,element_type>, size_t> p1_pairs_cooccurance;
    std::map<std::pair<element_type,element_type>, size_t> p2_pairs_cooccurance;

    /* Init
    for (auto l1: *net->layers())
    {
       for (auto v1: *l1->vertices())
       {
           element_type vertex1(v1, l1);
           for (auto l2: *net->layers())
           {
               for (auto v2: *l2->vertices())
               {
                   element_type vertex2(v2, l2);
                   if (vertex1 < vertex2)
                   {
                       auto pair = std::make_pair(vertex1, vertex2);
                       p1_pairs_cooccurance[pair]=0;
                       p2_pairs_cooccurance[pair]=0;
                   }
               }
           }
       }
    }*/

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
                    size_t num = ++p1_pairs_cooccurance[key];

                    if (num > max_l)
                    {
                        max_l = num;
                    }

                    //p1_pairs_cooccurance[key_inversed]++;
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
                    size_t num = ++p2_pairs_cooccurance[key];

                    if (num > max_l)
                    {
                        max_l = num;
                    }

                    //p2_pairs_cooccurance[key_inversed]++;
                }
            }
        }
    }

    std::map<size_t, size_t> A, N1, N2;
    size_t num_keys_p1_p2 = 0;
    size_t num_keys_p1_not_p2 = 0;
    size_t num_keys_not_p1_p2 = 0;
    size_t num_keys_not_p1_not_p2 = 0;

    for (auto pair: p1_pairs_cooccurance)
    {
        std::pair<element_type,element_type> key = pair.first;
        size_t num_cooccurences_in_c1 = pair.second;
        N1[num_cooccurences_in_c1]++;
        auto it = p2_pairs_cooccurance.find(key);

        if (it != p2_pairs_cooccurance.end())
        {
            num_keys_p1_p2++;
            size_t num_cooccurences_in_c2 = it->second;

            if (num_cooccurences_in_c1 == num_cooccurences_in_c2)
            {
                A[num_cooccurences_in_c1]++;
                N2[num_cooccurences_in_c2]++;
            }

            p2_pairs_cooccurance.erase(it);
        }

        else
        {
            num_keys_p1_not_p2++;
        }
    }

    for (auto pair: p2_pairs_cooccurance)
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

    /*
     //Count the agreements between both partitions
     size_t max_cooccurance_value = 0;
     size_t actual_agreements = 0;
     size_t max_possible_num_of_agreements = 0;
     //Iterate through the keys in the first partitioning map
     for (auto pair: p1_pairs_cooccurance)
     {
        max_possible_num_of_agreements++;
       //Get the current key
        std::pair<element_type,element_type> key = pair.first;
         size_t value_in_p1 = pair.second;

        //Check the value of the same key in the second partitioning map
       size_t value_in_p2 = p2_pairs_cooccurance[key];
       if (value_in_p1==value_in_p2){
         actual_agreements++;
       }
       //Store the maximum value
       if (value_in_p1>max_cooccurance_value)
       {
           max_cooccurance_value = value_in_p1;
       }
       if (value_in_p2>max_cooccurance_value)
       {
           max_cooccurance_value = value_in_p2;
       }
     }



     double unadjusted_omega = ((double)actual_agreements)/max_possible_num_of_agreements;

     //calculate the expected omega index of a null model
     double omega_null_model = 0;
     long sum_of_multiplications = 0;
     for (size_t cooccurance_value = 0 ; cooccurance_value<=max_cooccurance_value; cooccurance_value++)
     {
         //Count how many times the current co-occurance value appeared in each partitioning
         size_t happened_in_partitioning1 = 0;
         size_t happened_in_partitioning2 = 0;
         //typedef std::map<std::pair<element_type,element_type>, int>::const_iterator MapIterator;
         for (auto pair: p1_pairs_cooccurance)
         {
             //If the value equal to the current cooccurance value, then increment happened_in_first_partitioning variable
             if (pair.second == cooccurance_value)
             {
                 happened_in_partitioning1++;
             }
         }
         for (auto pair: p2_pairs_cooccurance)
         {
             //If the value equal to the current cooccurance value, then increment happened_in_first_partitioning variable
             if (pair.second == cooccurance_value)
             {
                 happened_in_partitioning2++;
             }
         }
         sum_of_multiplications += happened_in_partitioning1*happened_in_partitioning2;
     }
     //std::cout<<"sum of multiplications " << sum_of_multiplications<<std::endl;
     omega_null_model = ((double)sum_of_multiplications)/std::pow((double)max_possible_num_of_agreements,(double)2);
     //std::cout<<"omega_null_model " << omega_null_model<<std::endl;

     //Calculate the value of omega index
     double omega_index = (unadjusted_omega-omega_null_model)/(1-omega_null_model);
     //std::cout<<"omega index " << omega_index<<std::endl;
     return omega_index;
     */
}

}
}

#endif
