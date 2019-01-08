#ifndef ITEM_H
#define ITEM_H
#include <string>

using namespace std;

class Item
{
  public:
    Item(string n, double w, int val);
    ~Item();
    string getName();
    double getWeight();
    int getValue();

  private:
    string name;
    double weight;
    int value;
};
#endif