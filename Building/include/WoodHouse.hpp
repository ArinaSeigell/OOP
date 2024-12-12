#ifndef WOODHOUSE_HPP
#define WOODHOUSE_HPP

#include "House.hpp"

class WoodHouse : public House {
public:
    std::string get_type() const override { return "Wood"; }
};

#endif // WOODHOUSE_HPP