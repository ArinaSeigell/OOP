#ifndef DUCK_HPP
#define DUCK_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Duck : public GenericCreature {
public:
    std::string getName() const override { return "Duck"; }
    void eat() override { std::cout << "insects and plants" << std::endl; }
};

#endif // DUCK_HPP