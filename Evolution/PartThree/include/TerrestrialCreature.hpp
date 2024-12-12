#ifndef TERRESTRIALCREATURE_HPP
#define TERRESTRIALCREATURE_HPP

#include "GenericCreature.hpp"
#include <iostream>

class TerrestrialCreature : public virtual GenericCreature {
public:
    void walk() { std::cout << "Walking...\n" << std::endl; }
    void eat() override { std::cout << "I eat plants!\n" << std::endl; }
};

#endif // TERRESTRIALCREATURE_HPP