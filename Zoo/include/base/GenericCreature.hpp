#ifndef GENERIC_CREATURE_HPP
#define GENERIC_CREATURE_HPP

#include <string>

class GenericCreature {
public:
    virtual void eat(const std::string& food) = 0; // Pure virtual function with parameter
    // Other member functions and data members
};

#endif // GENERIC_CREATURE_HPP