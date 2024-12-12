#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>

class House {
public:
    virtual ~House() {}
    virtual std::string get_type() const = 0;
};

#endif // HOUSE_HPP