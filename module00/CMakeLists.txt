cmake_minimum_required(VERSION 3.21)
project(module00)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex01)

add_executable(ex00
        ex00/megaphone.cpp)

add_executable(ex01
        ex01/contact.cpp
        ex01/contact.hpp
        ex01/main.cpp
        ex01/phonebook.cpp
        ex01/phonebook.hpp)

add_executable(ex02
        ex02/Account.cpp
        ex02/Account.hpp
        ex02/tests.cpp)

