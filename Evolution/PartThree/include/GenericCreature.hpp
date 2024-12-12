#ifndef GENERICCREATURE_HPP
#define GENERICCREATURE_HPP

class GenericCreature {
public:
    virtual ~GenericCreature() {}
    virtual void eat() = 0; // Pure virtual function
};

#endif // GENERICCREATURE_HPP