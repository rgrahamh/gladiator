#include "Human.h"

#include <iostream>
// ATTRIBUTES: TYPE, ATTACK, DEFENSE, CONSTITUTION, RESILIENCE, ENERGY, HEALTH, SPEED, SKILL, LUCK
Human::Human() : Race("human", 10.0, 10.0, 0.0, 0.0, 50.0, 15.0, 12.0, 3.0, 2.0)
{
    // ABILITIES: LANCE, SWORD, AXE, LIGHT, DARK, ANIMA
    bool humAbils[6] = {false, true, true, false, false, true};
    this->setRaceAbilities(humAbils);
};