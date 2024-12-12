#ifndef FROG_HPP
#define FROG_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Frog : public GenericCreature {
public:
    std::string getName() const override { return "Frog"; }
    void eat() override { std::cout << "insects" << std::endl; }
};

#endif // FROG_HPP