#include "Armor.h"

Armor::Armor(string n, double w, int val, double def, double res, int t) : Item(n, w, val)
{
    this->defense = def;
    this->resilience = res;
    this->type = t;
}
Armor::~Armor()
{
}
double Armor::getDefense()
{
    return this->defense;
}
double Armor::getResilence()
{
    return this->resilience;
}
int Armor::getType()
{
    return this->type;
}
void Armor::print()
{
    cout << this->name << ":" << endl
         << "Armor type: " << armorTypes[(this->type) - 1] << endl
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