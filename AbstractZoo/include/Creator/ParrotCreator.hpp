#ifndef PARROTCREATOR_HPP
#define PARROTCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Parrot.hpp"

class ParrotCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Parrot>(new Parrot());
    }
};

#endif // PARROTCREATOR_HPP