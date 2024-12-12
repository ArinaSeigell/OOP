#ifndef WOODHOUSE_HPP
#define WOODHOUSE_HPP

#include "House.hpp"

class WoodHouse : public House {
public:
    std::string get_type() const override { return "Wood House"; }
};

#endif // WOODHOUSE_HPP