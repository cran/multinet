/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_DATASTRUCTURES_OBJECTS_MULTIDIMENSIONALPATHLENGTH_H_
#define MNET_DATASTRUCTURES_OBJECTS_MULTIDIMENSIONALPATHLENGTH_H_

#include <string>
#include <unordered_map>
#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "objects/Vertex.hpp"
#include "objects/EdgeMode.hpp"
#include "net/datastructures/containers/GenericObjectList.hpp"
#include "core/utils/Counter.hpp"
#include "mnet/datastructures/objects/ComparisonResult.hpp"
#include "mnet/datastructures/objects/ComparisonType.hpp"

namespace uu {
namespace net {


/**
 * This class represents the length of a path in a multilayer network.
 * It is represented using a matrix where element {i,j} indicates the number
 * of edges traversed from layer i to layer j.
 */
template <typename M>
class MultidimensionalPathLength
{
  private:
    typedef typename M::layer_type L;

    /** The multilayer network to which this distance refers. */
    const M* mnet;

    /** Number of steps for each pair of layers. (This includes intra-layer steps). */
    core::PairCounter<const L*, const L*> num_edges;

    /** Total number of steps, irrespective of the layers */
    long total_length;

  public:
    long ts;

    /** Constructs an empty distance. */
    MultidimensionalPathLength(
        const M* mnet
    );

    /**
     * Increases this distance by a new step from a node to another.
     * @param layer1 the starting layer of the new step.
     * @param layer2 the arrival layer of the new step.
     */
    void
    step(
        const typename M::layer_type* layer1,
        const typename M::layer_type* layer2
    );

    /**
     * @return The total number of steps (that is, traversed edges).
     */
    long
    length(
    ) const;

    /**
     * @return The number of steps (that is, traversed edges) inside a given layer.
     * @param layer only edges between nodes in this layer are considered.
     */
    long
    length(
        const typename M::layer_type* layer
    ) const;

    /**
     * @return The number of steps (that is, traversed edges) from a node in layer from to a node in layer to.
     * @param from first layer.
     * @param to second layer.
     */
    long
    length(
        const typename M::layer_type* from,
        const typename M::layer_type* to
    ) const;

    /**
     * @brief Compares two distances according to the comp parameter:
     * @param other The distance to be compared to.
     * @param comp This parameter specifies the amount of information used while comparing the two distances.
     * For the allowed values, see the definition of mlnet::ComparisonType.
     * @return One relationship of type mlnet::ComparisonResult
     */
    ComparisonResult
    compare(
        const MultidimensionalPathLength& other,
        ComparisonType comp
    ) const;

    /**
     * Comparison by id. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance's id is shorter than the input one.
     */
    bool
    operator<(
        const MultidimensionalPathLength& other
    ) const;

    /**
     * Comparison by id. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is longer than the input one.
     */
    bool
    operator>(
        const MultidimensionalPathLength& other
    ) const;

    /**
     * Comparison by id. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is the same as the input one.
     */
    bool
    operator==(
        const MultidimensionalPathLength& other
    ) const;

    /**
     * Compare the absolute length of the two distances. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is different from the input one.
     */
    bool
    operator!=(
        const MultidimensionalPathLength& other
    ) const;

    /** Returns a string representation of this object */
    std::string
    to_string(
    ) const;

  private:

    ComparisonResult
    compare_full(
        const MultidimensionalPathLength& other
    ) const;

    ComparisonResult
    compare_switch(
        const MultidimensionalPathLength& other
    ) const;

    ComparisonResult
    compare_multiplex(
        const MultidimensionalPathLength& other
    ) const;

