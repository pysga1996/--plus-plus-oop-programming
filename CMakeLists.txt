cmake_minimum_required(VERSION 3.16)
project(oop)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE CLASS_AND_OBJECT_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "class-and-object/*.cpp")
add_executable(class-and-object ${CLASS_AND_OBJECT_SOURCES})