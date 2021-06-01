/**
 * Functions to summarize a property matrix.
 *
 * Several generic summarization functions can be computed on a property matrix, e.g., to
 * obtain the amount of overlapping or the statistical correlation between different types
 * of structures in different contexts.
 */

#ifndef UU_CORE_PROPERTYMATRIX_SUMMARIZATION_H_
#define UU_CORE_PROPERTYMATRIX_SUMMARIZATION_H_

#include "core/propertymatrix/PropertyMatrix.hpp"
#include "core/propertymatrix/StructureComparisonFunction.hpp"


namespace uu {
namespace core {

/**
 * The result of the comparison of two binary vectors, comparing their elements at each coordinate
 * and counting the number of occurrences for all possible configurations
 * (true-true, true-false, false-true, false-false)
 */
struct binary_vector_comparison
{
  public:
    /** number of coordinates where both vectors are true */
    long yy = 0;
    /** number of coordinates where the first vector is true and the second is false */
    long yn = 0;
    /** number of coordinates where the first vector is false and the second is true */
    long ny = 0;
    /** number of coordinates where both vectors are false */
    long nn = 0;
};

/**
 * Basic context summaries
 */

template <class OBJECT, class CONTEXT, class VALUE>
double
min(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);


template <class OBJECT, class CONTEXT, class VALUE>
double
max(
    const  PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
sum(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
mean(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
sd(
    const  PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);


template <class OBJECT, class CONTEXT, class VALUE>
double
skew(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
kurt(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);
template <class OBJECT, class CONTEXT, class VALUE>
double
entropy(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);
template <class OBJECT, class CONTEXT, class VALUE>
double
CV(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
jarque_bera(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c
);

template <class OBJECT, class CONTEXT, class VALUE>
double
relative_difference(
    double (*f)(const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
                const CONTEXT& c),
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);


/*
 * K number of bins -
 * assumes only non-negative -
 * check if empty bins
 */
template <class OBJECT, class CONTEXT, class VALUE>
std::pair<Counter<int>,Counter<int> >
histograms(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2,
    int K
);


template <class OBJECT, class CONTEXT, class VALUE>
double
dissimilarity_index(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2,
    int K
);

// epsilon correction to avoid division by 0
template <class OBJECT, class CONTEXT, class VALUE>
double
KL_divergence(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2,
    int K
);


// epsilon correction to avoid division by 0
template <class OBJECT, class CONTEXT, class VALUE>
double
JS_divergence(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2,
    int K
);

template <class OBJECT, class CONTEXT, class VALUE>
double
jeffrey_divergence(
    const PropertyMatrix<OBJECT,CONTEXT,VALUE>& P,
    const CONTEXT& c1,
    const CONTEXT& c2,
    int K
);


/**
 * Compares two binary vectors, comparing their elements at each coordinate
 * and counting the number of occurrences for all possible configurations (true-true, true-false, false-true, false-false)
 */
template <class OBJECT, class CONTEXT>
binary_vector_comparison
compare(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
russell_rao(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
jaccard(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
coverage(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
kulczynski2(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
simple_matching(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
hamann(
    const PropertyMatrix<OBJECT,CONTEXT,bool>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);


template <class OBJECT, class CONTEXT>
double
L2(
    const PropertyMatrix<OBJECT,CONTEXT,double>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
cosine(
    const PropertyMatrix<OBJECT,CONTEXT,double>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);

template <class OBJECT, class CONTEXT>
double
pearson(
    const PropertyMatrix<OBJECT,CONTEXT,double>& P,
    const CONTEXT& c1,
    const CONTEXT& c2
);


}
}

#include "summarization.ipp"

#endif
