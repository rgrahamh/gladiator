#include "Item.h"

Item::Item(string n, double w, int val)
{
    name = n;
    weight = w;
    value = val;
}

Item::~Item()
{
}

string Item::getName()
{
    return name;
}
double Item::getWeight()
{
    return weight;
}
int Item::getValue()
{
    return value;
}