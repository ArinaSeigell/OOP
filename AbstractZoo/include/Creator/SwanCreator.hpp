#ifndef SWANCREATOR_HPP
#define SWANCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Swan.hpp"

class SwanCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Swan>(new Swan());
    }
};

#endif // SWANCREATOR_HPP