#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

const string weaponTypes[6] = {"Lance", "Sword", "Axe", "Light", "Dark", "Anima"};

#ifndef WEAPONS
#define WEAPONS
enum weapons
{
  LANCE,
  SWORD,
  AXE,
  LIGHT,
  DARK,
  ANIMA
};
#endif

class Weapon : public Item
{
public:
  Weapon(string n, double w, int val, double dmg, int t);
  ~Weapon();
  double getDamage();
  int getWeaponType();
  void print();

private:
  double damage;
  int weaponType;
};

#endif