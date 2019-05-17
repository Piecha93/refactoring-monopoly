cmake_minimum_required(VERSION 3.5)
project(refactoring)

set(CMAKE_CXX_STANDARD 14)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(refactoring main.cpp MonopolyGame.cpp MonopolyGame.h Player.cpp Player.h Board.cpp Board.h
        squares/Square.h Die.cpp Die.h squares/SquareIterator.cpp squares/SquareIterator.h squares/SquareDeposit.cpp squares/SquareDeposit.h squares/SquareCash.h
        squares/SquareCash.cpp squares/SquareStart.h squares/SquareStart.cpp squares/SquareTax.cpp squares/SquareTax.h squares/SquareProperty.cpp squares/SquareProperty.hpp)



# UT
add_executable(runUnitTests ut/Ut.cpp)
target_link_libraries(runUnitTests gtest gtest_main pthread)

add_test( runUnitTests runUnitTests )