    ComparisonResult
    compare_simple(
        const MultidimensionalPathLength& other
    ) const;
};





template <typename M>
MultidimensionalPathLength<M>::
MultidimensionalPathLength(
    const M* mnet
) : mnet(mnet), total_length(0), ts(0) {}


template <typename M>
void
MultidimensionalPathLength<M>::
step(
    const typename M::layer_type* layer1,
    const typename M::layer_type* layer2
)
{
    num_edges.inc(layer1,layer2);
    total_length++;
}

template <typename M>
long
MultidimensionalPathLength<M>::
length(
) const
{
    return total_length;
}

template <typename M>
long
MultidimensionalPathLength<M>::
length(
    const typename M::layer_type* layer
) const
{
    return num_edges.count(layer,layer);
}

template <typename M>
long
MultidimensionalPathLength<M>::
length(
    const typename M::layer_type* from,
    const typename M::layer_type* to
) const
{
    return num_edges.count(from,to);
}

template <typename M>
ComparisonResult
MultidimensionalPathLength<M>::
compare(
    const MultidimensionalPathLength& other,
    ComparisonType comp
) const
{
    switch (comp)
    {
    case ComparisonType::FULL:
        return compare_full(other);

    case ComparisonType::SWITCH_COSTS:
        return compare_switch(other);

    case ComparisonType::MULTIPLEX:
        return compare_multiplex(other);

    case ComparisonType::SIMPLE:
        return compare_simple(other);
    }

    throw core::WrongParameterException("Wrong comparison type");
}

template <typename M>
ComparisonResult
MultidimensionalPathLength<M>::
compare_full(
    const MultidimensionalPathLength& other
) const
{
    bool canBeDominated = true;
    bool canDominate = true;

    if (mnet != other.mnet)
    {
        throw core::OperationNotSupportedException("Cannot compare distances on different networks");
    }

    for (auto layer1: *mnet->layers())
    {
        for (auto layer2: *mnet->layers())
        {
            long l1 = length(layer1,layer2);
            long l2 = other.length(layer1,layer2);

            if (l1 > l2)
            {
                canDominate = false;
            }

            else if (l1 < l2)
            {
                canBeDominated = false;
            }

            if (!canBeDominated && !canDominate)
            {
                return ComparisonResult::INCOMPARABLE;
            }
        }
    }

    if (canDominate && !canBeDominated)
    {
        return ComparisonResult::GREATER_THAN;
    }

    if (canBeDominated && !canDominate)
    {
        return ComparisonResult::LESS_THAN;
    }

    //if (canDominate && canBeDominated)
    return ComparisonResult::EQUAL;
}

template <typename M>
ComparisonResult
MultidimensionalPathLength<M>::
compare_switch(
    const MultidimensionalPathLength& other
) const
{
    bool canBeDominated = true;
    bool canDominate = true;

    if (mnet != other.mnet)
    {
        throw core::OperationNotSupportedException("Cannot compare distances on different networks");
    }

    long num_intralayer_steps1 = 0;
    long num_intralayer_steps2 = 0;

    for (auto layer1: *mnet->layers())
    {
        long l1 = length(layer1,layer1);
        num_intralayer_steps1 += l1;
        long l2 = other.length(layer1,layer1);
        num_intralayer_steps2 += l2;

        if (l1 > l2)
        {
            canDominate = false;
        }

        else if (l1 < l2)
        {
            canBeDominated = false;
        }

        if (!canBeDominated && !canDominate)
        {
            return ComparisonResult::INCOMPARABLE;
        }
    }

    long num_interlayer_steps1 = length()-num_intralayer_steps1;
    long num_interlayer_steps2 = other.length()-num_intralayer_steps2;

    if (num_interlayer_steps1 > num_interlayer_steps2)
    {
        canDominate = false;
    }

    else if (num_interlayer_steps1 < num_interlayer_steps2)
    {
        canBeDominated = false;
    }

    if (!canBeDominated && !canDominate)
    {
        return ComparisonResult::INCOMPARABLE;
    }

    if (canDominate && !canBeDominated)
    {
        return ComparisonResult::GREATER_THAN;
    }

    if (canBeDominated && !canDominate)
    {
        return ComparisonResult::LESS_THAN;
    }

    //if (canDominate && canBeDominated)
    return ComparisonResult::EQUAL;
}

template <typename M>
ComparisonResult
MultidimensionalPathLength<M>::
compare_multiplex(
    const MultidimensionalPathLength& other
) const
{
    bool canBeDominated = true;
    bool canDominate = true;

    if (mnet != other.mnet)
    {
        throw core::OperationNotSupportedException("Cannot compare distances on different networks");
    }

    long num_intralayer_steps1 = 0;
    long num_intralayer_steps2 = 0;

    for (auto layer1: *mnet->layers())
    {
        long l1 = length(layer1,layer1);
        num_intralayer_steps1 += l1;
        long l2 = other.length(layer1,layer1);
        num_intralayer_steps2 += l2;

        if (l1 > l2)
        {
            canDominate = false;
        }

        else if (l1 < l2)
        {
            canBeDominated = false;
        }

        if (!canBeDominated && !canDominate)
        {
            return ComparisonResult::INCOMPARABLE;
        }
    }

    if (canDominate && !canBeDominated)
    {
        return ComparisonResult::GREATER_THAN;
    }

    if (canBeDominated && !canDominate)
    {
        return ComparisonResult::LESS_THAN;
    }

    //if (canDominate && canBeDominated)
    return ComparisonResult::EQUAL;
}

template <typename M>
ComparisonResult
MultidimensionalPathLength<M>::
compare_simple(
    const MultidimensionalPathLength& other
) const
{
    bool canBeDominated = true;
    bool canDominate = true;

    if (mnet != other.mnet)
    {
        throw core::OperationNotSupportedException("Cannot compare distances on different networks");
    }

    long l1 = length();
    long l2 = other.length();

    if (l1 > l2)
    {
        canDominate = false;
    }

    else if (l1 < l2)
    {
        canBeDominated = false;
    }

    if (!canBeDominated && !canDominate)
    {
        return ComparisonResult::INCOMPARABLE;
    }

    if (canDominate && !canBeDominated)
    {
        return ComparisonResult::GREATER_THAN;
    }

    if (canBeDominated && !canDominate)
    {
        return ComparisonResult::LESS_THAN;
    }

    //if (canDominate && canBeDominated)
    return ComparisonResult::EQUAL;
}

template <typename M>
bool
MultidimensionalPathLength<M>::
operator<(
    const MultidimensionalPathLength& other
) const
{
    //return total_length < other.total_length;
    return ts < other.ts;
}

template <typename M>
bool
MultidimensionalPathLength<M>::
operator>(
    const MultidimensionalPathLength& other
) const
{
    //return total_length > other.total_length;
    return ts > other.ts;
}

template <typename M>
bool
MultidimensionalPathLength<M>::
operator==(
    const MultidimensionalPathLength& other
) const
{
    //return total_length == other.total_length;
    return ts == other.ts;
}

template <typename M>
bool
MultidimensionalPathLength<M>::
operator!=(
    const MultidimensionalPathLength& other
) const
{
    //return total_length != other.total_length;
    return ts != other.ts;
}

template <typename M>
std::string
MultidimensionalPathLength<M>::
to_string(
) const
{
    std::string res;

    for (auto layer: *mnet->layers())
    {
        long l = length(layer,layer);
        res += " " + layer->name + ":" + std::to_string(l);
    }

    for (auto layer1: *mnet->layers())
    {
        for (auto layer2: *mnet->layers())
        {
            if (layer1==layer2)
            {
                continue;
            }

            long l = length(layer1,layer2);

            if (l!=0)
            {
                res += " " + layer1->name + "->" + layer2->name + ":" + std::to_string(l);
            }
        }
    }

    return res;
}

}
}

#endif
