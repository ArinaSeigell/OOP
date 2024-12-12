#ifndef WOODFENCE_HPP
#define WOODFENCE_HPP

#include "Fence.hpp"

class WoodFence : public Fence {
public:
    std::string get_type() const override { return "Wood Fence"; }
};

#endif // WOODFENCE_HPP