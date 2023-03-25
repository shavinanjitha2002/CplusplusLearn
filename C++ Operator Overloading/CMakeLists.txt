cmake_minimum_required(VERSION 3.17)
project(C___Operator_Overloading)

set(CMAKE_CXX_STANDARD 14)

include_directories(complex_number)
include_directories(complex_number/Array)
include_directories(phone_number)

add_executable(C___Operator_Overloading
        complex_number/Array/Array.cpp
        complex_number/Array/Array.h
        complex_number/Array/array_test.cpp
        complex_number/Complex.cpp
        complex_number/complex.h
        complex_number/complex_test.cpp
        phone_number/phone_number_test.cpp
        phone_number/PhoneNumber.cpp
        phone_number/phonenumber.h
        string_operator.cpp)
