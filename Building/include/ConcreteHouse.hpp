#ifndef CONCRETEHOUSE_HPP
#define CONCRETEHOUSE_HPP

#include "House.hpp"

class ConcreteHouse : public House {
public:
    std::string get_type() const override { return "Concrete"; }
};

#endif // CONCRETEHOUSE_HPP