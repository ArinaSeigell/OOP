cmake_minimum_required(VERSION 3.10)

# Название проекта
project(WordFrequencyCounter)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавление исполняемого файла (ваш основной файл .cpp)
add_executable(WordFrequencyCounter main.cpp)

# Установка необходимых локалей
if(MSVC)
    target_compile_options(WordFrequencyCounter PRIVATE /utf-8)
endif()

# Сообщение об успешной сборке
message("CMake configured project WordFrequencyCounter.")
