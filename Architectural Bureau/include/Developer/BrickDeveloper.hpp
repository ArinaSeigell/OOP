#ifndef BRICKDEVELOPER_HPP
#define BRICKDEVELOPER_HPP

#include "Developer.hpp"
#include "House/BrickHouse.hpp"
#include "Fence/BrickFence.hpp"
#include "Barn/BrickBarn.hpp"

class BrickDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new BrickHouse(); }
    Fence* BuildFence() const override { return new BrickFence(); }
    Barn* BuildBarn() const override { return new BrickBarn(); }
};

#endif // BRICKDEVELOPER_HPP