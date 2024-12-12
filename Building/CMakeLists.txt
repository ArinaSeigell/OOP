cmake_minimum_required(VERSION 3.10)
project(HouseSimulation)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Include directories
include_directories(include)

# Collect source files
file(GLOB SOURCES "src/*.cpp")

# Create the executable
add_executable(House_Simulation ${SOURCES})