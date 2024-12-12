#ifndef CATCREATOR_HPP
#define CATCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Cat.hpp"

class CatCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Cat>(new Cat());
    }
};

#endif // CATCREATOR_HPP