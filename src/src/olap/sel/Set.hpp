#ifndef UU_OLAP_SEL_SET_H_
#define UU_OLAP_SEL_SET_H_

#include <cstddef>
#include <stddef.h>
#include <vector>

#include "olap/sel//Indexes.hpp"

namespace uu {
namespace net {

class Set
    : public Indexes
{

  public:

    Set(
        const std::vector<size_t>& indexes
    );

    /**  */
    virtual
    void
    eval(
        size_t size
    ) override;

    /**  */
    virtual
    bool
    has_next(
    ) const override;


    /**  */
    virtual
    size_t
    next(
    ) override;

  private:

    std::vector<size_t> indexes_;
    size_t current_;
    bool has_next_;

};

}
}

#endif
