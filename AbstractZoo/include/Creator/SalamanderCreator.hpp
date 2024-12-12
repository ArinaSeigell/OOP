#ifndef SALAMANDERCREATOR_HPP
#define SALAMANDERCREATOR_HPP

#include "ZooCreator.hpp"
#include "Creatures/Salamander.hpp"

class SalamanderCreator : public ZooCreator {
public:
    std::unique_ptr<GenericCreature> createCreature() override {
        return std::unique_ptr<Salamander>(new Salamander());
    }
};

#endif // SALAMANDERCREATOR_HPP