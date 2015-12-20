#pragma once

#include <exception>

class PMDError : public std::exception {
public:
    virtual const char* what() const throw() {
        return "PMD Error.";
    }
};
