#include "Armor.h"

Armor::Armor(string n, double w, int val, double def, double res, int t) : Item(n, w, val)
{
    defense = def;
    resilience = res;
    type = t;
}
Armor::~Armor()
{
}
double Armor::getDefense()
{
    return defense;
}
double Armor::getResilence()
{
    return resilience;
}
int Armor::getType()
{
    return type;
}
int main()
{
    Armor glove = Armor("Hands of Holding", 1.2, 5, 3.2, 2.4, 2);
    cout << glove.getName() << endl
         << "Weight: " << glove.getWeight() << endl
         << "Value: " << glove.getValue() << endl
         << "Defense: " << glove.getDefense() << endl
         << "Resiliance: " << glove.getResilence() << endl;
    return 0;
}