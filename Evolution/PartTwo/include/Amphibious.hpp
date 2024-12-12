// Amphibious.hpp
#ifndef AMPHIBIOUS_HPP
#define AMPHIBIOUS_HPP

#include "OceanCreature.hpp"
#include "TerrestrialCreature.hpp"

class Amphibious : public OceanCreature, public TerrestrialCreature {
public:
    using TerrestrialCreature::walk;
};

#endif // AMPHIBIOUS_HPP