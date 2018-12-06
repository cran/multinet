/**
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */

#ifndef UU_MNET_LAYOUT_CIRCULAR_H_
#define UU_MNET_LAYOUT_CIRCULAR_H_

#include <map>
#include "mnet/layout/XYZCoordinates.h"

namespace uu {
namespace net {

template <typename M>
std::map<std::pair<const Vertex*, const typename M::layer_type*>,XYZCoordinates>
circular(
    const M* mnet,
    double radius
);


template <typename M>
std::map<std::pair<const Vertex*, const typename M::layer_type*>,XYZCoordinates>
circular(
    const M* mnet,
    double radius
)
{
    std::map<std::pair<const Vertex*, const typename M::layer_type*>,XYZCoordinates> pos;
    double pi = 3.14159265358979323846;

    if (mnet->vertices()->size()==0)
    {
        return pos;
    }

    double angle_offset = 360.0/mnet->vertices()->size();
    int i=0;

    for (auto a: *mnet->vertices())
    {
        double degree = i*angle_offset;
        double radians = degree*pi/180;
        double x = std::cos(radians)*radius;
        double y = std::sin(radians)*radius;

        for (auto l: *mnet->layers())
        {
            if (l->vertices()->contains(a))
            {
                auto n = std::make_pair(a, l);
                pos[n].x = x;
                pos[n].y = y;
                pos[n].z = mnet->layers()->get_index(l); // @todo not very efficient
            }
        }

        i++;
    }

    return pos;
}

}
}

#endif
