#ifndef SHARK_HPP
#define SHARK_HPP

#include "base/OceanCreature.hpp"

class Shark : public OceanCreature {
public:
    void eat(const std::string& food)  {
        std::cout << "Shark eats fish." << std::endl;
    }
};

#endif // SHARK_HPP