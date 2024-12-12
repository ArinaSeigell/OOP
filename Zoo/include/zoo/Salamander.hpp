#ifndef SALAMANDER_HPP
#define SALAMANDER_HPP

#include "base/Amphibious.hpp"

class Salamander : public Amphibious {
public:
    void eat(const std::string& food) {
        std::cout << "Salamander eats worms." << std::endl;
    }
};

#endif // SALAMANDER_HPP