
cmake_minimum_required(VERSION 3.5.1)

project(ExampleCpp CXX)
set (CMAKE_CXX_STANDARD 17)

add_executable(ExampleCpp main.cpp Polygon.cpp Rectangle.cpp Triangle.cpp)
target_compile_definitions(ExampleCpp PRIVATE $<IF:$<BOOL:${RELEASE_DEFINE}>, RELEASE_DEFINE, DEBUG_DEFINE>)
