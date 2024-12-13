cmake_minimum_required(VERSION 3.10)

project(CircularBufferProject)

# Подключение GoogleTest через внешние зависимости
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

FetchContent_MakeAvailable(googletest)

# Установки C++ стандарта
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Основная библиотека
add_library(CircularBuffer STATIC src/CircularBuffer.cpp)

# Тесты
enable_testing()
add_executable(CircularBufferTests tests/CircularBufferTests.cpp)

target_link_libraries(CircularBufferTests
    PRIVATE
    gtest_main
    CircularBuffer
)

include(GoogleTest)
gtest_discover_tests(CircularBufferTests)
