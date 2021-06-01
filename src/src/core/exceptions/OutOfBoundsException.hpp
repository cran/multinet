#ifndef UU_CORE_EXCEPTIONS_OUTOFBOUNDSEXCEPTION_H_
#define UU_CORE_EXCEPTIONS_OUTOFBOUNDSEXCEPTION_H_

#include <exception>
#include <string>

namespace uu {
namespace core {

/**
 * Exception thrown when an object required by a function does not exist.
 */
class
    OutOfBoundsException: public std::exception
{

  public:

    /**
     * @param value a string indicating type and name (or other identifier) of the element not found
     */
    OutOfBoundsException(
        std::string value
    );

    OutOfBoundsException(
    )
    throw ();

    /**
     * Information about the exception.
     * @return an error message describing the occurred problem
     */
    virtual
    const char*
    what(
    ) const
    throw();

  private:

    std::string value;

};

}
}

#endif
