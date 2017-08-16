#include "exceptions.h"

namespace mlnet {

DuplicateElementException::DuplicateElementException(std::string value) {
	DuplicateElementException::value = "Duplicate element: " + value;
}

DuplicateElementException::~DuplicateElementException() throw () {}

const char* DuplicateElementException::what() const throw() {
    return value.data();
}

}
