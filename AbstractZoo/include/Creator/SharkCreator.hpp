#ifndef SHARKCREATOR_HPP
#define SHARKCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Shark.hpp"

class SharkCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Shark>(new Shark());
    }
};

#endif // SHARKCREATOR_HPP