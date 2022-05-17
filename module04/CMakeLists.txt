cmake_minimum_required(VERSION 3.21)
project(module04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/Animal.cpp
        ex00/Animal.hpp
        ex00/Cat.cpp
        ex00/Cat.hpp
        ex00/Dog.cpp
        ex00/Dog.hpp
        ex00/main.cpp
        ex00/WrongAnimal.cpp
        ex00/WrongAnimal.hpp
        ex00/WrongCat.cpp
        ex00/WrongCat.hpp)

add_executable(ex01
        ex01/Animal.cpp
        ex01/Animal.hpp
        ex01/Cat.cpp
        ex01/Cat.hpp
        ex01/Dog.cpp
        ex01/Dog.hpp
        ex01/main.cpp
        ex01/WrongAnimal.cpp
        ex01/WrongAnimal.hpp
        ex01/WrongCat.cpp
        ex01/WrongCat.hpp
        ex01/Brain.hpp
        ex01/Brain.cpp)

