#include <iostream>
#include "CreatureCreator.hpp"

int main() {
    // Create and feed Frog instances
    GenericCreature* frog1 = CreatureCreator::createCreature("Frog");
    frog1->eat("flies");
    delete frog1;

    GenericCreature* frog2 = CreatureCreator::createCreature("Frog");
    frog2->eat("worms");
    delete frog2;

    GenericCreature* frog3 = CreatureCreator::createCreature("Frog");
    frog3->eat("insects");
    delete frog3;

    // Create and feed Salamander instances
    GenericCreature* salamander1 = CreatureCreator::createCreature("Salamander");
    salamander1->eat("worms");
    delete salamander1;

    GenericCreature* salamander2 = CreatureCreator::createCreature("Salamander");
    salamander2->eat("insects");
    delete salamander2;

    GenericCreature* salamander3 = CreatureCreator::createCreature("Salamander");
    salamander3->eat("small fish");
    delete salamander3;

    // Create and feed Pigeon instances
    GenericCreature* pigeon1 = CreatureCreator::createCreature("Pigeon");
    pigeon1->eat("seeds");
    delete pigeon1;

    GenericCreature* pigeon2 = CreatureCreator::createCreature("Pigeon");
    pigeon2->eat("grains");
    delete pigeon2;

    GenericCreature* pigeon3 = CreatureCreator::createCreature("Pigeon");
    pigeon3->eat("bread");
    delete pigeon3;

    // Create and feed Parrot instances
    GenericCreature* parrot1 = CreatureCreator::createCreature("Parrot");
    parrot1->eat("fruits");
    delete parrot1;

    GenericCreature* parrot2 = CreatureCreator::createCreature("Parrot");
    parrot2->eat("nuts");
    delete parrot2;

    GenericCreature* parrot3 = CreatureCreator::createCreature("Parrot");
    parrot3->eat("seeds");
    delete parrot3;

    // Create and feed Duck instances
    GenericCreature* duck1 = CreatureCreator::createCreature("Duck");
    duck1->eat("grains");
    delete duck1;

    GenericCreature* duck2 = CreatureCreator::createCreature("Duck");
    duck2->eat("worms");
    delete duck2;

    GenericCreature* duck3 = CreatureCreator::createCreature("Duck");
    duck3->eat("aquatic plants");
    delete duck3;

    // Create and feed Swan instances
    GenericCreature* swan1 = CreatureCreator::createCreature("Swan");
    swan1->eat("aquatic plants");
    delete swan1;

    GenericCreature* swan2 = CreatureCreator::createCreature("Swan");
    swan2->eat("grains");
    delete swan2;

    GenericCreature* swan3 = CreatureCreator::createCreature("Swan");
    swan3->eat("small fish");
    delete swan3;

    // Create and feed Shark instances
    GenericCreature* shark1 = CreatureCreator::createCreature("Shark");
    shark1->eat("fish");
    delete shark1;

    GenericCreature* shark2 = CreatureCreator::createCreature("Shark");
    shark2->eat("squid");
    delete shark2;

    GenericCreature* shark3 = CreatureCreator::createCreature("Shark");
    shark3->eat("krill");
    delete shark3;

    // Create and feed Dolphin instances
    GenericCreature* dolphin1 = CreatureCreator::createCreature("Dolphin");
    dolphin1->eat("squid");
    delete dolphin1;

    GenericCreature* dolphin2 = CreatureCreator::createCreature("Dolphin");
    dolphin2->eat("fish");
    delete dolphin2;

    GenericCreature* dolphin3 = CreatureCreator::createCreature("Dolphin");
    dolphin3->eat("shrimp");
    delete dolphin3;

    // Create and feed Dog instances
    GenericCreature* dog1 = CreatureCreator::createCreature("Dog");
    dog1->eat("meat");
    delete dog1;

    GenericCreature* dog2 = CreatureCreator::createCreature("Dog");
    dog2->eat("bones");
    delete dog2;

    GenericCreature* dog3 = CreatureCreator::createCreature("Dog");
    dog3->eat("dog food");
    delete dog3;

    // Create and feed Cat instances
    GenericCreature* cat1 = CreatureCreator::createCreature("Cat");
    cat1->eat("fish");
    delete cat1;

    GenericCreature* cat2 = CreatureCreator::createCreature("Cat");
    cat2->eat("meat");
    delete cat2;

    GenericCreature* cat3 = CreatureCreator::createCreature("Cat");
    cat3->eat("cat food");
    delete cat3;

    return 0;
}