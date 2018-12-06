/**
 * History:
 * - 2018.08.11 file created
 */

#ifndef UU_CORE_EXCEPTIONS_ASSERT_H_
#define UU_CORE_EXCEPTIONS_ASSERT_H_

#include "core/exceptions/NullPtrException.h"
#include <string>

namespace uu {
namespace core {

/**
 * Throws a NullPointerException when the first parameter is null.
 * @paran function the name of the function where the exception is called
 * @param par the name of the function parameter
 * with the second parameter as a message.
 */
void
assert_not_null(
    const void* ptr,
    std::string function,
    std::string par
);

}
}

#endif
