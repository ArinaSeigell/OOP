#ifndef GENERICCREATURE_HPP
#define GENERICCREATURE_HPP

#include <string>
#include <memory>

class GenericCreature {
public:
    virtual ~GenericCreature() = default;
    virtual std::string getName() const = 0;
    virtual void eat() = 0;
};

#endif // GENERICCREATURE_HPP