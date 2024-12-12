#ifndef BRICKDEVELOPER_HPP
#define BRICKDEVELOPER_HPP

#include "Developer.hpp"
#include "BrickHouse.hpp"

class BrickDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new BrickHouse(); }
};

#endif // BRICKDEVELOPER_HPP