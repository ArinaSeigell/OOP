#ifndef CREATURECREATOR_HPP
#define CREATURECREATOR_HPP

#include "base/GenericCreature.hpp"
#include <string>

class CreatureCreator {
public:
    static GenericCreature* createCreature(const std::string& type);
};

#endif // CREATURECREATOR_HPP