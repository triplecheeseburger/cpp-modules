cmake_minimum_required(VERSION 3.21)
project(module01)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)

add_executable(module01
        ex00/main.cpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp
        ex00/Zombie.cpp
        ex00/Zombie.hpp)
