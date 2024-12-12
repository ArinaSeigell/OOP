# Указываем минимальную версию CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(CreatureHierarchy)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 11)

# Добавляем исходные файлы
set(SOURCES
    src/main.cpp
    src/Bird.cpp 
    src/Amphibious.cpp
    src/OceanCreature.cpp
)

# Добавляем исполняемый файл
add_executable(CreatureHierarchy ${SOURCES})

# Указываем директорию для заголовочных файлов
target_include_directories(CreatureHierarchy PUBLIC ${CMAKE_SOURCE_DIR}/include)