#ifndef RACE_H
#define RACE_H

#include <string>

using namespace std;

#ifndef WEAPONS
#define WEAPONS
enum weapons
{
    LANCE,
    SWORD,
    AXE,
    LIGHT,
    DARK,
    ANIMA
};
#endif

enum races
{
  HUMAN,
  DWARF,
  ELF
};

class Race
{
  public:
    Race();
    Race(int t, double a, double d, double c, double r, double e, double h, double sp, double sk, double l);
    ~Race();
    int getType();
    double getAttack();
    double getDefense();
    double getConstitution();
    double getResilience();
    double getEnergy();
    double getHealth();
    double getSpeed();
    double getSkill();
    double getLuck();
    bool *getRaceAbilities();
    void setRaceAbilities(bool *ab);
    string getRaceAbilityString(bool *ab);

  private:
    int type;
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