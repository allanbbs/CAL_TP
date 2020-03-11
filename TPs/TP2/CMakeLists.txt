cmake_minimum_required(VERSION 3.15)
project(TP2)



set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)



add_executable(TP2 main.cpp Tests/tests.cpp Tests/Labirinth.cpp Tests/Sudoku.cpp)
target_link_libraries(TP2 gtest gtest_main)



