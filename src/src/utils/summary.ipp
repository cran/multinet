#include "core/exceptions/assert_not_null.hpp"
#include "measures/order.hpp"
#include "measures/size.hpp"
#include "networks/MultilayerNetwork.hpp"

namespace uu {
namespace net {

template<typename G>
std::string
summary_short(
    const G* g
)
{
    core::assert_not_null(g, "summary_short", "g");

    auto n = std::to_string(order(g));
    auto m = std::to_string(size(g));
    auto dir = g->is_directed()?"Dir":"Und";
    auto loops = g->allows_loops()?", Loops":"";
    return g->name + "(" + n + ", " + m  + ", " + dir + loops + ")";
}

template<>
std::string
summary_short(
    const MultilayerNetwork* net
);

}
}

