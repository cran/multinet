#ifndef UU_OLAP_UNIFORMDISCRETIZATION_H_
#define UU_OLAP_UNIFORMDISCRETIZATION_H_

#include "olap/op/Discretization.hpp"

namespace uu {
namespace net {

template <class O>
class
    UniformDiscretization
    : public Discretization<O>
{

  private:

    size_t n_;
    bool val_;

  public:

    UniformDiscretization(
        size_t n,
        bool val
    ) : n_(n), val_(val)
    {}

    UniformDiscretization(
        size_t n
    ) : n_(n), val_(true)
    {}

    std::vector<bool>
    operator()(
        const O* obj
    ) const
    {
        (void)obj;
        return std::vector<bool>(n_, val_);
    }


};


}
}

#endif
