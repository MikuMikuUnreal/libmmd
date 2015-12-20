#pragma once

#include "PMDError.h"

class InvalidFileError : public PMDError {
public:
    virtual const char* what() const throw() {
        return "Not PMD file.";
    }
};
