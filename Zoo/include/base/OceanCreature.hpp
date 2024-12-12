#ifndef OCEANCREATURE_HPP
#define OCEANCREATURE_HPP

#include "GenericCreature.hpp"
#include <iostream>

class OceanCreature : public virtual GenericCreature {
public:
    void swim() { std::cout << "Swimming...\n" << std::endl; }
    void eat(const std::string& food) override { std::cout << "I eat plankton!\n" << std::endl; }
};

#endif // OCEANCREATURE_HPP