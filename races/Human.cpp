#include "Human.h"

#include <iostream>

/**
 * @brief The default constructor for the Human race
 * @return A pointer to a new Human object  
 */
Human::Human() : Race(HUMAN, 10.0, 10.0, 0.0, 0.0, 50.0, 15.0, 12.0, 3.0, 2.0) {
    // ABILITIES: LANCE, SWORD, AXE, LIGHT, DARK, ANIMA
    bool humAbils[6] = {false, true, true, false, false, true};
    this->setRaceAbilities(humAbils);
};