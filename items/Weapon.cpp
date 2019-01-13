#include "Weapon.h"
#include "iostream"

Weapon::Weapon(string n, double w, int val, double dmg, int t) : Item(n, "weapon", w, val)
{
    this->damage = dmg;
    this->weaponType = t;
}
Weapon::~Weapon()
{
}
double Weapon::getDamage()
{
    return this->damage;
}
int Weapon::getWeaponType()
{
    return this->weaponType;
}
void Weapon::print()
{
    cout << this->name << ":" << endl
         << "Weapon type: " << weaponTypes[(this->weaponType) - 1] << endl
         << "Damage: " << this->damage << endl
         << "Value: " << this->value << endl
         << "Weight: " << this->weight << endl;
}

// int main()
// {
//     Weapon sword = Weapon("Pairing Knife", 1.5, 2, 2, 2);
//     sword.print();
//     return 0;
// }