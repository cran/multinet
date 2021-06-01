#include <vector>
#include "core/exceptions/assert_not_null.hpp"
#include "core/utils/math.hpp"
#include "measures/degree.hpp"

namespace uu {
namespace net {

template <typename LayerIterator>
size_t
degree(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree", "v");

    int d = 0;

    for (auto layer=first; layer!=last; ++layer)
    {
        d += degree(*layer, v, mode);
    }

    return d;
}


template <typename LayerIterator>
double
degree_mean(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree_mean", "v");

    std::vector<double> degrees;

    for (auto layer=first; layer!=last; ++layer)
    {
        degrees.push_back((double)degree(*layer, v, mode));
    }

    return core::mean(degrees.begin(), degrees.end());
}


template <typename LayerIterator>
double
degree_deviation(
    LayerIterator first,
    LayerIterator last,
    const Vertex* v,
    EdgeMode mode
)
{
    core::assert_not_null(v, "degree_deviation", "v");

    std::vector<double> degrees;

    for (auto layer=first; layer!=last; ++layer)
    {
        degrees.push_back((double)degree(*layer, v, mode));
    }

    return core::stdev(degrees.begin(), degrees.end());
}


}
}

