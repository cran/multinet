/**
 * History:
 * - 2018.01.01 file adapted from version 1.0 of the multinet library
 */

#ifndef UU_CORE_DATAOBJECTS_PROPERTYMATRIX_OBJECTCOMPARISONFUNCTION_H_
#define UU_CORE_DATAOBJECTS_PROPERTYMATRIX_OBJECTCOMPARISONFUNCTION_H_


#include "core/propertymatrix/PropertyMatrix.hpp"


namespace uu {
namespace core {

/**
 * A function used to compare two structures in a property matrix.
 */
template <class OBJECT, class CONTEXT, class NUMBER>
class
    StructureComparisonFunction
{

  public:

    StructureComparisonFunction(
        const PropertyMatrix<OBJECT,CONTEXT,NUMBER>* P,
        const CONTEXT* c
    ) :
        P(P),
        c(c)
    {

    }

    const PropertyMatrix<OBJECT,CONTEXT,NUMBER>* P;

    const CONTEXT* c;

    bool
    operator()(
        const OBJECT& s1,
        const OBJECT& s2
    ) const
    {
        Value<NUMBER> v1 = (*P).get(s1,*c);
        Value<NUMBER> v2 = (*P).get(s2,*c);

        if (v1.null || v2.null)
        {
            return !v1.null<!v2.null;    // TODO
        }

        return v1.value<v2.value;
    }
};

}
}

#endif
