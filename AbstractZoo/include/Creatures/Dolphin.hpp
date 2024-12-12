#ifndef DOLPHIN_HPP
#define DOLPHIN_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Dolphin : public GenericCreature {
public:
    std::string getName() const override { return "Dolphin"; }
    void eat() override { std::cout << "small fish" << std::endl; }
};

#endif // DOLPHIN_HPP