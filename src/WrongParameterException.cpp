#include "exceptions.h"

namespace mlnet {

WrongParameterException::WrongParameterException(std::string value) {
	WrongParameterException::value = "Wrong parameter: " + value;
}

WrongParameterException::~WrongParameterException() throw() {}

const char* WrongParameterException::what() const throw() {
    return value.data();
}

}
