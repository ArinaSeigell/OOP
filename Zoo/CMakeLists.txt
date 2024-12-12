cmake_minimum_required(VERSION 3.10)
project(FeedZoo VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(FeedZoo src/CreatureCreator.cpp src/main.cpp)

target_include_directories(FeedZoo PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)