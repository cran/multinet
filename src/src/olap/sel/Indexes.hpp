#ifndef UU_OLAP_SEL_INDEXES_H_
#define UU_OLAP_SEL_INDEXES_H_

#include <stddef.h>
#include <cstddef>

namespace uu {
namespace net {

class Indexes
{

  public:

    Indexes();

    /**  */
    virtual
    void
    eval(
        std::size_t size
    );

    /**  */
    virtual
    bool
    has_next(
    ) const;


    /**  */
    virtual
    std::size_t
    next(
    );

};

}
}

#endif
