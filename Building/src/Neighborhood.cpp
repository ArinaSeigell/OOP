#include "Neighborhood.hpp"
#include <iostream>

Neighborhood::Neighborhood(Developer* dev, int num_houses) {
    for (int i = 0; i < num_houses; ++i) {
        houses.push_back(dev->BuildHouse());
    }
}

Neighborhood::~Neighborhood() {
    for (House* house : houses) {
        delete house;
    }
}

void Neighborhood::display() const {
    for (House* house : houses) {
        std::cout << "House type: " << house->get_type() << std::endl;
    }
}