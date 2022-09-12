#include "core/utils/string.hpp"

#include <algorithm>
#include <cctype>

namespace uu {
namespace core {

void
to_upper_case(std::string& s)
{
    /****************************/
    // C(++), I hate you...
    int (*touppercase)(int) = std::toupper;
    /****************************/
    std::transform(s.begin(), s.end(), s.begin(), touppercase);
}


void
to_xml(
    std::string& in
)
{
    size_t pos = 0;

    while ((pos = in.find("&", pos)) != std::string::npos)
    {
        in.replace(pos, 1, "&amp;");
        pos += 5;
    }
    
    pos = 0;

    while ((pos = in.find("<", pos)) != std::string::npos)
    {
        in.replace(pos, 1, "&lt;");
        pos += 4;
    }
    
    pos = 0;

    while ((pos = in.find(">", pos)) != std::string::npos)
    {
        in.replace(pos, 1, "&gt;");
        pos += 4;
    }
}

}
}
