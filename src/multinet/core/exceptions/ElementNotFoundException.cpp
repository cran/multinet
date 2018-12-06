#include "core/exceptions/ElementNotFoundException.h"

namespace uu {
namespace core {

ElementNotFoundException::ElementNotFoundException(std::string value)
{
    ElementNotFoundException::value = "Not found: " + value;
}

ElementNotFoundException::~ElementNotFoundException() throw () {}

const char*
ElementNotFoundException::what() const throw()
{
    return value.data();
}

} // namespace core
} // namespace uu
