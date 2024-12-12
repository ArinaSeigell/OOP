#ifndef WATERFOWL_HPP
#define WATERFOWL_HPP

#include "Bird.hpp"
#include "OceanCreature.hpp"
#include <iostream>

class Waterfowl : public Bird, public OceanCreature {
public:
    void eat(const std::string& food) override { std::cout << "I eat fish and aquatic plants!\n" << std::endl; }
};

#endif // WATERFOWL_HPP