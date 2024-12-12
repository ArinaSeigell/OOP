#ifndef CAT_HPP
#define CAT_HPP

#include "GenericCreature.hpp"
#include <iostream>

class Cat : public GenericCreature {
public:
    std::string getName() const override { return "Cat"; }
    void eat() override { std::cout << "meat" << std::endl; }
};

#endif // CAT_HPP