#ifndef SWAN_HPP
#define SWAN_HPP

#include "base/Waterfowl.hpp"

class Swan : public Waterfowl {
public:
    void eat(const std::string& food)  {
        std::cout << "Swan eats aquatic plants." << std::endl;
    }
};

#endif // SWAN_HPP