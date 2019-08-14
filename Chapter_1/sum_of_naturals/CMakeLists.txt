cmake_minimum_required(VERSION 3.10.2)
project(sum_of_naturals)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(sum_of_naturals ${PROJECT_SOURCE_DIR}/main.cpp)
