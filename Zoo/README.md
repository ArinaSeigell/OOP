# Проект: Зоопарк
## Описание проекта
Этот проект демонстрирует иерархию наследования существ с использованием полиморфизма в C++ для модели зоопарка. Каждое существо обладает уникальным поведением при поглощении пищи, реализованным через виртуальную функцию eat(). Проект использует CMake для сборки.

Структура проекта
- include/

- base/

Содержит базовые классы, такие как GenericCreature, OceanCreature, TerrestrialCreature, Amphibious, Bird, Waterfowl.

- zoo/

Содержит классы конкретных существ, таких как Cat, Dog, Dolphin, Duck, Frog, Pigeon, Parrot, Shark, Swan, Salamander.

- src/

Содержит файлы исходного кода, включая реализацию фабричного метода и главную программу (main.cpp).

- build.sh

Скрипт для сборки проекта с использованием CMake.

## Классы существ
- GenericCreature

- Shark

- Dolphin

- Waterfowl

- Duck

- Swan

- Bird

- Pigeon

- Parrot

- Dog

- Cat

- Frog

- Salamander

### Инструкции по сборке проекта
Убедитесь, что у вас установлены необходимые инструменты:

1. CMake (версия 3.10 или выше)

2. Компилятор C++ (например, GCC или Clang)

Сделайте скрипт build.sh исполняемым:

```bash
chmod +x build.sh
```

Запустите скрипт для сборки проекта:

```bash
./build.sh
```

Запустите исполняемый файл:

```bash
./FeedZoo
```

## Пример вывода программы

```CLI
Frog eats insects.
Frog eats insects.
Frog eats insects.
Salamander eats worms.
Salamander eats worms.
Salamander eats worms.
Pigeon eats seeds.
Pigeon eats seeds.
Pigeon eats seeds.
Parrot eats fruits.
Parrot eats fruits.
Parrot eats fruits.
Duck eats grains.
Duck eats grains.
Duck eats grains.
Swan eats aquatic plants.
Swan eats aquatic plants.
Swan eats aquatic plants.
Shark eats fish.
Shark eats fish.
Shark eats fish.
Dolphin eats squid.
Dolphin eats squid.
Dolphin eats squid.
Dog eats meat.
Dog eats meat.
Dog eats meat.
Cat eats fish.
Cat eats fish.
Cat eats fish.

```

### Диаграмма наследования между классами

```CLI
GenericCreature
├── OceanCreature
│   ├── Shark
│   ├── Dolphin
│   └── Waterfowl
│       ├── Duck
│       └── Swan
├── TerrestrialCreature
│   ├── Bird
│   │   ├── Pigeon
│   │   └── Parrot
│   ├── Dog
│   ├── Cat
│   └── Amphibious
│       ├── Frog
│       └── Salamander
```