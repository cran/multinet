#ifndef UU_MEASURES_IMPL_LAYER_H_
#define UU_MEASURES_IMPL_LAYER_H_

#include "core/propertymatrix/summarization.hpp"
#include "objects/Vertex.hpp"
#include "objects/Dyad.hpp"
#include "objects/Triad.hpp"
#include "objects/EdgeMode.hpp"

namespace uu {
namespace net {

template <typename M>
core::PropertyMatrix<const Vertex*,const typename M::layer_type*,bool>
actor_existence_property_matrix(
    const M* mnet
);

template <typename M>
core::PropertyMatrix<std::pair<const typename M::vertex_type*,const typename M::vertex_type*>,const typename M::layer_type*,bool>
edge_existence_property_matrix(
    const M* mnet
);

template <typename M>
core::PropertyMatrix<Triad,const typename M::layer_type*,bool>
triangle_existence_property_matrix(
    const M* mnet
);

template <typename M>
core::PropertyMatrix<const Vertex*,const typename M::layer_type*,double>
actor_degree_property_matrix(
    const M* mnet, EdgeMode mode
);

template <typename M>
core::PropertyMatrix<const Vertex*,const typename M::layer_type*,double>
actor_cc_property_matrix(
    const M* mnet
);


}
}


// TODO test collisions
namespace std {

template <>
struct hash<std::pair<const uu::net::Vertex*,const uu::net::Vertex*>>;

}

#include "layer_utils.ipp"

#endif
