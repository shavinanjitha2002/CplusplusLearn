#include <stdexcept>

#ifndef ZERO_DIVIDE_EXCEPTION_H
#define ZERO_DIVIDE_EXCEPTION_H

class DivideByZeroException : public std::runtime_error{
public:
    // constructor of exception
    DivideByZeroException() : 
        std::runtime_error{"attept to divide by zero"} {}
};

#endif