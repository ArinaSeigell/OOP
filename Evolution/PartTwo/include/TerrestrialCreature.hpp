// TerrestrialCreature.hpp
#ifndef TERRESTRIALCREATURE_HPP
#define TERRESTRIALCREATURE_HPP

#include "GenericCreature.hpp"
#include <iostream>

class TerrestrialCreature : virtual public GenericCreature {
public:
    void walk() { 
      std::cout << "Walking...\n" << std::endl; 
      }
};

#endif // TERRESTRIALCREATURE_HPP