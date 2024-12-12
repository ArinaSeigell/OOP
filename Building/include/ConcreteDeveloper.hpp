#ifndef CONCRETETDEVELOPER_HPP
#define CONCRETETDEVELOPER_HPP

#include "Developer.hpp"
#include "ConcreteHouse.hpp"

class ConcreteDeveloper : public Developer {
public:
    House* BuildHouse() const override { return new ConcreteHouse(); }
};

#endif // CONCRETETDEVELOPER_HPP