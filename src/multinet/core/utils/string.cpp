#include "core/utils/string.h"

#include <algorithm>

namespace uu {
namespace core {

void
to_upper_case(std::string& s)
{
    /****************************/
    // C(++), I hate you...
    int (*touppercase)(int) = std::toupper;
    /****************************/
    std::transform(s.begin(),s.end(),s.begin(),touppercase);
}

}
}
