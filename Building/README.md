# Проект: Строительство Домов с Использованием Паттерна Фабричный Метод
Этот проект демонстрирует использование паттерна фабричного метода для постройки различных типов домов. Он показывает иерархию классов и применение паттерна проектирования фабричного метода в C++.

## Структура проекта
- include/

Содержит заголовочные файлы (.hpp) для классов домов и застройщиков.

- src/

Содержит исходный файл (.cpp) для реализации класса Neighborhood и main.cpp.

- CMakeLists.txt

Файл конфигурации для сборки проекта с помощью CMake.

- build.sh

Скрипт для сборки проекта.

## Классы
### House

Абстрактный базовый класс, представляющий дом.

#### WoodHouse

Представляет деревянный дом.

#### BrickHouse

Представляет кирпичный дом.

#### ConcreteHouse

Представляет бетонный дом.

### Developer

Абстрактный базовый класс с фабричным методом BuildHouse.

#### WoodDeveloper

Специализируется на строительстве WoodHouse.

#### BrickDeveloper

Специализируется на строительстве BrickHouse.

#### ConcreteDeveloper

Специализируется на строительстве ConcreteHouse.

### Neighborhood

Представляет квартал, содержащий коллекцию домов определенного типа.

Как собрать проект
Убедитесь, что у вас установлены необходимые инструменты:

1. CMake (версия 3.10 или выше)

2. C++ компилятор (например, GCC или Clang)

Сделайте скрипт build.sh исполняемым:

```bash
chmod +x build.sh
```

```bash
./build.sh
```

```bash
./House_Simulation
```

## Пример вывода программы:

```bash
Type        | Planned Houses
------------------------------------
Wood        | 5             
Brick       | 5             
Concrete    | 14            

Деревянный квартал:
House type: Wood
House type: Wood
House type: Wood
House type: Wood
House type: Wood
Кирпичный квартал:
House type: Brick
House type: Brick
House type: Brick
House type: Brick
House type: Brick
Бетонный квартал:
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
House type: Concrete
```