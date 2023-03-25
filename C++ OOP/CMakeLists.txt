cmake_minimum_required(VERSION 3.21)
project(C___OOP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Destructor)
include_directories(this)
include_directories(Time)

add_executable(C___OOP
        Destructor/Object.cpp
        Destructor/Object.h
        Destructor/object_test.cpp
        Friends/Friends.cpp
        this/Employee.cpp
        this/Employee.h
        this/employee_test.cpp
        Time/Time.cpp
        Time/Time.h
        Time/time_test.cpp)
