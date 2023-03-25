cmake_minimum_required(VERSION 3.17)
project(C___Streams)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Streams
        credit_inquery_program/inquery_display.cpp
        credit_inquery_program/insert_employee.cpp
        file_processing/file_input.cpp
        file_processing/file_output.cpp
        basic_1.cpp
        basic_2.cpp
        eof.cpp)
