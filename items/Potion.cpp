#include "Potion.h"
#include <iostream>

Potion::Potion(string n, double w, int val, int efct, int amnt) : Item(n, w, val)
{
    this->effect = efct;
    this->amount = amnt;
}
int Potion::getEffect()
{
    return this->effect;
}
double Potion::getAmount()
{
    return this->amount;
}

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