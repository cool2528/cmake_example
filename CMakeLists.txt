cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 14)
project(hello)
add_subdirectory(func lib)
add_subdirectory(src bin)
