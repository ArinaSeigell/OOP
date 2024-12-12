#ifndef TERRESTRIALCREATURE_HPP
#define TERRESTRIALCREATURE_HPP

#include "Amphibious.hpp"

class TerrestrialCreature : protected Amphibious {
public:
  using Amphibious::walk;
};

#endif // TERRESTRIALCREATURE_HPP