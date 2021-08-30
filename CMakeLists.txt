cmake_minimum_required(VERSION 3.20)
project(Algorithm_Challenge_Sum_of_Two)

set(CMAKE_CXX_STANDARD 20)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS NO_OUTPUT_DIRS)

add_executable(Algorithm_Challenge_Sum_of_Two main.cpp)
