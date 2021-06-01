#ifndef UU_OBJECTS_MLVERTEX2_H_
#define UU_OBJECTS_MLVERTEX2_H_

#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include "objects/Vertex.hpp"
//#include "olap/VCube.hpp"
#include "networks/Network.hpp"

namespace uu {
namespace net {

class
    MLVertex :
    //public core::Object,
    public std::enable_shared_from_this<MLVertex>
{

  public:

    typedef std::pair<const Vertex*, const Network*> key_type;

    MLVertex(
        const Vertex* v,
        const Network* c
    );

    MLVertex(
    );

    bool
    operator==(
        const MLVertex& v
    ) const;

    bool
    operator<(
        const MLVertex& v
    ) const;

    bool
    operator!=(
        const MLVertex& v
    ) const;

    bool
    operator>(
        const MLVertex& v
    ) const;


    std::string
    to_string(
    ) const;

    const Vertex* v;

    const Network* c;

    key_type key;

};


std::ostream&
operator<<(std::ostream& os, const MLVertex& v);

}
}

#endif
