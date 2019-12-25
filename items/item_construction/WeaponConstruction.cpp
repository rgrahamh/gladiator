#ifndef WEAPON_CONSTRUCTION
#define WEAPON_CONSTRUCTION

#include "../Weapon.h"

using namespace std;

Weapon* constructWeapon(string weaponName) {
    if(weaponName.compare("Bronze Dagger") == 0) {
        return new Weapon(weaponName, 3.0, 3.0, 5.0, SWORD, false, 0, 0);
    }
    else if(weaponName.compare("Iron Dagger") == 0) {
        return new Weapon(weaponName, 5.0, 5.0, 7.0, SWORD, false, 0, 0);
    }
    else if(weaponName.compare("Steel Dagger") == 0) {
        return new Weapon(weaponName, 7.0, 6.0, 9.0, SWORD, false, 0, 0);
    }
    return NULL;
}
#endif
