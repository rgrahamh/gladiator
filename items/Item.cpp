#include "Item.h"

Item::Item(string n, string t, double w, int val)
{
    this->name = n;
    this->type = t;
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
string Item::getType()
{
    return this->type;
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