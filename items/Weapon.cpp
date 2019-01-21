#include "Weapon.h"

#include <iostream>

/**
 * @brief Default constructor for the Weapon class
 * @param n The name of the weapon
 * @param w The weight of the weapon
 * @param val The value of the weapon
 * @param dmg How much damage the weapon deals
 * @param t The type of weapon
 * @param thnd If the weapon is two-handed
 * @return A new Weapon
 */
Weapon::Weapon(string n, double w, int val, double dmg, int t, bool thnd, double def = 0, double res = 0)
    : Item(n, w, val, WEAPON) {
    this->damage = dmg;
    this->weaponType = t;
    this->twoHanded = thnd;
    this->defense = def;
    this->resilience = res;
}

/**
 * @brief The destructor for Weapon
 */
Weapon::~Weapon() {
}

/**
 * @brief Returns the amount of damage that the weapon deals
 * @return The amount of damage that the weapon deals
 */
double Weapon::getDamage() {
    return this->damage;
}

/**
 * @brief Returns the type of weapon
 * @return The type of weapon
 */
int Weapon::getWeaponType() {
    return this->weaponType;
}

/**
 * @brief Prints information about the weapon
 */
void Weapon::print() {
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