/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_NET_DATASTRUCTURES_STORES_INTERLAYEREDGESTORE_H_
#define UU_NET_DATASTRUCTURES_STORES_INTERLAYEREDGESTORE_H_

#include <memory>
#include <array>
#include <unordered_set>
#include "core/exceptions/WrongParameterException.h"
//#include "net/datastructures/stores/Attributed.h"
//#include "net/datastructures/Edge.h"
//#include "net/datastructures/EmptyAttributeStore.h"
//#include "mnet/datastructures/MultilayerObserver.h"

namespace uu {
namespace net {

template <typename E, size_t N>
class InterlayerEdgeStore
{

  protected:

    InterlayerEdgeStore();

  public:
    /**
     * Constructor.
     */


    InterlayerEdgeStore(
        std::array<std::unique_ptr<E>,N*(N-1)/2> init
    );

    template <size_t N1, size_t N2>
    E*
    get()
    {
        if (N1<N2)
        {
            return edge_stores_.at(N1).at(N2).get();
        }

        else if (N2<N1)
        {
            return edge_stores_.at(N2).at(N1).get();
        }

        else
        {
            throw core::WrongParameterException("interlayer edges cannot be among nodes in the same layer");
        }
    }


    template <size_t N1, size_t N2>
    const E*
    get() const
    {
        if (N1<N2)
        {
            return edge_stores_.at(N1).at(N2).get();
        }

        else if (N2<N1)
        {
            return edge_stores_.at(N2).at(N1).get();
        }

        else
        {
            throw core::WrongParameterException("interlayer edges cannot be among nodes in the same layer");
        }
    }

    virtual
    std::string
    summary(
    ) const;

  protected:

    std::array<std::array<std::unique_ptr<E>,N>,N> edge_stores_;

    //std::array<std::shared_ptr<core::Container<Vertex> >,2> vertex_stores_;

    //std::vector<std::shared_ptr<MultilayerObserver<Edge> > > observers;
};


template <typename E, size_t N>
InterlayerEdgeStore<E,N>::
InterlayerEdgeStore()
{}

template <typename E, size_t N>
InterlayerEdgeStore<E,N>::
InterlayerEdgeStore(
    std::array<std::unique_ptr<E>,N*(N-1)/2> init
)
{
    size_t idx = 0;

    for (size_t i=0; i< N; i++)
    {
        for (size_t j=i+1; j< N; j++)
        {
            edge_stores_.at(i).at(j) = std::move(init.at(idx++));
        }
    }
}


template <typename E, size_t N>
std::string
InterlayerEdgeStore<E,N>::
summary(
) const
{
    /*
       size_t s = 0;

       for (int i=0; i<2; i++)
       {
           for (int j=0; j<2; j++)
           {
               /if (i>j && !edge_stores_.at(i).at(j)->is_directed())
               {
                   continue;
               }/

               size_t num_edges_i_j = edge_stores_.at(i).at(j)->get_all()->size();
               s += num_edges_i_j;
           }
       }

       s /= 2;

       std::string summary = std::to_string(s) + " interlayer " + (s==1?"edge":"edges");
       return summary;
                */
    return "";
}


} // namespace net
} // namespace uu

#endif
