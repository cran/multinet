#ifndef UU_OLAP_SEL_RANGE_H_
#define UU_OLAP_SEL_RANGE_H_

#include <cstddef>
#include <stddef.h>
#include "olap/sel//Indexes.hpp"

namespace uu {
namespace net {

class Range
    : public Indexes
{

  public:

    Range(
        std::size_t from,
        std::size_t to
    );


    /**
     *
     * @throw OutOfBoundsException
     */
    virtual
    void
    eval(
        std::size_t size
    ) override;


    virtual
    bool
    has_next(
    ) const override;


    virtual
    std::size_t
    next(
    ) override;

  private:

    std::size_t from_;
    std::size_t to_;
    std::size_t current_;
    bool has_next_;

};

}
}

#endif
