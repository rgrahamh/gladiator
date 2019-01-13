#include "Character.h"

#include <iostream>

using namespace std;

Character::Character(string n, Race r, Style s)
{
    this->race = r;
    this->style = s;
    this->name = n;

    this->determineStats();
}

Character::~Character()
{
}

void Character::determineStats()
{
    this->attack = this->race.getAttack() + this->style.getAttack();
    this->defense = this->race.getDefense() + this->style.getDefense();
    this->constitution = this->race.getConstitution() + this->style.getConstitution();
    this->resilience = this->race.getResilience() + this->style.getResilience();
    this->energy = this->race.getEnergy() + this->style.getEnergy();
    this->health = this->race.getHealth() + this->style.getHealth();
    this->speed = this->race.getSpeed() + this->style.getSpeed();
    this->skill = this->race.getSkill() + this->style.getSkill();
    this->luck = this->race.getLuck() + this->style.getLuck();

    bool characterAbils[6] = {false, false, false, false, false, false};
    for (int i = 0; i < 6; i++)
    {
        characterAbils[i] = this->race.getRaceAbilities()[i] && this->style.getStyleAbilities()[i];
    }

    copy(characterAbils, characterAbils + sizeof(characterAbils), this->abilities);
}

string Character::getName()
{
    return this->name;
}

double Character::getAttack()
{
    return this->attack;
}

double Character::getDefense()
{
    return this->defense;
}
double Character::getConstitution()
{
    return this->constitution;
}
double Character::getResilience()
{
    return this->resilience;
}
double Character::getEnergy()
{
    return this->energy;
}
double Character::getHealth()
{
    return this->health;
}
double Character::getSpeed()
{
    return this->speed;
}
double Character::getSkill()
{
    return this->skill;
}
double Character::getLuck()
{
    return this->luck;
}

string Character::getCharacterAbilityString(bool *ab)
{
    string result = "";
    (ab[0]) ? result = result + " LANCE" : result = result + "";
    (ab[1]) ? result = result + " SWORD" : result = result + "";
    (ab[2]) ? result = result + " AXE" : result = result + "";
    (ab[3]) ? result = result + " LIGHT" : result = result + "";
    (ab[4]) ? result = result + " DARK" : result = result + "";
    (ab[5]) ? result = result + " ANIMA" : result = result + "";
    return result;
}

//int main()
//{
//    Race r = Human();
//    Style s = Warrior();
//    Character c = Character("Fletch", r, s);
//     cout << "Character Health: " << c.getHealth() << endl
//          << "Character Abilities: " << c.getAbilityStr(c.getAbilities()) << endl;
// }