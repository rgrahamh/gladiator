#include "Race.h"

Race::Race()
{
}

Race::Race(string t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l)
{
    this->type = t;
    this->attack = a;
    this->defense = d;
    this->constitution = c;
    this->resilience = r;
    this->energy = e;
    this->health = h;
    this->speed = sp;
    this->skill = sk;
    this->luck = l;
}

Race::~Race()
{
}

double Race::getAttack()
{
    return this->attack;
}

double Race::getDefense()
{
    return this->defense;
}
double Race::getConstitution()
{
    return this->constitution;
}
double Race::getResilience()
{
    return this->resilience;
}
double Race::getEnergy()
{
    return this->energy;
}
double Race::getHealth()
{
    return this->health;
}
double Race::getSpeed()
{
    return this->speed;
}
double Race::getSkill()
{
    return this->skill;
}
double Race::getLuck()
{
    return this->luck;
}
string Race::getRaceAbilityStr(bool *ab)
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