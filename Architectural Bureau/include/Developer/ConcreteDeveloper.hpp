#ifndef CONCRETETDEVELOPER_HPP
#define CONCRETETDEVELOPER_HPP

#include "Developer.hpp"
#include "House/ConcreteHouse.hpp"
#include "Fence/ConcreteFence.hpp"
#include "Barn/ConcreteBarn.hpp"

class ConcreteDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new ConcreteHouse(); }
    Fence* BuildFence() const override { return new ConcreteFence(); }
    Barn* BuildBarn() const override { return new ConcreteBarn(); }
};

#endif // CONCRETETDEVELOPER_HPP