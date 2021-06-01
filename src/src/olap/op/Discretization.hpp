#ifndef UU_OLAP_DISCRETIZATION_H_
#define UU_OLAP_DISCRETIZATION_H_

namespace uu {
namespace net {

template <class O>
class
    Discretization
{

  public:

    std::vector<bool>
    operator()(
        const O* obj
    ) const;

};


}
}

#endif
