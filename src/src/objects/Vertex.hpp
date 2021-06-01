#ifndef UU_OBJECTS_VERTEX_H_
#define UU_OBJECTS_VERTEX_H_

#include <string>
#include <memory>
#include <iostream>
#include "core/objects/Object.hpp"

namespace uu {
namespace net {

/**
 * A vertex in a graph.
 */
class
    Vertex :
    public core::Object,
    public std::enable_shared_from_this<Vertex>
{

  public:

    const std::string name;
    
    typedef std::string key_type;

    /** Constructor. */
    Vertex(
        const std::string& name
    );

    /** Output function, presenting a complete description of the vertex. */
    std::string
    to_string(
    ) const;

    key_type
    key() const;

};

std::ostream&
operator<<(std::ostream& os, const Vertex& v);

}
}

#endif
