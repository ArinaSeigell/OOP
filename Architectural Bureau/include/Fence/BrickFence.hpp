#ifndef BRICKFENCE_HPP
#define BRICKFENCE_HPP

#include "Fence.hpp"

class BrickFence : public Fence {
public:
    std::string get_type() const override { return "Brick Fence"; }
};

#endif // BRICKFENCE_HPP