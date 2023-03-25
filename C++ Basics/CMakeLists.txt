cmake_minimum_required(VERSION 3.17)
project(C___Basics)

set(CMAKE_CXX_STANDARD 14)

include_directories(Accounts)
include_directories(Date)
include_directories(Student)

add_executable(C___Basics
        Accounts/Account.h
        Accounts/AccountTest.cpp
        Date/Date.h
        Date/DateCheck.cpp
        Student/studencheck.cpp
        Student/Student.h
        calculateAverage.cpp
        calculateAverageMod.cpp
        compareValue.cpp
        firstProgram.cpp
        sumOfIntegers.cpp
        test.cpp SemsterGradeBook/GradeBook.h)
