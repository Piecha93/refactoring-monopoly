cmake_minimum_required(VERSION 3.5)
project(refactoring)

set(CMAKE_CXX_STANDARD 14)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(refactoring main.cpp)



# UT
add_executable(runUnitTests ut/Ut.cpp)
target_link_libraries(runUnitTests gtest gtest_main pthread)

add_test( runUnitTests runUnitTests )