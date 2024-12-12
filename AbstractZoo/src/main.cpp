#include <iostream>
#include <vector>
#include <memory>
#include "Creator/ZooCreator.hpp"
#include "Creator/SharkCreator.hpp"
#include "Creator/DolphinCreator.hpp"
#include "Creator/DogCreator.hpp"
#include "Creator/CatCreator.hpp"
#include "Creator/DuckCreator.hpp"
#include "Creator/FrogCreator.hpp"
#include "Creator/ParrotCreator.hpp"
#include "Creator/PigeonCreator.hpp"
#include "Creator/SalamanderCreator.hpp"
#include "Creator/SwanCreator.hpp"

int main() {
    std::vector<std::unique_ptr<ZooCreator>> creators;
    creators.push_back(std::unique_ptr<SharkCreator>(new SharkCreator()));
    creators.push_back(std::unique_ptr<DolphinCreator>(new DolphinCreator()));
    creators.push_back(std::unique_ptr<DogCreator>(new DogCreator()));
    creators.push_back(std::unique_ptr<CatCreator>(new CatCreator()));
    creators.push_back(std::unique_ptr<DuckCreator>(new DuckCreator()));
    creators.push_back(std::unique_ptr<FrogCreator>(new FrogCreator()));
    creators.push_back(std::unique_ptr<ParrotCreator>(new ParrotCreator()));
    creators.push_back(std::unique_ptr<PigeonCreator>(new PigeonCreator()));
    creators.push_back(std::unique_ptr<SalamanderCreator>(new SalamanderCreator()));
    creators.push_back(std::unique_ptr<SwanCreator>(new SwanCreator()));

    for (auto& creator : creators) {
        for (int i = 0; i < 3; ++i) {
            auto creature = creator->createCreature();
            std::cout << creature->getName() << " eats: ";
            creature->eat();
        }
        std::cout << std::endl;
    }

    return 0;
}