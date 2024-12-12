# Проект: Зоопарк с применением паттерна "Абстрактная фабрика"
## Описание проекта
Этот проект демонстрирует использование паттерна "Абстрактная фабрика" для создания иерархии существ, каждый из которых имеет функцию eat(). Проект включает создание зоопарка, где каждое существо является представителем определенного класса, таких как Amphibious, Bird и т.д. Каждому типу существ добавлены не менее двух наследников-представителей класса.

Структура проекта
- include/

Содержит заголовочные файлы (.hpp) для классов существ и фабрик.

- src/

Содержит исходные файлы (.cpp) для реализации классов и main.cpp.

- CMakeLists.txt

Файл конфигурации для сборки проекта с помощью CMake.

- build.sh

Скрипт для сборки проекта.

## Классы и их отношения
### Абстрактные базовые классы
- Creature

Абстрактный базовый класс, представляющий существо с функцией eat().

- Amphibious

Абстрактный класс, наследник Creature, для представления amphibious существ.

- Bird

Абстрактный класс, наследник Creature, для представления птиц.

Конкретные классы
- Crocodile и Alligator

Конкретные классы, наследники Amphibious.

- Pigeon и Parrot

Конкретные классы, наследники Bird.

Фабрики
AbstractFactory

Абстрактный базовый класс для фабрик, создающих семьи связанных объектов.

AmphibiousFactory и BirdFactory

Конкретные фабрики, создающие конкретные виды amphibious существ и птиц.

Применение паттерна "Абстрактная фабрика"
Паттерн "Абстрактная фабрика" применяется для создания различных типов существ без привязки к конкретным классам. Это позволяет легко расширять именованный зоопарк новыми типами существ и их наследниками.

Инструкции по сборке проекта
Убедитесь, что у вас установлены необходимые инструменты:

CMake (версия 3.10 или выше)

C++ компилятор (например, GCC или Clang)

1. Сделайте скрипт build.sh исполняемым:

```bash
chmod +x build.sh
```

2. Запустите сборку проекта:
```bash
./build.sh
```

3. Запустите программу:
```bash
./ZooProject
```

## Пример вывода программы:

```bash
Shark eats: fish
Shark eats: fish
Shark eats: fish

Dolphin eats: small fish
Dolphin eats: small fish
Dolphin eats: small fish

Dog eats: meat
Dog eats: meat
Dog eats: meat

Cat eats: meat
Cat eats: meat
Cat eats: meat

Duck eats: insects and plants
Duck eats: insects and plants
Duck eats: insects and plants

Frog eats: insects
Frog eats: insects
Frog eats: insects

Parrot eats: fruits and nuts
Parrot eats: fruits and nuts
Parrot eats: fruits and nuts

Pigeon eats: seeds
Pigeon eats: seeds
Pigeon eats: seeds

Salamander eats: worms
Salamander eats: worms
Salamander eats: worms

Swan eats: aquatic plants
Swan eats: aquatic plants
Swan eats: aquatic plants
```