#ifndef ARMOR_H
#define ARMOR_H

#include "Item.h"
#include "item_construction/ArmorConstruction.cpp"
#include <string>
#include <iostream>

const string armorTypes[8] = {"Helmet", "Gloves", "Boots", "Chest", "Pants", "Cloak", "Necklace", "Ring"};

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

/**
 * @class Armor <Armor.h>
 * @brief A class to describe a player- or enemy-equippable piece of armor
 */ 
class Armor : public Item
{
public:
  Armor(string n, double w, int val, double def, double res, int t);
  ~Armor();
  double getDefense();
  double getResilence();
  int getArmorType();
  void print();

private:
  int armorType;
  double defense;
  double resilience;
};

#endif