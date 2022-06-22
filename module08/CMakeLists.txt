cmake_minimum_required(VERSION 3.21)
project(module08)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex00)
include_directories(ex01)
include_directories(ex02)

add_executable(ex00
        ex00/easyfind.hpp
        ex00/main.cpp)

add_executable(ex01
        ex01/main.cpp
        ex01/Span.cpp
        ex01/Span.hpp)

add_executable(ex02
        ex02/main.cpp
        ex02/MutantStack.hpp)

