#ifndef UU_OLAP_UNIFORMTEMPORALDISCRETIZATION_H_
#define UU_OLAP_UNIFORMTEMPORALDISCRETIZATION_H_

#include <cmath>
#include "olap/time.hpp"
#include "core/attributes/conversion.hpp"

namespace uu {
namespace net {

template <class STORE>
class
    UniformTemporalDiscretization
    : public Discretization<typename STORE::value_type>
{

  private:

    const STORE* store_;
    core::Time min_;
    core::Time max_;
    std::chrono::system_clock::duration width_;
    size_t n_;

  public:

    UniformTemporalDiscretization(
        const STORE* store,
        const core::Time& min,
        const core::Time& max,
        size_t n
    ) : store_(store), min_(min), max_(max), n_(n)
    {
        if (max_ <= min_)
        {
            throw core::WrongParameterException("max must be higher than min");
        }

        width_ = (max_ - min_)/n_;
    }

    std::vector<bool>
    operator()(
        const typename STORE::value_type* obj
    ) const
    {
        auto res = std::vector<bool>(n_, false);
        std::set<core::Time> times = get_times(store_, obj);

        for (auto time: times)
        {
            if (time < min_ || time > max_)
            {
                continue;
            }

            if (time == max_)
            {
                res.back() = true;
            }

            else
            {
                size_t idx = trunc((time-min_)/width_);
                res[idx] = true;
            }
        }

        return res;
    }

};



}
}

#endif
