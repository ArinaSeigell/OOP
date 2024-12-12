#ifndef DOGCREATOR_HPP
#define DOGCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Dog.hpp"

class DogCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Dog>(new Dog());
    }
};

#endif // DOGCREATOR_HPP