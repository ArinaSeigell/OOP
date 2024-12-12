# Проект: Иерархия Существ

Этот проект демонстрирует иерархию наследования существ с использованием множественного наследования в C++. Каждое существо обладает определенными способностями, такими как плавание, ходьба и полет. Проект реализован с использованием CMake для сборки.

Структура проекта
- include/: Содержит заголовочные файлы (.hpp) для классов существ.

- src/: Содержит исходные файлы (.cpp) для реализации классов и main.cpp.

- build.sh: Скрипт для сборки проекта.

- CMakeLists.txt: Файл для настройки сборки с использованием CMake.

## Классы существ
- GenericCreature: Базовый класс для всех существ.

- OceanCreature: Наследник, умеющий плавать.

- TerrestrialCreature: Наследник, умеющий ходить.

- Amphibious: Наследник, умеющий плавать и ходить.

- Bird: Наследник, умеющий ходить и летать.

- Waterfowl: Наследник, умеющий ходить, летать и плавать.

## Как собрать проект
Убедитесь, что у вас установлены необходимые инструменты:

1. CMake (версия 3.10 или выше)

2. Компилятор C++ (например, GCC или Clang)

Сделайте скрипт build.sh исполняемым:

```bash
chmod +x build.sh
```

```bash
./build.sh
```


```bash
./CreatureHierarchy
```

## Пример вывода

```CLI
Fish (OceanCreature) is: Swimming...
Frog (Amphibious) is: Swimming...
Frog (Amphibious) is: Walking...
Cat (TerrestrialCreature) is: Walking...
Bird is: Walking...
Bird is: Flying...
Duck (Waterfowl) is: Walking...
Duck (Waterfowl) is: Flying...
Duck (Waterfowl) is: Swimming...
```