#ifndef DOLPHINCREATOR_HPP
#define DOLPHINCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Dolphin.hpp"

class DolphinCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Dolphin>(new Dolphin());
    }
};

#endif // DOLPHINCREATOR_HPP