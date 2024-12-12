#ifndef WOODDEVELOPER_HPP
#define WOODDEVELOPER_HPP

#include "Developer.hpp"
#include "House/WoodHouse.hpp"
#include "Fence/WoodFence.hpp"
#include "Barn/WoodBarn.hpp"

class WoodDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new WoodHouse(); }
    Fence* BuildFence() const override { return new WoodFence(); }
    Barn* BuildBarn() const override { return new WoodBarn(); }
};

#endif // WOODDEVELOPER_HPP