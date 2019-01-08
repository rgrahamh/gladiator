#ifndef POTION_H
#define POTION_H
#include "Item.h"

class Potion : public Item
{
  public:
    enum
    {
        HEAL,
        DAMAGE
    };

    Potion(string n, double w, int val, int efct, int amng);
    int getEffect();
    double getAmount();

  private:
    double amount;
    int effect;
};
#endif