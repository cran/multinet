#include "core/exceptions/FileNotFoundException.hpp"

namespace uu {
namespace core {

FileNotFoundException::FileNotFoundException(std::string value)
{
    FileNotFoundException::value = "File not found: " + value;
}

FileNotFoundException::~FileNotFoundException() throw() {}

const char*
FileNotFoundException::what() const throw()
{
    return value.data();
}

} 
}
