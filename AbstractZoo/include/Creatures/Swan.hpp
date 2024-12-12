#ifndef SWAN_HPP
#define SWAN_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Swan : public GenericCreature {
public:
    std::string getName() const override { return "Swan"; }
    void eat() override { std::cout << "aquatic plants" << std::endl; }
};

#endif // SWAN_HPP