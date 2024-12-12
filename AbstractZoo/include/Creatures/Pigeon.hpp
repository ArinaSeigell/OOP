#ifndef PIGEON_HPP
#define PIGEON_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Pigeon : public GenericCreature {
public:
    std::string getName() const override { return "Pigeon"; }
    void eat() override { std::cout << "seeds" << std::endl; }
};

#endif // PIGEON_HPP