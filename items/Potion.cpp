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

int main()
{
    Potion healing = Potion("Helaing Potion", 0.2, 4, 1, 25);
    cout << healing.getName() << endl
         << "Weight: " << healing.getWeight() << endl
         << "Value: " << healing.getValue() << endl
         << "Healing: " << healing.getAmount() << endl;
    return 0;
}