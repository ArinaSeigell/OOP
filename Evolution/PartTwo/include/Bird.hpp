#ifndef BIRD_HPP
#define BIRD_HPP

#include "TerrestrialCreature.hpp"
#include <iostream>

class Bird : public TerrestrialCreature {
public:
  void fly(){
    std::cout << "Flying...\n" << std::endl;
  }
};

#endif // BIRD_HPP