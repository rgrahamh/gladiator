#ifndef POTION_H
#define POTION_H
#include "Item.h"

const string potionEffects[2] = {"Healing", "Damaging"};

enum
{
  HEALING,
  DAMAGING
};

class Potion : public Item
{
public:
  Potion(string n, double w, int val, int efct, int amng);
  int getEffect();
  double getAmount();
  void print();

private:
  double amount;
  int effect;
};
#endif