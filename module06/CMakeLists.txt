cmake_minimum_required(VERSION 3.21)
project(module06)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/Conversion.cpp
        ex00/Conversion.hpp
        ex00/main.cpp)

add_executable(ex01
        ex01/Data.hpp
        ex01/serializes.cpp
        ex01/main.cpp)

add_executable(ex02
        ex02/Base.hpp
        ex02/Base.cpp
        ex02/A.hpp
        ex02/B.hpp
        ex02/C.hpp
        ex02/main.cpp)