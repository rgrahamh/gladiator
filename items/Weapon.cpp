#include "Weapon.h"
#include "iostream"

Weapon::Weapon(string n, double w, int val, double dmg, int t) : Item(n, w, val)
{
    damage = dmg;
    type = t;
}
Weapon::~Weapon()
{
}
double Weapon::getDamage()
{
    return damage;
}
int Weapon::getType()
{
    return type;
}

int main()
{
    Weapon glove = Weapon("Pairing Knife", 1.5, 2, 2, 2);
    cout << glove.getName() << endl
         << "Weight: " << glove.getWeight() << endl
         << "Value: " << glove.getValue() << endl
         << "Defense: " << glove.getDamage() << endl;
    return 0;
}