#ifndef PIGEONCREATOR_HPP
#define PIGEONCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Pigeon.hpp"

class PigeonCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Pigeon>(new Pigeon());
    }
};

#endif // PIGEONCREATOR_HPP