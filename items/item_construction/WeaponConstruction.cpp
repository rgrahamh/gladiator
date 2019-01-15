#ifndef WEAPON_CONSTRUCTION
#define WEAPON_CONSTRUCTION

#include "../Weapon.h"

using namespace std;

Weapon *constructWeapon(string weaponName)
{
    if (weaponName.compare("Bronze Dagger") == 0)
    {
        return new Weapon(weaponName, 3, 3, 5, SWORD, false);
    }
    else if (weaponName.compare("Iron Dagger") == 0)
    {
        return new Weapon(weaponName, 5, 5, 7, SWORD, false);
    }
    else if (weaponName.compare("Steel Dagger") == 0)
    {
        return new Weapon(weaponName, 7, 6, 9, SWORD, false);
    }
    return NULL;
}
#endif