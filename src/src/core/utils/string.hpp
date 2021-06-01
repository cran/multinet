#ifndef UU_CORE_UTILS_STRING_H_
#define UU_CORE_UTILS_STRING_H_

#include <string>

namespace uu {
namespace core {


/** Modifies the input string in place, making it uppercase. */
void
to_upper_case(
    std::string& s
);

/** Modifies the input string in place, escaping the characters < > and &. */
void
to_xml(
    std::string& in
);

}
}

#endif
