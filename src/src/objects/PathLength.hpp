#ifndef MNET_OBJECTS_PATHLENGTH_H_
#define MNET_OBJECTS_PATHLENGTH_H_

#include "core/exceptions/assert_not_null.hpp"
#include "core/exceptions/OperationNotSupportedException.hpp"
#include "core/utils/Counter.hpp"
#include "objects/ComparisonResult.hpp"
#include "objects/ComparisonType.hpp"

namespace uu {
namespace net {


/**
 * This class represents the length of a path in a multilayer network.
 * It is represented using a matrix where element {i,j} indicates the number
 * of edges traversed from layer i to layer j.
 */
template <typename M>
class PathLength
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
    PathLength(
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
    size_t
    length(
    ) const;

    /**
     * @return The number of steps (that is, traversed edges) inside a given layer.
     * @param layer only edges between nodes in this layer are considered.
     */
    size_t
    length(
        const typename M::layer_type* layer
    ) const;

    /**
     * @return The number of steps (that is, traversed edges) from a node in layer from to a node in layer to.
     * @param from first layer.
     * @param to second layer.
     */
    size_t
    length(
        const typename M::layer_type* from,
        const typename M::layer_type* to
    ) const;

    /**
     * @brief Compares two distances according to the comp parameter:
     * @param other The distance to be compared to.
     * @param comp This parameter specifies the amount of information used while comparing the two distances.
     * For the allowed values, see the definition of ComparisonType.
     * @return One relationship of type ComparisonResult
     */
    ComparisonResult
    compare(
        const PathLength& other,
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
        const PathLength& other
    ) const;

    /**
     * Comparison by id. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is longer than the input one.
     */
    bool
    operator>(
        const PathLength& other
    ) const;

    /**
     * Comparison by id. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is the same as the input one.
     */
    bool
    operator==(
        const PathLength& other
    ) const;

    /**
     * Compare the absolute length of the two distances. For a comparison considering steps
     * on different layers as incomparable entities, use compare()
     * @param other The distance to be compared to.
     * @return true if this distance is different from the input one.
     */
    bool
    operator!=(
        const PathLength& other
    ) const;

    /** Returns a string representation of this object */
    std::string
    to_string(
    ) const;

  private:

    ComparisonResult
    compare_full(
        const PathLength& other
    ) const;

    ComparisonResult
    compare_switch(
        const PathLength& other
    ) const;

    ComparisonResult
    compare_multiplex(
        const PathLength& other
    ) const;

    ComparisonResult
    compare_simple(
        const PathLength& other
    ) const;
};

}
}

#include "PathLength.ipp"

#endif
