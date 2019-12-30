#ifndef ITEM_CONSTRUCTION_H
#define ITEM_CONSTRUCTION_H

#include "../Armor.h"
#include "../Weapon.h"
#include "../Potion.h"

Potion* constructPotion(string potionName);
Weapon* constructWeapon(string weaponName);
Armor* constructArmor(string armorName);

#endif
