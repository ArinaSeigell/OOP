#ifndef DOG_HPP
#define DOG_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Dog : public GenericCreature {
public:
    std::string getName() const override { return "Dog"; }
    void eat() override { std::cout << "meat" << std::endl; }
};

#endif // DOG_HPP