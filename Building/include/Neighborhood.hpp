#ifndef NEIGHBORHOOD_HPP
#define NEIGHBORHOOD_HPP

#include <vector>
#include "Developer.hpp"
#include "House.hpp"

class Neighborhood {
private:
    std::vector<House*> houses;
public:
    Neighborhood(Developer* dev, int num_houses);
    ~Neighborhood();
    void display() const;
};

#endif // NEIGHBORHOOD_HPP