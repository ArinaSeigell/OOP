#ifndef DOLPHIN_HPP
#define DOLPHIN_HPP

#include "base/OceanCreature.hpp"

class Dolphin : public OceanCreature {
public:
    void eat(const std::string& food)  {
        std::cout << "Dolphin eats squid." << std::endl;
    }
};

#endif // DOLPHIN_HPP