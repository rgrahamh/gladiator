#include "Item.h"

Item::Item(string n, double w, int val)
{
    this->name = n;
    this->weight = w;
    this->value = val;
}

Item::~Item()
{
}

string Item::getName()
{
    return this->name;
}
double Item::getWeight()
{
    return this->weight;
}
int Item::getValue()
{
    return this->value;
}
void Item::print()
{
    cout << this->name << ":" << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}