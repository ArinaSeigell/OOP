#ifndef BARN_HPP
#define BARN_HPP

#include <string>

class Barn {
public:
    virtual ~Barn() {}
    virtual std::string get_type() const = 0;
};

#endif // BARN_HPP