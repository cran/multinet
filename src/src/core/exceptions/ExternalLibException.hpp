#ifndef UU_CORE_EXCEPTIONS_EXTERNALLIBEXCEPTION_H_
#define UU_CORE_EXCEPTIONS_EXTERNALLIBEXCEPTION_H_

#include <exception>
#include <string>

namespace uu {
namespace core {

/**
 * Exception thrown when a call to an external library fails.
 */
class
    ExternalLibException: public std::exception
{

  public:

    /**
     * @param msg information about the problem
     */
    ExternalLibException(
        std::string msg
    );

    ~ExternalLibException(
    ) throw (
    );

    /**
     * Information about the exception.
     * @return an error message describing the occurred problem
     */
    virtual
    const char*
    what(
    ) const throw(
    );

  private:

    std::string value;

};


}
}

#endif
