#ifndef BRICKBARN_HPP
#define BRICKBARN_HPP

#include "Barn.hpp"

class BrickBarn : public Barn {
public:
    std::string get_type() const override { return "Brick Barn"; }
};

#endif // BRICKBARN_HPP