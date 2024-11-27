cmake_minimum_required(VERSION 3.16)
project(cmake_example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
