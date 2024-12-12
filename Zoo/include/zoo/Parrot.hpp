#ifndef PARROT_HPP
#define PARROT_HPP

#include "base/Bird.hpp"

class Parrot : public Bird {
public:
    void eat(const std::string& food)  {
        std::cout << "Parrot eats fruits." << std::endl;
    }
};

#endif // PARROT_HPP