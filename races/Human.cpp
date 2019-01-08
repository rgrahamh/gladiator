#include "Human.h"

#include <iostream>
// ATTRIBUTES: TYPE, ATTACK, DEFENSE, CONSTITUTION, RESILIENCE, ENERGY, HEALTH, SPEED, SKILL, LUCK
Human::Human() : Race("human", 10.0, 10.0, 0.0, 0.0, 50.0, 15.0, 12.0, 3.0, 2.0)
{
    // ABILITIES: LANCE, SWORD, AXE, LIGHT, DARK, ANIMA
    bool humAbils[6] = {false, true, true, false, false, true};
    this->setAbilities(humAbils);
};

string Human::getAbilityStr(bool *ab)
{
    string result = "";
    (ab[0]) ? result = result + " LANCE" : result = result + "";
    (ab[1]) ? result = result + " SWORD" : result = result + "";
    (ab[2]) ? result = result + " AXE" : result = result + "";
    (ab[3]) ? result = result + " LIGHT" : result = result + "";
    (ab[4]) ? result = result + " DARK" : result = result + "";
    (ab[5]) ? result = result + " ANIMA" : result = result + "";
    return result;
}