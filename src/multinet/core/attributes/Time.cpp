#include "core/attributes/Time.h"
#include "core/attributes/conversion.h"

namespace uu {
namespace core {


std::ostream&
operator<<(
    std::ostream& os,
    const Time& t
)
{
    os << to_string(t, kDEFAULT_TIME_FORMAT);
    return os;
}


}
}

