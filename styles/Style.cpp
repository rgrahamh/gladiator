#include "Style.h"

Style::Style()
{
}

Style::Style(string t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l)
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

Style::~Style()
{
}

double Style::getAttack()
{
    return this->attack;
}

double Style::getDefense()
{
    return this->defense;
}
double Style::getConstitution()
{
    return this->constitution;
}
double Style::getResilience()
{
    return this->resilience;
}
double Style::getEnergy()
{
    return this->energy;
}
double Style::getHealth()
{
    return this->health;
}
double Style::getSpeed()
{
    return this->speed;
}
double Style::getSkill()
{
    return this->skill;
}
double Style::getLuck()
{
    return this->luck;
}
string Style::getStyleAbilityStr(bool *ab)
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