#include "Potion.h"
#include <iostream>

/**
 * @brief The parameterized constructor for Potion
 * @param n The name of the potion
 * @param w The weight of the potion
 * @param val The value of the potion
 * @param efct The effect caused by the potion
 * @param amnt The amount of <effect> that the potion does
 * @return A new potion
 */
Potion::Potion(string n, double w, int val, int efct, int amnt) : Item(n, w, val, POTION)
{
    this->effect = efct;
    this->amount = amnt;
}

/**
 * @brief The destructor for Potion
 */
Potion::~Potion()
{
}

/**
 * @brief Returns the effect of the potion
 * @return The effect of the potion
 */
int Potion::getEffect()
{
    return this->effect;
}

/**
 * @brief Returns the amount of {effect} that the potion does
 * @return The amount of {effect} that the potion does
 */
double Potion::getAmount()
{
    return this->amount;
}

/**
 * @brief Prints information about the potion
 */
void Potion::print()
{
    cout << this->name << ":" << endl
         << "Effect: " << potionEffects[(this->effect) - 1] << endl
         << "Amount: " << this->amount << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}

// int main()
// {
//     Potion healing = Potion("Helaing Potion", 0.2, 4, 1, 25);
//     healing.print();
//     return 0;
// }