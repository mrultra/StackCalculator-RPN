cmake_minimum_required(VERSION 3.8)
project(StackTemplate)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyStack.hpp)
add_executable(StackTemplate ${SOURCE_FILES})