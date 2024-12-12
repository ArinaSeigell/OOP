#include "CreatureCreator.hpp"
#include "zoo/Frog.hpp"
#include "zoo/Salamander.hpp"
#include "zoo/Pigeon.hpp"
#include "zoo/Parrot.hpp"
#include "zoo/Duck.hpp"
#include "zoo/Swan.hpp"
#include "zoo/Shark.hpp"
#include "zoo/Dolphin.hpp"
#include "zoo/Dog.hpp"
#include "zoo/Cat.hpp"

GenericCreature* CreatureCreator::createCreature(const std::string& type) {
    if (type == "Frog") {
        return new Frog();
    } else if (type == "Salamander") {
        return new Salamander();
    } else if (type == "Pigeon") {
        return new Pigeon();
    } else if (type == "Parrot") {
        return new Parrot();
    } else if (type == "Duck") {
        return new Duck();
    } else if (type == "Swan") {
        return new Swan();
    } else if (type == "Shark") {
        return new Shark();
    } else if (type == "Dolphin") {
        return new Dolphin();
    } else if (type == "Dog") {
        return new Dog();
    } else if (type == "Cat") {
        return new Cat();
    } else {
        return nullptr;
    }
}