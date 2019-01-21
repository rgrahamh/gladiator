#ifndef POTION_CONSTRUCTION
#define POTION_CONSTRUCTION

#include "../Potion.h"

using namespace std;

/**
 * @breif Constructs and passes back commonly created potions
 * @param potionName The name of the potions being constructed
 * @return A pointer to the new potions
 */
Potion* constructPotion(string potionName) {
    //HEALING
    if(potionName.compare("Lesser Healing Potion") == 0) {
        return new Potion(potionName, 1, 2, HEALING, 25);
    }
    else if(potionName.compare("Moderate Healing Potion") == 0) {
        return new Potion(potionName, 1, 10, HEALING, 50);
    }
    else if(potionName.compare("Massive Healing Potion") == 0) {
        return new Potion(potionName, 1, 15, HEALING, 75);
    }
    return NULL;
}
#endif