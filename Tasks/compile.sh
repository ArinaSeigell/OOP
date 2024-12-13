#!/bin/bash

# Список файлов, которые нужно скомпилировать
files=("Task1.cpp" "Task2.cpp" "Task3.cpp" "Task4.cpp")

# Перебираем каждый файл
for file in "${files[@]}"; do
    # Извлекаем имя задачи (например, "Task1" из "Task1.cpp")
    task_name="${file%.cpp}"

    # Компилируем файл с помощью g++
    g++ -o "${task_name}" "${file}"

    # Проверяем, успешно ли прошла компиляция
    if [ $? -eq 0 ]; then
        echo "Compilation of ${file} completed successfully. Executable: ${task_name}"
    else
        echo "Compilation of ${file} failed."
    fi
done