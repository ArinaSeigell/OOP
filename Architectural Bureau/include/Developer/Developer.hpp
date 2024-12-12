#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "House/House.hpp"
#include "Fence/Fence.hpp"
#include "Barn/Barn.hpp"

class Developer {
public:
    virtual ~Developer() {}
    virtual House* BuildHouse() const = 0;
    virtual Fence* BuildFence() const = 0;
    virtual Barn* BuildBarn() const = 0;
};

#endif // DEVELOPER_HPP