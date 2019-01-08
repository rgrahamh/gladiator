#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
public:
  enum
  {
    LANCE,
    SWORD,
    AXE,
    LIGHT,
    DARK,
    ANIMA
  };

  Weapon(string n, double w, int val, double dmg, int t);
  ~Weapon();
  double getDamage();
  int getType();

private:
  double damage;
  int type;
};

#endif