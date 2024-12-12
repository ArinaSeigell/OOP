#ifndef FROGCREATOR_HPP
#define FROGCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Frog.hpp"

class FrogCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Frog>(new Frog());
    }
};

#endif // FROGCREATOR_HPP