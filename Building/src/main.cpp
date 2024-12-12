#include <iostream>
#include <cstdlib> // для rand()
#include <ctime>   // для time()
#include "Neighborhood.hpp"
#include "WoodDeveloper.hpp"
#include "BrickDeveloper.hpp"
#include "ConcreteDeveloper.hpp"
#include <iomanip> // For std::setw and std::left

// Function definition
int get_random_houses() {
    return 4 + rand() % 13; // 4 до 16
}

int main() {
    // Задаем seed для генератора случайных чисел, используя текущее время
    srand(static_cast<unsigned int>(time(nullptr)));

    // Создаем объекты разработчиков, каждый специализируется на строительстве определенного типа домов
    WoodDeveloper wood_dev;
    BrickDeveloper brick_dev;
    ConcreteDeveloper concrete_dev;

    // Получаем количество домов для каждого квартала
    int wood_house_count = get_random_houses();
    int brick_house_count = get_random_houses();
    int concrete_house_count = get_random_houses();

    // Создаем кварталы с заданным количеством домов, используя соответствующих разработчиков
    Neighborhood wood_neighborhood(&wood_dev, wood_house_count);
    Neighborhood brick_neighborhood(&brick_dev, brick_house_count);
    Neighborhood concrete_neighborhood(&concrete_dev, concrete_house_count);

    // Выводим таблицу с запланированным количеством домов в каждом квартале
    std::cout << std::left << std::setw(12) << "Type" << "| " << std::setw(14) << "Planned Houses" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << std::left << std::setw(12) << "Wood" << "| " << std::setw(14) << wood_house_count << std::endl;
    std::cout << std::left << std::setw(12) << "Brick" << "| " << std::setw(14) << brick_house_count << std::endl;
    std::cout << std::left << std::setw(12) << "Concrete" << "| " << std::setw(14) << concrete_house_count << std::endl;

    // Выводим информацию о домах в каждом квартале
    std::cout << std::endl << "Деревянный квартал:" << std::endl;
    wood_neighborhood.display();
    std::cout << "Кирпичный квартал:" << std::endl;
    brick_neighborhood.display();
    std::cout << "Бетонный квартал:" << std::endl;
    concrete_neighborhood.display();

    return 0;
}

