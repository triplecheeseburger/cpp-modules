cmake_minimum_required(VERSION 3.21)
project(module01)

set(CMAKE_CXX_STANDARD 98)

include_directories(ex00)

add_executable(ex00
        ex00/main.cpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp
        ex00/Zombie.cpp
        ex00/Zombie.hpp)

include_directories(ex01)

add_executable(ex01
        ex01/main.cpp
        ex01/Zombie.cpp
        ex01/zombieHorde.cpp
        ex01/Zombie.hpp)

add_executable(ex02
        ex02/main.cpp)