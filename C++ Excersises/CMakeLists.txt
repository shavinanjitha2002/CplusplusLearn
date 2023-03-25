cmake_minimum_required(VERSION 3.21)
project(C___Excersises)

set(CMAKE_CXX_STANDARD 14)

include_directories(PackageDelivery)
include_directories(Time)

add_executable(C___Excersises
        PackageDelivery/Package.h
        Time/Time.cpp
        Time/Time.h
        Time/time_test.cpp PackageDelivery/Package.cpp PackageDelivery/package_test.cpp PackageDelivery/package_test.h)
