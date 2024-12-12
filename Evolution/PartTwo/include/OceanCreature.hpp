// OceanCreature.hpp
#ifndef OCEANCREATURE_HPP
#define OCEANCREATURE_HPP

#include "GenericCreature.hpp"
#include <iostream>

class OceanCreature : virtual public GenericCreature {
public:
    void swim() { 
      std::cout << "Swimming...\n" << std::endl;
      }
};

#endif // OCEANCREATURE_HPP