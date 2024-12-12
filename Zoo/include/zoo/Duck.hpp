#ifndef DUCK_HPP
#define DUCK_HPP

#include "base/Waterfowl.hpp"

class Duck : public Waterfowl {
public:
    void eat(const std::string& food)  {
        std::cout << "Duck eats grains." << std::endl;
    }
};

#endif // DUCK_HPP