#include "Item.h"

/**
 * @breif Parameterized constructor for Item
 * @param n The name of the item
 * @param w The weight of the item
 * @param val The value of the item
 * @param t The type of item (defaults to MISC.)
 * @return An Item
 */
Item::Item(string n, double w, int val, int t = MISC)
{
    this->name = n;
    this->type = t;
    this->weight = w;
    this->value = val;
}

/**
 * @breif Destructor for Item
 */
Item::~Item()
{
}

/**
 * @breif Returns the item name
 * @return The item name
 */
string Item::getName()
{
    return this->name;
}

/**
 * @breif Returns the item type
 * @return The item type
 */
int Item::getType()
{
    return this->type;
}

/**
 * @breif Returns the item weight
 * @return The item weight
 */
double Item::getWeight()
{
    return this->weight;
}

/**
 * @breif Returns the item value
 * @return The item value
 */
int Item::getValue()
{
    return this->value;
}

/**
 * @breif Renames an item
 * @param The new item name
 */
int Item::setName(string n)
{
    this->name = n;
}

/**
 * @breif Prints information about the item
 */
void Item::print()
{
    cout << this->name << ":" << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}