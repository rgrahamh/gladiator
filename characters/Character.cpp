#include "Character.h"

#include <iostream>

using namespace std;

/**
 * @breif The parameterized constructor for the Character class
 * @param n The name of the character
 * @param r The race of the character
 * @param s The style of the character
 */
Character::Character(string n, Race r, Style s)
{
    this->race = r;
    this->style = s;
    this->name = n;

    this->determineStats();
}

/**
 * @breif The destructor for the Character class
 */
Character::~Character()
{
}

/**
 * @breif Determines the stats of a character
 */
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

/**
 * @breif Returns the name of the character
 * @return The name of the character
 */
string Character::getName()
{
    return this->name;
}

/**
 * @breif Returns the attack of the character
 * @return The attack of the character
 */
double Character::getAttack()
{
    return this->attack;
}

/**
 * @breif Returns the defense of the character
 * @return The defense of the character
 */
double Character::getDefense()
{
    return this->defense;
}

/**
 * @breif Returns the constitution of the character
 * @return The constitution of the character
 */
double Character::getConstitution()
{
    return this->constitution;
}

/**
 * @breif Returns the resilience of the character
 * @return The resilience of the character
 */
double Character::getResilience()
{
    return this->resilience;
}

/**
 * @breif Returns the energy of the character
 * @return the energy of the character
 */
double Character::getEnergy()
{
    return this->energy;
}

/**
 * @breif Returns the health of the character
 * @return The health of the character
 */
double Character::getHealth()
{
    return this->health;
}

/**
 * @breif Returns the speed of the character
 * @return The speed of the character
 */
double Character::getSpeed()
{
    return this->speed;
}

/**
 * @breif Returns the skill of the character
 * @return The skill of the character
 */
double Character::getSkill()
{
    return this->skill;
}

/**
 * @breif Returns the luck of the character
 * @return The luck of the character
 */
double Character::getLuck()
{
    return this->luck;
}

/**
 * @breif Returns a string representation of the abilities that the character possesses
 * @param ab The bool array of the character's abilities
 * @return The string representation of all of the character's abilities
 */
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