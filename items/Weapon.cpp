#include "Weapon.h"
#include "iostream"

Weapon::Weapon(string n, double w, int val, double dmg, int t) : Item(n, w, val)
{
    this->damage = dmg;
    this->type = t;
}
Weapon::~Weapon()
{
}
double Weapon::getDamage()
{
    return this->damage;
}
int Weapon::getType()
{
    return this->type;
}

int main()
{
    Weapon sword = Weapon("Pairing Knife", 1.5, 2, 2, 2);
    cout << sword.getName() << endl
         << "Weight: " << sword.getWeight() << endl
         << "Value: " << sword.getValue() << endl
         << "Damage: " << sword.getDamage() << endl;
    return 0;
}