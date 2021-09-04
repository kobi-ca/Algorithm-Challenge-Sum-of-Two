cmake_minimum_required(VERSION 3.20)
project(Algorithm_Challenge_Sum_of_Two)

set(CMAKE_CXX_STANDARD 20)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS NO_OUTPUT_DIRS)

enable_testing()

add_executable(Algorithm_Challenge_Sum_of_Two main.cpp)

add_executable(algo-tests algo-tests.cpp)
# since we are using TARGETS in conan_basic_setup, we can use CONAN_PKG::<name of the package here>
# https://docs.conan.io/en/1.7/integrations/cmake/cmake_generator.html
target_link_libraries(algo-tests PRIVATE CONAN_PKG::gtest CONAN_PKG::fmt CONAN_PKG::range-v3)
add_test(algo-tests algo-tests)
