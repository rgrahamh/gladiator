#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

const string weaponTypes[7] = {"Lance", "Sword", "Axe", "Sheild", "Light", "Dark", "Anima"};

#ifndef WEAPONS
#    define WEAPONS
enum weapons { LANCE, SWORD, AXE, SHIELD, LIGHT, DARK, ANIMA };
#endif

/**
 * @class Weapon <Weapon.h>
 * @brief A class to describe a weapon equipabble by a player or enemy
 */
class Weapon : public Item {
  public:
    Weapon(string n, double w, int val, double dmg, int t, bool thnd, double def, double res);
    ~Weapon();
    double getDamage();
    int getWeaponType();
    void print();

  private:
    double damage;
    double defense;
    double resilience;
    int weaponType;
    bool twoHanded;
};

#endif