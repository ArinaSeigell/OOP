#ifndef WOODDEVELOPER_HPP
#define WOODDEVELOPER_HPP

#include "Developer.hpp"
#include "WoodHouse.hpp"

class WoodDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new WoodHouse(); }
};

#endif // WOODDEVELOPER_HPP