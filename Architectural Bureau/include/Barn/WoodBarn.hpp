#ifndef WODBARN_HPP
#define WODBARN_HPP

#include "Barn.hpp"

class WoodBarn : public Barn {
public:
    std::string get_type() const override { return "Wood Barn"; }
};

#endif // WODBARN_HPP