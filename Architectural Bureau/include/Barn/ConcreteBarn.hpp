#ifndef CONCRETEBARN_HPP
#define CONCRETEBARN_HPP

#include "Barn.hpp"

class ConcreteBarn : public Barn {
public:
    std::string get_type() const override { return "Concrete Barn"; }
};

#endif // CONCRETEBARN_HPP