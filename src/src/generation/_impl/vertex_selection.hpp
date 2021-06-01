#ifndef UU_GENERATION_IMPL_VERTEXSELECTION_H_
#define UU_GENERATION_IMPL_VERTEXSELECTION_H_


namespace uu {
namespace net {

template <typename G>
const Vertex*
choice_uniform(
    const G* g
);

template <typename G>
const Vertex*
choice_common_neighbors(
    const G* g1,
    const G* g2
);

template <typename G>
const Vertex*
choice_degree(
    const G* layer
);


}
}

#endif
