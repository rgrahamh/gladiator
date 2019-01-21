#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

enum { WEAPON, ARMOR, POTION, MISC };

/**
 * @class Item <Item.h>
 * @brief A class to describe an item equippable by a player or enemy
 */
class Item {
  public:
    Item(string n, double w, int val, int t);
    ~Item();
    string getName();
    int getType();
    double getWeight();
    int getValue();
    int setName(string n);
    void print();

  protected:
    int type;      /**< an enumeration int for the type of item */
    string name;   /**< the name of the item */
    double weight; /**< how much an item weighs */
    int value;     /**< how much an item costs */
};
#endif