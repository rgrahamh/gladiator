#ifndef ARMOR_CONSTRUCTION
#define ARMOR_CONSTRUCTION

#include "../Armor.h"

using namespace std;

Armor *constructArmor(string armorName)
{
    if (armorName.compare("Leather Vest") == 0)
    {
        return new Armor(armorName, 5, 5, 3, 2, CHEST);
    }
    else if (armorName.compare("Iron Chestplate") == 0)
    {
        return new Armor(armorName, 15, 15, 5, 4, CHEST);
    }
    else if (armorName.compare("Steel Chestplate") == 0)
    {
        return new Armor(armorName, 17, 20, 7, 5, CHEST);
    }
    return NULL;
}
#endif