#ifndef DUCKCREATOR_HPP
#define DUCKCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Duck.hpp"

class DuckCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Duck>(new Duck());
    }
};

#endif // DUCKCREATOR_HPP