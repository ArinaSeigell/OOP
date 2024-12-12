cmake_minimum_required(VERSION 3.10)
project(CreatureHierarchy)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.hpp")

add_executable(CreatureHierarchy ${SOURCES} ${HEADERS})