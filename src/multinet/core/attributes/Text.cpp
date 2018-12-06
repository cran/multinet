#include "core/attributes/Text.h"

namespace uu {
namespace core {

std::ostream&
operator<<(
    std::ostream& os,
    const Text& text
)
{
    os << text.text;
    return os;
}


}
}

