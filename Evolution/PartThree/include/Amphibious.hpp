#ifndef AMPHIBIOUS_HPP
#define AMPHIBIOUS_HPP

#include "OceanCreature.hpp"
#include "TerrestrialCreature.hpp"
#include <iostream>

class Amphibious : public OceanCreature, public TerrestrialCreature {
public:
    void eat() override { std::cout << "I eat insects and small fish!\n" <<std::endl; }
};

#endif // AMPHIBIOUS_HPP