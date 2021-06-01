#ifndef UU_GENERATION_IMPL_UTILS_H_
#define UU_GENERATION_IMPL_UTILS_H_


#include <utility>
#include "objects/Vertex.hpp"

namespace uu {
namespace net {


template <typename G>
std::pair<const Vertex*, const Vertex*>
get_vertex_pair(
    G* g,
    LoopMode allow_loops = LoopMode::DISALLOWED
);

}
}

#include "utils.ipp"

#endif
