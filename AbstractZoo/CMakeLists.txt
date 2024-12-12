cmake_minimum_required(VERSION 3.10)
project(ZooProject)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
)

# Header files
file(GLOB HEADERS "include/*.hpp")

# Add executable
add_executable(ZooProject ${SOURCES} ${HEADERS})