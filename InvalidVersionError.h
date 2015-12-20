#pragma once

#include "InvalidFileError.h"

class InvalidVersionError : public InvalidFileError {
public:
    virtual const char* what() const throw() {
        return "Not supported version.";
    }
};
