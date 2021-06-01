/**
 * This header defines basic mathematical/statistical functions
 * (mean, standard deviation, intersection, union).
 */

#ifndef UU_CORE_UTILS_MATH_H_
#define UU_CORE_UTILS_MATH_H_

#include <set>
#include <unordered_set>
#include <cmath>
#include <vector>
#include <type_traits>
#include <numeric>

namespace uu {
namespace core {

/**
 * Mathematical mean (sum of elements divided by number of elements).
 * @param vec input set of values
 * @return the mean of the input values
 */
template <typename InputIterator>
double
mean(
    InputIterator begin,
    InputIterator end
);

/**
 * Standard deviation of a population.
 * @param vec input set of values
 * @return the standard deviation of the input values
 */
template <typename InputIterator>
double
stdev(
    InputIterator begin,
    InputIterator end
);

/**
 * Tha Jaccard similarity of a set of sets is the size of their intersection divided by the size of their union.
 * @param sets a vector of sets
 * @return Jaccard similiarity of the input sets. If the sets are all empty, 0 is returned.
 */
template <class T>
double
jaccard_similarity(
    const std::vector<std::unordered_set<T> >& sets
);

/**
 * Set-based intersection, for a combination of sorted and unordered sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the intersection of the two input sets
 */
template <class T>
int
intersection_size(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
);

/**
 * Set-based intersection, for unordered sets.
 * @param sets a vector of sets
 * @return the intersection of the input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::vector<std::unordered_set<T> >& sets
);

/**
 * Set-based intersection, for sorted sets.
 * @param sets a vector of sets
 * @return the intersection of the input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::vector<std::set<T> >& sets
);


/**
 * Set-based intersection, for unordered sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the intersection of the two input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
);

/**
 * Set-based intersection, for sorted sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the intersection of the two input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::set<T>& set1,
    const std::set<T>& set2
);


/**
 * Set-based intersection, for a combination of sorted and unordered sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the intersection of the two input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::set<T>& set1,
    const std::unordered_set<T>& set2
);

/**
 * Set-based intersection, for a combination of sorted and unordered sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the intersection of the two input sets
 */
template <class T>
std::unordered_set<T>
s_intersection(
    const std::unordered_set<T>& set1,
    const std::set<T>& set2
);


/**
 * Set-based union, for unordered sets.
 * @param sets a vector of sets
 * @return the union of the input sets
 */
template <class T>
std::unordered_set<T>
s_union(
    const std::vector<std::unordered_set<T> >& sets
);

/**
 * Set-based union, for sorted sets.
 * @param sets a vector of sets
 * @return the union of the input sets
 */
template <class T>
std::unordered_set<T>
s_union(
    const std::vector<std::set<T> >& sets
);

/**
 * Set-based union, for two sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the union of the two input sets
 */
template <class T>
std::unordered_set<T>
s_union(
    const std::unordered_set<T>& set1,
    const std::unordered_set<T>& set2
);

/**
 * Set-based union, for two sorted sets.
 * @param set1 a set of values
 * @param set2 a set of values
 * @return the union of the two input sets
 */
template <class T>
std::unordered_set<T>
s_union(
    const std::set<T>& set1,
    const std::set<T>& set2
);


}
}

#include "math.ipp"

#endif
