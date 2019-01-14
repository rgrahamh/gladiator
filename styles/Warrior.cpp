#include "Warrior.h"

#include <iostream>

/**
 * @brief The default constructor for the Warrior style
 * @return A pointer to a new Warrior object  
 */
Warrior::Warrior() : Style(WARRIOR, 10.0, 10.0, 0.0, 0.0, 50.0, 15.0, 12.0, 3.0, 2.0)
{
    // ABILITIES: LANCE, SWORD, AXE, LIGHT, DARK, ANIMA
    bool humAbils[6] = {true, true, false, false, false, true};
    this->setStyleAbilities(humAbils);
};