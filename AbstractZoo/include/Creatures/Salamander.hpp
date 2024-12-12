#ifndef SALAMANDER_HPP
#define SALAMANDER_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Salamander : public GenericCreature {
public:
    std::string getName() const override { return "Salamander"; }
    void eat() override { std::cout << "worms" << std::endl; }
};

#endif // SALAMANDER_HPP