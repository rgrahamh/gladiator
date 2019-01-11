#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item
{
public:
  Item(string n, double w, int val);
  ~Item();
  string getName();
  double getWeight();
  int getValue();
  void print();

protected:
  string name;
  double weight;
  int value;
};

#endif