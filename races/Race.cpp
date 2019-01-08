#include "Race.h"

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