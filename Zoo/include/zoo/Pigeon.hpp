#ifndef PIGEON_HPP
#define PIGEON_HPP

#include "base/Bird.hpp"

class Pigeon : public Bird {
public:
    void eat(const std::string& food)  {
        std::cout << "Pigeon eats seeds." << std::endl;
    }
};

#endif // PIGEON_HPP