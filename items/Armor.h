#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include <iostream>

class Armor : public Item
{
public:
  enum
  {
    HELMET,
    GLOVES,
    BOOTS,
    CHEST,
    PANTS,
    CLOAK,
    NECKLACE,
    RING
  };

  Armor(string n, double w, int val, double def, double res, int t);
  ~Armor();
  double getDefense();
  double getResilence();
  int getType();

private:
  int type;
  double defense;
  double resilience;
};

#endif