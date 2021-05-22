cmake_minimum_required(VERSION 3.16)
project(oop)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE CLASS_AND_OBJECT_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "class-and-object/*.cpp")
add_executable(class-and-object ${CLASS_AND_OBJECT_SOURCES})

file(GLOB_RECURSE STATIC_FUNCTION_AND_VARIABLE_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "static-function-and-variable/*.cpp")
add_executable(static-function-and-variable ${STATIC_FUNCTION_AND_VARIABLE_SOURCES})

file(GLOB_RECURSE ENCAPSULATION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "encapsulation/*.cpp")
add_executable(encapsulation ${ENCAPSULATION_SOURCES})

file(GLOB_RECURSE INHERITANCE_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "inheritance/*.cpp")
add_executable(inheritance ${INHERITANCE_SOURCES})

file(GLOB_RECURSE POLYMORPHISM_AND_ABSTRACTION_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "polymorphism-and-abstraction/*.cpp")
add_executable(polymorphism-and-abstraction ${POLYMORPHISM_AND_ABSTRACTION_SOURCES})

file(GLOB_RECURSE OBJECT_RELATIONSHIP_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "object-relationship/*.cpp")
add_executable(object-relationship ${OBJECT_RELATIONSHIP_SOURCES})