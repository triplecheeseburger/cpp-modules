cmake_minimum_required(VERSION 3.21)
project(module02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/Fixed.cpp
        ex00/Fixed.hpp
        ex00/main.cpp)

add_executable(ex01
        ex01/Fixed.cpp
        ex01/Fixed.hpp
        ex01/main.cpp)

add_executable(ex02
        ex02/Fixed.cpp
        ex02/Fixed.hpp
        ex02/main.cpp)

add_executable(ex03
        ex03/bsp.cpp
        ex03/Point.cpp
        ex03/Point.hpp
        ex03/Fixed.cpp
        ex03/Fixed.hpp
        ex03/main.cpp)
