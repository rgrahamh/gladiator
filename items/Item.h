#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

enum
{
  WEAPON,
  ARMOR,
  POTION,
  MISC
};

class Item
{
public:
  Item(string n, double w, int val, int t);
  ~Item();
  string getName();
  int getType();
  double getWeight();
  int getValue();
  void print();

protected:
  int type;
  string name;
  double weight;
  int value;
};
#endif