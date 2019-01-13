#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item
{
public:
  Item(string n, string t, double w, int val);
  ~Item();
  string getName();
  string getType();
  double getWeight();
  int getValue();
  void print();

protected:
  string type;
  string name;
  double weight;
  int value;
};
#endif