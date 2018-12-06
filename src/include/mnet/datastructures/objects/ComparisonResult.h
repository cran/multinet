/**
 * Social Network Analysis measures for multiplex networks.
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef MNET_DATASTRUCTURES_OBJECTS_COMPARISONRESULT_H_
#define MNET_DATASTRUCTURES_OBJECTS_COMPARISONRESULT_H_

namespace uu {
namespace net {

/** Outcome of the comparison between two numbers, or two vectors, or two matrices. (the concept of Pareto dominance is used). */
enum class ComparisonResult
{
    LESS_THAN,
    EQUAL,
    INCOMPARABLE,
    GREATER_THAN
};


}
}

#endif
