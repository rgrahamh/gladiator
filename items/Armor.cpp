#include "Armor.h"

/**
 * @brief The parameterized constructor for Armor
 * @param n The name of the piece of armor
 * @param w The weight of the piece of armor
 * @param val The value of the piece of armor
 * @param def The additional defense provided by the piece of armor
 * @param res The aditional resilience provided by the piece of armor
 * @param t The type of armor
 * @return A new piece of armor
 */
Armor::Armor(string n, double w, int val, double def, double res, int t) : Item(n, w, val, ARMOR)
{
    this->defense = def;
    this->resilience = res;
    this->armorType = t;
}

/**
 * @brief The destructor for Armor
 */
Armor::~Armor()
{
}

/**
 * @brief Returns the defense stat of the armor
 * @return The defense stat of the armor
 */
double Armor::getDefense()
{
    return this->defense;
}

/**
 * @brief Returns the resilience stat of the armor
 * @return The resilience stat of the armor
 */
double Armor::getResilence()
{
    return this->resilience;
}

/**
 * @brief Returns the type of armor
 * @return The type of armor
 */
int Armor::getArmorType()
{
    return this->armorType;
}

/**
 * @brief Prints information about the armor
 */
void Armor::print()
{
    cout << this->name << ":" << endl
         << "Armor type: " << armorTypes[(this->armorType) - 1] << endl
         << "Defense: " << this->defense << endl
         << "Resiliance: " << this->resilience << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}

// int main()
// {
//     Armor glove = Armor("Hands of Holding", 1.2, 5, 3.2, 2.4, 2);
//     glove.print();
//     return 0;
// }