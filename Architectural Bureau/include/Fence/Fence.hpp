#ifndef FENCE_HPP
#define FENCE_HPP

#include <string>

class Fence {
public:
    virtual ~Fence() {}
    virtual std::string get_type() const = 0;
};

#endif // FENCE_HPP