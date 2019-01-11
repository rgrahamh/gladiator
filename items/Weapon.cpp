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
void Weapon::print()
{
    cout << this->name << ":" << endl
         << "Weapon type: " << weaponTypes[(this->type) - 1] << endl
         << "Damage: " << this->damage << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}

int main()
{
    Weapon sword = Weapon("Pairing Knife", 1.5, 2, 2, 2);
    sword.print();
    return 0;
}