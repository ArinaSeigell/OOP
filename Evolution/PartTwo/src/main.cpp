// main.cpp
#include "Waterfowl.hpp"
#include "Amphibious.hpp"
#include "TerrestrialCreature.hpp"
#include "Bird.hpp"
#include "OceanCreature.hpp"
#include <iostream>

int main() {
    // OceanCreature (Fish)
    std::cout << "Fish (OceanCreature) is: ";
    OceanCreature fish;
    fish.swim();

    // Amphibious (Frog)
    std::cout << "Frog (Amphibious) is: ";
    Amphibious frog;
    frog.swim();
    std::cout << "Frog (Amphibious) is: ";
    frog.walk();

    // TerrestrialCreature (Cat)
    std::cout << "Cat (TerrestrialCreature) is: ";
    TerrestrialCreature cat;
    cat.walk();

    // Bird
    std::cout << "Bird is: ";
    Bird bird;
    bird.walk();
    std::cout << "Bird is: ";
    bird.fly();

    // Waterfowl (Duck)
    std::cout << "Duck (Waterfowl) is: ";
    Waterfowl duck;
    duck.walk();
    std::cout << "Duck (Waterfowl) is: ";
    duck.fly();
    std::cout << "Duck (Waterfowl) is: ";
    duck.swim();

    return 0;
}