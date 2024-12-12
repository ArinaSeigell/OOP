#ifndef BRICKHOUSE_HPP
#define BRICKHOUSE_HPP

#include "House.hpp"

class BrickHouse : public House {
public:
    std::string get_type() const override { return "Brick"; }
};

#endif // BRICKHOUSE_HPP