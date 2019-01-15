#ifndef POTION_H
#define POTION_H
#include "Item.h"

const string potionEffects[2] = {"Healing", "Damaging"};

enum
{
  HEALING,
  DAMAGING
};

/**
 * @class Potion <Potion.h>
 * @brief A class to describe a particular potion to be used by player or enemy
 */ 
class Potion : public Item
{
public:
  Potion(string n, double w, int val, int efct, int amng);
  ~Potion();
  int getEffect();
  double getAmount();
  void print();

private:
  double amount;
  int effect;
};
#endif