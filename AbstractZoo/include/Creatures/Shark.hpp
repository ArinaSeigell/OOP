#ifndef SHARK_HPP
#define SHARK_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Shark : public GenericCreature {
public:
    std::string getName() const override { return "Shark"; }
    void eat() override { std::cout << "fish" << std::endl; }
};

#endif // SHARK_HPP