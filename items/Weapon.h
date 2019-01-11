#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

const string weaponTypes[6] = {"Lance", "Sword", "Axe", "Light", "Dark", "Anima"};

enum
{
  LANCE,
  SWORD,
  AXE,
  LIGHT,
  DARK,
  ANIMA
};

class Weapon : public Item
{
public:
  Weapon(string n, double w, int val, double dmg, int t);
  ~Weapon();
  double getDamage();
  int getType();
  void print();

private:
  double damage;
  int type;
};

#endif