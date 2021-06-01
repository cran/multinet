/**
 * A property matrix associates values to pairs (structure, context).
 *
 * Examples of structures are edges, or triangles, in a network, and examples of contexts
 * are layers in a multilayer network.
 *
 * Several generic summarization functions can be computed on a property matrix, e.g., to
 * obtain the amount of overlapping or the statistical correlation between different types
 * of structures in different contexts.
 */

#ifndef UU_CORE_PROPERTYMATRIX_PROPERTYMATRIX_H_
#define UU_CORE_PROPERTYMATRIX_PROPERTYMATRIX_H_

#include <unordered_map>
#include <unordered_set>
#include "core/attributes/Value.hpp"
#include "core/utils/Counter.hpp"

namespace uu {
namespace core {

/**
 * A property matrix is a view that associates a value to each structure
 * (e.g., node, pair of nodes, ...) in each context (e.g., layer).
 */
template <class STRUCTURE, class CONTEXT, class VALUE>
class
    PropertyMatrix
{

  public:

    typedef STRUCTURE struct_type;
    typedef CONTEXT context_type;

    /** number of structures in this matrix (e.g., actors, or edges) */
    const long num_structures;

    /** number of observation contexts, typically layers */
    const long num_contexts;

    /**
     * Creates a property matrix with a given number of columns and rows.
     * @param num_contexts
     * @param num_structures
     * @param default_value
     */
    PropertyMatrix(
        long num_structures,
        long num_contexts,
        VALUE default_value
    );

    /**
     * @param s a structure
     * @param c a context
     * @return the value associated to the input structure in the input context
     */
    Value<VALUE>
    get(
        const STRUCTURE& s,
        const CONTEXT& c
    ) const;

    /**
     * @param s a structure
     * @param c a context
     * @param v the value to be associated to the input structure in the input context
     */
    void
    set(
        const STRUCTURE& s,
        const CONTEXT& c,
        VALUE v
    );

    /**
     * Sets s in c as not available (NA)
     * @param s a structure
     * @param c a context
     */
    void
    set_na(
        const STRUCTURE& s,
        const CONTEXT& c
    );

    /**
     * number of "not available" values in c (NA)
     * @param c a context
     */
    long
    num_na(
        const CONTEXT& c
    ) const;


    /**
     * Changes the fields of the matrix replacing absolute values with their ranking for each context.
     * For example, a context (1.2, 5.4, 5) would be replaced by (1, 3, 2)
     */
    void
    rankify(
    );

    /**
     * @return a set of all contexts in the matrix
     */
    const
    std::unordered_set<CONTEXT>&
    contexts(
    ) const;

    /**
     * @return a set of all structures in the matrix
     */
    const
    std::unordered_set<STRUCTURE>&
    structures(
    ) const;

    /**
     * @return the default value assigned to a structure for a context where no explicit value has been specified.
     */
    VALUE
    get_default(
    ) const;


  private:

    std::unordered_set<STRUCTURE> _structures;

    std::unordered_set<CONTEXT> _contexts;

    std::unordered_map<CONTEXT, std::unordered_map<STRUCTURE, Value<VALUE> > > data;

    VALUE default_value;

    Counter<CONTEXT> na;

};


}
}

#include "PropertyMatrix.ipp"

#endif
