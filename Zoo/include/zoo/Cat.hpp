#ifndef CAT_HPP
#define CAT_HPP

#include "base/TerrestrialCreature.hpp"

class Cat : public TerrestrialCreature {
public:
    void eat(const std::string& food)  {
        std::cout << "Cat eats fish." << std::endl;
    }
};

#endif // CAT_HPP