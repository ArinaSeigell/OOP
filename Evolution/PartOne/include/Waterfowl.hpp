#ifndef WATERFOWL_HPP
#define WATERFOWL_HPP

#include "Bird.hpp"

class Waterfowl : public Bird {
public:
  using OceanCreature::swim;
};

#endif // WATERFOWL_HPP