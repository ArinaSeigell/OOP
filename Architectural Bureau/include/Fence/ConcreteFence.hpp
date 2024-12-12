#ifndef CONCRETEFENCE_HPP
#define CONCRETEFENCE_HPP

#include "Fence.hpp"

class ConcreteFence : public Fence {
public:
    std::string get_type() const override { return "Concrete Fence"; }
};

#endif // CONCRETEFENCE_HPP