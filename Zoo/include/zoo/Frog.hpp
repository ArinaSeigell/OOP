#ifndef FROG_HPP
#define FROG_HPP

#include "base/Amphibious.hpp"

class Frog : public Amphibious {
public:
    void eat(const std::string& food)  {
        std::cout << "Frog eats insects." << std::endl;
    }
};

#endif // FROG_HPP