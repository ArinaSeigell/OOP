#ifndef DOG_HPP
#define DOG_HPP

#include "base/TerrestrialCreature.hpp"

class Dog : public TerrestrialCreature {
public:
    void eat(const std::string& food)  {
        std::cout << "Dog eats meat." << std::endl;
    }
};

#endif // DOG_HPP