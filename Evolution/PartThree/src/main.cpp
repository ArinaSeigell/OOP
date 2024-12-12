#include <iostream>
#include <vector>
#include "OceanCreature.hpp"
#include "TerrestrialCreature.hpp"
#include "Amphibious.hpp"
#include "Bird.hpp"
#include "Waterfowl.hpp"

int main() {
    // Полиморфное поведение
    GenericCreature* creatures[] = {
        new OceanCreature,    // Морское существо
        new TerrestrialCreature, // Сухопутное существо
        new Amphibious,       // Земно-водное существо
        new Bird,             // Птица
        new Waterfowl         // Водоплавающая птица
    };

    // Вызываем функцию eat() для каждого существа
    // В результате, будет вызвана соответствующая реализация eat() для каждого класса
    for (GenericCreature* creature : creatures) {
        creature->eat();
    }

    // Освобождаем память, выделенную для объектов
    for (GenericCreature* creature : creatures) {
        delete creature;
    }

    // Пример полиморфного поведения
    // Создаем объекты конкретных классов
    OceanCreature ocean1;
    TerrestrialCreature terr1;

    // Указатель базового класса, указывающий на объект производного класса
    GenericCreature* gen_ptr = &ocean1;

    // Вызов eat() через указатель базового класса
    // Из-за полиморфизма, вызывается eat() производного класса OceanCreature
    gen_ptr->eat(); // Вызывает eat() класса OceanCreature

    // Для демонстрации не полиморфного поведения, необходимо наличие не виртуальной функции
    // Например, если бы функция eat() была не виртуальной в GenericCreature,
    // то вызов eat() через указатель GenericCreature* вызвал бы eat() базового класса
    // Однако, в данном случае eat() является виртуальной, поэтому поведение остается полиморфным

    return 0;
}