#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include "House.hpp"

class Developer {
public:
    virtual ~Developer() {}
    virtual House* BuildHouse() const = 0;
};

#endif // DEVELOPER_HPP