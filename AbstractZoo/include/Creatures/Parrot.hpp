#ifndef PARROT_HPP
#define PARROT_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Parrot : public GenericCreature {
public:
    std::string getName() const override { return "Parrot"; }
    void eat() override { std::cout << "fruits and nuts" << std::endl; }
};

#endif // PARROT_HPP