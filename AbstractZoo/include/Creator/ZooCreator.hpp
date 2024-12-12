#ifndef ZOOCREATOR_HPP
#define ZOOCREATOR_HPP

#include "Creatures/GenericCreature.hpp"
#include <memory>

class ZooCreator {
public:
    virtual ~ZooCreator() = default;
    virtual std::unique_ptr<GenericCreature> createCreature() = 0;
};

#endif // ZOOCREATOR_HPP