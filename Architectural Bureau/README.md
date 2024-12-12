# Проект: Архитектурное Бюро с Использованием Паттерна Абстрактная Фабрика
Этот проект демонстрирует использование паттерна "Абстрактная фабрика" для постройки домов, заборов и сараев в едином архитектурном стиле. Он показывает иерархию классов и применение паттерна проектирования "Абстрактная фабрика" в C++.

## Структура проекта

```bash
.
├── CMakeLists.txt
├── README.md
├── build.sh
├── include
│   ├── Barn
│   │   ├── Barn.hpp
│   │   ├── BrickBarn.hpp
│   │   ├── ConcreteBarn.hpp
│   │   └── WoodBarn.hpp
│   ├── Developer
│   │   ├── BrickDeveloper.hpp
│   │   ├── ConcreteDeveloper.hpp
│   │   ├── Developer.hpp
│   │   └── WoodDeveloper.hpp
│   ├── Fence
│   │   ├── BrickFence.hpp
│   │   ├── ConcreteFence.hpp
│   │   ├── Fence.hpp
│   │   └── WoodFence.hpp
│   └── House
│       ├── BrickHouse.hpp
│       ├── ConcreteHouse.hpp
│       ├── House.hpp
│       └── WoodHouse.hpp
└── src
    └── main.cpp
```

Классы и их обязанности
Продукты
- House (Абстрактный класс): Представляет дом.

- WoodHouse: Деревянный дом.

- BrickHouse: Кирпичный дом.

- ConcreteHouse: Бетонный дом.

- Fence (Абстрактный класс): Представляет забор.

- WoodFence: Деревянный забор.

- BrickFence: Кирпичный забор.

- ConcreteFence: Бетонный забор.

- Barn (Абстрактный класс): Представляет сарай.

- WoodBarn: Деревянный сарай.

- BrickBarn: Кирпичный сарай.

- ConcreteBarn: Бетонный сарай.

## Создатели
Developer (Абстрактный класс): Имеет методы для возведения дома, забора и сарая.

WoodDeveloper: Специализируется на строительстве деревянных домов, заборов и сараев.

BrickDeveloper: Специализируется на строительстве кирпичных домов, заборов и сараев.

ConcreteDeveloper: Специализируется на строительстве бетонных домов, заборов и сараев.

Как собрать и запустить проект
Предварительные требования
CMake (версия 3.10 или выше)

C++ компилятор (например, GCC или Clang)

### Сборка проекта
1. Сделайте скрипт build.sh исполняемым:

```bash
chmod +x build.sh
```

2. Запустите скрипт для сборки проекта:

```bash
./build.sh
```

### Запуск проекта
```bash
./ArchitecturalBureau
```

### Пример вывода

```CLI
Welcome to the Architectural Bureau!
Choose developer type:
1. Wood Developer
2. Brick Developer
3. Concrete Developer
Enter your choice (1-3): 3
Constructed:
- Concrete House
- Concrete Fence
- Concrete Barn
```