cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 14)
aux_source_directory(. FUNC_SRCS)
add_library(Func STATIC ${FUNC_SRCS})