cmake_minimum_required(VERSION 3.10)
project(Task0)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Include directories
include_directories(include)

# Collect source files
file(GLOB SOURCES "src/*.cpp")

# Create object libraries
add_library(Task0_objects OBJECT ${SOURCES})

# Create the executable using the object files
add_executable(Task0 $<TARGET_OBJECTS:Task0_objects>)

# Optionally, you can add a custom target to show the object files
add_custom_target(ShowObjectFiles
    COMMAND ${CMAKE_COMMAND} -E echo "Object files created:"
    COMMAND ${CMAKE_COMMAND} -E echo "$<TARGET_OBJECTS:Task0_objects>"
    DEPENDS Task0_objects
)