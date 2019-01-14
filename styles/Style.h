#ifndef STYLE_H
#define STYLE_H

#include <string>

using namespace std;

class Style
{
  public:
    Style();
    Style(string t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l);
    ~Style();
    string getType();
    double getAttack();
    double getDefense();
    double getConstitution();
    double getResilience();
    double getEnergy();
    double getHealth();
    double getSpeed();
    double getSkill();
    double getLuck();
    bool *getStyleAbilities();
    void setStyleAbilities(bool *ab);
    string getStyleAbilityStr(bool *ab);

  private:
    enum abils
    {
        LANCE,
        SWORD,
        AXE,
        LIGHT,
        DARK,
        ANIMA
    };
    string type;
    double attack;
    double defense;
    double constitution;
    double resilience;
    double energy;
    double health;
    double speed;
    double skill;
    double luck;
    bool abilities[6];
};

#endif