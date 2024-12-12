// Waterfowl.hpp
#ifndef WATERFOWL_HPP
#define WATERFOWL_HPP

#include "Bird.hpp"
#include "OceanCreature.hpp"

class Waterfowl : public Bird, public OceanCreature {
public:
    using OceanCreature::swim;
};

#endif // WATERFOWL_HPP